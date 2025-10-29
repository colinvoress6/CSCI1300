#include <iostream> 
#include <string>

using namespace std;

class Quadrilateral{
private:
    double height, length;

public:
    Quadrilateral();
    Quadrilateral(double h, double l);
    void setHeight(double h);
    void setLength(double l);
    double getHeight();
    double getLength();
    bool isSquare();
    double getPerimeter();
    double getArea();

};

Quadrilateral::Quadrilateral(){
    height = 0;
    length = 0;
}

Quadrilateral::Quadrilateral(double h, double l){
   
}

double Quadrilateral::getHeight(){
    return height;
}

double Quadrilateral::getLength(){
    return length;
}

