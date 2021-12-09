//
// Created by Ayoub on 05/12/2021.
//

#include <iostream>
class Shape
{
public:
    float larg, haut;
    Shape(float a, float b) : larg(a), haut(b) {} // larg = a ; haut = b ;
};
class Rectangle : public Shape
{
public:
    Rectangle(float a, float b) : Shape(a, b) {} // On peut utiliser les méthodes de "mère" : (Shape)
    float area() { return (larg * haut); }       // la méthode qui calcule la surface de rectangle
};
class Triangle : public Shape
{
public:
    Triangle(float a, float b) : Shape(a, b) {}
    float area() { return (larg * haut / 2); } // la méthode qui calcule la surface de triangle
};
int main()
{
    Rectangle rectangle(5, 2.5);
    Triangle triangle(2.5, 4.1);
    std::cout << rectangle.area() << std::endl;
    std::cout << triangle.area() << std::endl;
    return 0;
}