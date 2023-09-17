#include <iostream>
#include <string_view>
#include <string>
#include <vector>


void find_words(std::vector<std::string>& words, std::string_view text, std::string_view separators) {

    using namespace std;

    size_t start {text.find_first_not_of(separators)};
    size_t end {};

    while(start != string_view::npos) {
        end = text.find_first_not_of(separators, start + 1);
        if (end == string::npos) 
            end = text.length();
        words.push_back(string{text.substr(start, end - start)});
        start = text.find_first_not_of(separators, end + 1);
    }

}



int main(int args, char** argv) {

}