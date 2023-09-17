#include <optional>
#include <iostream>
#include <string>


std::optional<size_t> find_last(
    const std::string& string, char to_find,
    std::optional<size_t> start_index = std::nullopt);



int main(int args, char** argv) {
    const auto string = "Growinng old in mandatory; growing up in optonal.";

    const std::optional<size_t> found_a {find_last(string, 'a')};
    if (found_a) 
        std::cout << "Found the last a at index " << *found_a << std::endl;
    
    const auto found_b {find_last(string, 'b')};
    if (found_b.has_value()) 
        std::cout << "Found the last b at index " << found_b.value() << std::endl;

    const auto found_early_i {find_last(string, 'i', 10)};
    if  (found_early_i != std::nullopt)
        std::cout << "Found an early i at index " <<  *found_early_i << std::endl;

}

std::optional<size_t> find_last(
    const std::string& string, char to_find, 
    std::optional<size_t> start_index)
{
    if (string.empty())
        return std::nullopt;

    size_t index = start_index.value_or(string.size() - 1);

    while (true)
    {
        if (string[index] == to_find) return index;
        if (index == 0) return std::nullopt;
        --index;
    }

}