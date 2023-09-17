#include <iostream>
#include <vector>

template<typename T, size_t N> T average(const T (&array)[N]);

int main(int args, char** argv) {
    int array[] {5, 6, 4, 3};
    std::cout <<  average(array) << std::endl;
}


template<typename T, size_t N> 
T average(const T (&array)[N]) {
    T sum {0};
    for (T value: array) {
        sum += value;
    }
    return sum / N;
}