#include <iostream>


class Box {
    public:
        Box(double length, double width, double  height): 
            m_length{length}, m_width{width}, m_height{height} { }

        explicit Box(double side): Box{ side, side, side } { }  

        Box(const Box& box);

    friend std::ostream& operator<<(std::ostream& stream, const Box& box);

    private:
        double m_length;
        double m_width;
        double m_height;
};

Box::Box(const Box& box): Box{box.m_length, box.m_height, box.m_width} {}

std::ostream& operator<<(std::ostream& stream, const Box& box) {
    stream << box.m_length << ' ' << box.m_height << ' ' << box.m_width;
}


int main(int args, char **argv) {

    Box box {5.0};

    

    Box box_1 {box};

    std::cout << box_1 << std::endl;

    return 0;
}