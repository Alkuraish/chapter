#include <iostream>
#include <span>
#include <array>

// double largest(std::span<double> data) {
//     double max {data[0]};
//     for (auto value: data)
//         if (max < value) max = value;
//     return max;
// }


int main(int args, char** argv) {
    double a[] {1.6, 2.5, 6.7};
    std::span<int> a;
    std::cout << std::size(a) << std::endl;
}   