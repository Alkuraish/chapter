#include <iostream>
#include <memory>


int main(int args, char* argv[]) {
    std::shared_ptr<int> share{std::make_shared<int>(5)};
    std::shared_ptr<int> share_1{std::make_shared<int>(6)};

    std::shared_ptr<int> share_2 {share};

}