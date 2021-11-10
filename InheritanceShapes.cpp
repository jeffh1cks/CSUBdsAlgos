#include <iostream>

using namespace std;


class Shape
{
    public:
       virtual  double calc_area() = 0;

};

class Circle: public Shape
{
    private: 
       double radius;
    public:

    Circle(double r)
    {
        radius = r;
    }
    double calc_area()
    {
        return 3.1415 * radius * radius;
    }
};

class Square : public Shape
{
    private:
        double side;
    public:
        Square(double s)
        {
            side = s;
        }
        double calc_area()
        {
            return side * side;
        }
};

class Triangle : public Shape
{

};

int main()
{
    Circle c1(10);
    Square s1(4);
    Shape * shape1;
    cout<< "Circle area: "<< c1.calc_area() << endl;
    cout<< "Square area: " <<s1.calc_area() << endl;
    cout << shape1 -> calc_area()<< endl;


    int choice;
    double dimension;

    cout<<"What shape? (1= Circle, 2= square) ";
    cin >> choice;

    switch(choice) 
    {
        case 1:
            cout<< "Enter the radius: ";
            cin >> dimension;
            shape1 = new Circle(dimension);
            break;
        case 2:
            cout<< "Enter the side length: ";
            cin >> dimension;

            shape1 = new Square(dimension);
            break;
    }


    cout << shape1->calc_area() << endl; 

    delete shape1; 
        return 0;

}
