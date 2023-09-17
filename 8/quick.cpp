#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

size_t need_index(std::vector<int>& array, int left, int right);



void quick_sort(std::vector<int>& array, int left, int right) {
    if (left < right) {
        size_t index = need_index(array, left, right);
        quick_sort(array, left, index - 1);
        quick_sort(array, index + 1, right);
    }

}


size_t need_index(std::vector<int>& array, int left, int right) {
    int value = array[right];
    int this_index = left - 1;

    for (int j {left}; j <= right - 1; ++j) {
        if (array[j] <= value) {
            std::swap(array[j], array[++this_index]);
        }
    }
    std::swap(array[++this_index], array[right]);

    return this_index;
}

int main(int args, char* argv[]) {
    std::vector<int> v;
    int value;
    while (std::cin.peek() != '\n') {
        std::cin >> value;
        v.push_back(value);
    }
    std::cout << std::endl;


    quick_sort(v, 0, v.size() - 1);
    for (auto value: v) std::cout << value << ' ';
}