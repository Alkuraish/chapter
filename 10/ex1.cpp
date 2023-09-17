#include <iostream>
#include <vector>
#include <string>

template <typename T> T larger(T, T);
template <typename T> T* larger(T*, T*);
template <typename T> const T* larger(const std::vector<T>& data);


int main(int args, char** argv) {
    int big_int {17011983}, small_int {10};
    std::cout << "Larger of " << big_int << " and " << small_int 
                            << " is " << larger(big_int, small_int) << std::endl;
    
    std::cout << "Larger of " << big_int << " and " << small_int
                        << " is " << *larger(&big_int, &small_int) << std::endl;


    std::vector<std::string> words {"The", "higher", "the", "fewer"};
    std::cout << "The larger word in words is" << *larger(words) << std::endl;
}


template <typename T>
T larger(T a, T b) {
    if (a > b) 
        return a;
    return b;
}

template <typename T> 
T* larger(T* a, T* b) {
    if (*a > *b)
        return a;
    return b;
}

template <typename T>
const T* larger(const std::vector<T>& data) {
    const T* result {};
    for (auto& value: data)
        if (!result || (value > *result) )  result = &value;
    return result;
}