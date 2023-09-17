#include <iostream>
#include <memory>

class Din_array {
    static const size_t max_size = 10e5;
    private:
        size_t size;
        std::unique_ptr<int[]> pointer;

        size_t get_index_store(size_t index);

    public:
        Din_array(); 

        void push_back(int value);

        void insert(int value, size_t index);

        void erase(size_t index);

    friend std::ostream& operator<<(std::ostream& stream, Din_array Array);
};

size_t Din_array::get_index_store(size_t index) {
    return index - 1; 
}


Din_array::Din_array() {
    this->pointer = std::make_unique<int[]>(Din_array::max_size);
    this->size    = 0;
}

void Din_array::push_back(int value) {
    if (this->size <= Din_array::max_size)  {
        this->pointer[get_index_store(size + 1)] = value;
        this->size++;
    }
}


void Din_array::insert(int value, size_t index) {
    if (index <= Din_array::max_size) {
        for (size_t i {size}; i >= index; --i) 
            pointer[i] = pointer[i - 1];
        pointer[index - 1] = value;
        this->size++;  
    }
    
}


void Din_array::erase(size_t index) {
    if (index <= this->size) {
        for (size_t i = {index + 1}; i <= size; ++i) 
            pointer[get_index_store(i - 1)] = pointer[get_index_store(i)];
        this->size++;
    }
}

std::ostream& operator<<(std::ostream& stream, Din_array Array) {
    for (size_t i  {1}; i <= Array.size; ++i)  
        stream << Array.pointer[Array.get_index_store(i)] << ' ';
    return stream;
}


// using array = Din_array; 

int main(int args, char* argv[]) {
    Din_array array;    
    array.push_back(10);

    std::cout << arr << std::endl;
}




