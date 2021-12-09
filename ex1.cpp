//
// Created by Ayoub on 05/12/2021.
//

#include <iostream>
class MyClass
{
public:
    MyClass();  // constructeur par défaut
    ~MyClass(); // destructeur
};
MyClass::MyClass()
{
    std::cout << "bienvenue dans notre programme " << std::endl;
}
MyClass::~MyClass()
{
    std::string name;
    std::cout << "Entrer votre nome : ";
    std::cin >> name;
    std::cout << "Bonjour " << name << std::endl;
    std::cout << "Au-revoir " << name << std::endl;
}
int main()
{
    MyClass c;
    return 0;
}
