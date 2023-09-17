#include <iostream>
#include <vector>


auto sqrt(auto value);

template<typename T> auto average(const std::vector<T>& ex);


int main(int args, char** argv) {
    
}

auto sqrt(auto value) {
    return value * value;
}