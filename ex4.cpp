//
// Created by Ayoub on 05/12/2021.
//

#include <iostream>
class mere
{
public:
    void display() { std::cout << "je suie la mere" << std::endl; }
};
class fille : public mere
{
public:
    void display() { std::cout << "je suis la fille" << std::endl; }
};
int main()
{
    fille f;
    f.display();
    return 0;
}