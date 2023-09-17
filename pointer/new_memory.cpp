#include <iostream>

int main(int args, char* argv[]) {
    auto rows {10};

    auto carrots{ new double[rows][4] {} };

    carrots[0][0] = 0;


    delete [] carrots;
    carrots = nullptr;

}