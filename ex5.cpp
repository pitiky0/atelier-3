//
// Created by Ayoub on 05/12/2021.
//

#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    string name;
    void set_value()
    {
        int a;
        string b;
        cout << "entrer le nom de cet animal: ";
        cin >> b;
        name = b;
        cout << "enter l'age de cet animal: ";
        cin >> a;
        age = a;
    }
};
class Zebra : public Animal
{
public:
    string lieuDorigineZ = "afrique";
    Zebra() { cout << "veuillez remplir les informations sur ce Zebra " << endl; }
    void display()
    {
        cout << "le nome de ce zebra est " << name << endl;
        cout << "l'age de ce zebra est " << age << endl;
        cout << "le lieu d'origine de ce zebra est " << lieuDorigineZ << endl;
    }
};
class Dolphin : public Animal
{
public:
    string lieuDorigineD = "atlantique";
    Dolphin() { cout << "veuillez remplir les informations sur ce Dolphin" << endl; }
    void display()
    {
        cout << "le nome de ce Dolphin est " << name << endl;
        cout << "l'age de ce Dolphin est " << age << endl;
        cout << "le lieu d'origine de ce Dolphin est " << lieuDorigineD << "\n"
             << endl;
    }
};
int main()
{
    Zebra z;
    z.set_value();
    Dolphin d;
    d.set_value();
    system("clear");
    z.display();
    d.display();
    return 0;
}