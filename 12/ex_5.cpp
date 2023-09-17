#include <iostream>

class Box {
    public:
        Box() = default;
        Box(double length, double height, double width):
            m_length{length}, m_height{height}, m_width{width} { }
        Box* setLength(double value);
        Box* setWidth(double value);
        Box* setHeight(double value);
    private:
        double m_length;
        double m_height;
        double m_width;
    friend std::ostream& operator<<(std::ostream& stream, Box& box);
};

Box* Box::setLength(double value) {
    m_length = value;
    return this; 
}

Box* Box::setHeight(double value) {
    m_height = value;
    return this;
}

Box* Box::setWidth(double value) {
    m_width = value;
    return this;
}

std::ostream& operator<<(std::ostream& stream, Box& box) {
    stream << box.m_length << '\t' << box.m_height << '\t' << box.m_width;
    return stream;
}


int main(int args, char** argv) {
    Box* box  {new Box{2.45, 4.5, 6.3}};
    box->setHeight(5.4)->setLength(5.6)->setWidth(6.8);

    std::cout << *box << std::endl;

    return 0;
}


