#include <iostream>

template <typename T1, typename T2> 
auto larger(T1 value_1, T2 value_2) {
    return value_1 > value_2 ? value_1 : value_2;
}

int main(int args, char** argv) {
    int small_int {10};
    std::cout << larger(small_int, 9.8) << std::endl;
}