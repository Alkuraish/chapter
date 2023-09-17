#include <iostream>

class Cube {
    public:
        explicit Cube(double side);

        double volume();

        bool hasLargerVolume(Cube cube);

    private:
        double m_side;
};

Cube::Cube(double side): m_side{side} {}

double Cube::volume() { return m_side * m_side; }

bool Cube::hasLargerVolume(Cube cube) { return volume() > cube.volume();  }


int main(int args, char** argv) {
    Cube cube_1 {50};
    Cube cube_2 {69};

    if ( cube_1.hasLargerVolume(Cube {40}) )
        std::cout << "Fisrt Cube is larger than cube with volume equivalent 40" << std::endl;

    return 0;
}
