#include <iostream>

class Box {
    public:
        Box(double length, double width, double height);
        Box(double side);
    private:
        double m_length;
        double m_widht;
        double m_height;
};

Box::Box(double length, double width, double height): 
    m_length{length}, m_widht{width}, m_height{height} {}
    
Box::Box(double side): Box{side, side, side} {}