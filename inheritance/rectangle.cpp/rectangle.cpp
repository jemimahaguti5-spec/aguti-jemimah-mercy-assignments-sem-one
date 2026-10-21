#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    void setLength(double l)
    {
        length = l;
    }

    void setWidth(double w)
    {
        width = w;
    }

    double getLength()
    {
        return length;
    }

    double getWidth()
    {
        return width;
    }

    double area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r1;

    r1.setLength(10);
    r1.setWidth(5);

    cout << "Length: " << r1.getLength() << endl;
    cout << "Width: " << r1.getWidth() << endl;
    cout << "Area: " << r1.area() << endl;

    return 0;
}