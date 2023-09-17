#include <iostream>


template <typename ReturnType, typename TypeFirst, typename TypeSecond>
ReturnType larger(TypeFirst first, TypeSecond second) {
    if (first > second) 
        return first;
    return second;
} 

int main(int args, char** argv) {
    int first {10};
    double second {12.56};

    std::cout << larger<int>(first, second) << std::endl;
    std::cout << larger<double, double, double>(first, second) << std::endl;
    std::cout << larger<double, int, int>(first, second) << std::endl;


    return 0;
}