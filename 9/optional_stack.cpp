#include <iostream>
#include <optional>

struct stack {
    int* arr;
    size_t size;
};

std::optional<int> pop(stack stack) {
    if (stack.size == 0)
        return std::nullopt;
    else {
        stack.arr[stack.size-- - 1];
    }
}


int main(int args, char** argv) {
    int arr[0];
    stack stack = {arr, 0};
    if (pop(stack))
        std::cout << *pop(stack) << std::endl;
}