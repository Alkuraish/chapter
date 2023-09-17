#include <iostream>
#include <string>


class Box 
{
    public:
        Box() = default;
        Box(double length, double width, double height): _length{length}, _width{width}, _height{height} { }

        double& Length()    { return _length; }
        double& Widht()     { return _width;  }
        double& Height()    { return _height; }

        const double& Length() const { return _length; }
        const double& Width()  const { return _width;  } 
        const double& Height() const { return _height; }
    
    private:
        double _length;
        double _width;
        double _height;
};

