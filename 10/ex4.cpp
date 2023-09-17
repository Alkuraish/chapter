#include <iostream>
#include <vector>


template <typename T1, typename T2> const auto& larger(const T1& value_1, const T2& value_2);


template <typename T1, typename T2>
const auto& larger(const T1& value_1, const T2& value_2 ) {
    return value_1 > value_2 ? value_1 : value_2;
}

int main(int args, char** argv) {
    std::vector<int> array {1, 2, 5, 3};
    std::vector<int> array_2 {2, 3,4, 6};
    auto arr = larger(array, array_2);

    for (auto data: arr) {
        std::cout << data << ' ';
    }
}