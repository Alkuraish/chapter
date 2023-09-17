#include <iostream>
#include <vector>

template <typename T1, typename ReturnType = T1> ReturnType larger(T1 value_1, T1 value_2);


int main(int args, char** argv) {
    std::cout << larger(5, 6) << std::endl;
    std::cout << larger<double>(5, 6) << std::endl;
}

template <typename T1, typename ReturnType = T1>
ReturnType larger(T1 value_1, T1 value_2) {
    return value_1 > value_2 ? value_1 : value_2;
}