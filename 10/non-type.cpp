#include <iostream>
#include <vector>

template<int upper, int lower, typename T> bool range(T value);


int main(int args, char** argv) {
    const int small_int {10};
    const int upper {70}, lower {5};

    std::cout << range<upper, lower>(small_int) << std::endl;
}

template<int upper, int lower, typename T> 
bool range(T value) {
    return (upper >= value) && (value >= lower);
}