#include <iostream>
#include <string>


int main(int args, char* argv[]) {
    std::string str {"Hello"};

    /* Method of string for convert C-string */
    const char* s = str.c_str(); // convert string to c_style string
    const char* s_1 = str.data();

    /*Concareting string*/
    std::string name {"Sultan"};
    std::string n {name.substr(0, 2)};
    std::string n_1 {name + n};

    /* Compare string */
    std::string str_1 {"help me"};
    std::string str_2 {"helpm"};
    const int value = str_1.compare(1, 4, str_2, 1, 4);

    if (str_1.find("m") == std::string::npos)
        std::cout << "'m' is not found in string" << std::endl;
    return 0;
}