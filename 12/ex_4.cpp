#include <iostream>

class Box {
    private:
        double m_length {1.5};
        double m_height {4.5};
        double m_width  {4.6};


    /* constructor current class */
    public:
        Box()                   = default;
        Box(const Box& box)     = delete;
        Box(double length, double height, double widht);

    public:
        void change_length(const Box& box);

};

Box::Box(double length, double height, double width): 
    m_length {length}, m_height {height}, m_width {width} {}


void Box::change_length(const Box& box) {
    m_length = box.m_length;
}



int main(int args, char** argv) {
    Box box {5.6, 7.8, 5.6};
    Box box_1 {5.7, 0.6, 7.5};
    box_1.change_length(box);


    return 0;
}