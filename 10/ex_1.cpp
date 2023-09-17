#include <iostream> 
#include <string>
#include <vector>


template<typename T> auto combine_vector(T arr_1, T arr_2);
template<typename Return_type, typename Arg_type> Return_type larger(Arg_type, Arg_type);
template<typename T> T smaller(T a, T b);  
template<typename Arg_type_1, typename Arg_type_2> auto combine(Arg_type_1 a, Arg_type_2 b);


int main(int args, char* argv[]) {
    std::cout << combine_vector(std::vector<int>({1, 2, 4}), std::vector<int>({1, 2})) << std::endl;
    return 0;
}


template<typename Return_type, typename Arg_type>
Return_type larger(Arg_type a, Arg_type b) {
    return static_cast<Return_type>(a > b ? a : b);
}

template<typename T> T smaller(T a, T b) {
    return a < b ? a : b;
}

template<typename T>
auto combine_vector(T arr_1, T arr_2) {
    return for_each
}