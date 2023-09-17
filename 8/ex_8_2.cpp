#include <iostream>
#include <array>
#include <string>
#include <vector>

std::string reverse(std::string str) {
    for (size_t i {0}; i <= str.length() / 2; ++i) {
        std::swap(str[i], str[str.length()  - 1 - i]);
    }
    return str;
}

std::vector<char> reverse(std::vector<char> str) {
    for (size_t i {0}; i <= str.size() / 2; ++i) {
        std::swap(str[i], str[str.size() - 1 - i]);
    }
    return str;
}

int main(int args, char* argv[]) {
    std::string str {"help"};

    std::string str_1 = reverse(str);

    std::cout << str_1  << std::endl;
}