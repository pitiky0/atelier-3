//
// Created by Ayoub on 05/12/2021.
//

#include <iostream>
using namespace std;
class complexe
{
    double Re;
    double Img;

public:
    complexe(double a = 0, double b = 0)
    {
        if (a != 0 && b != 0)
        {
            /* si a=1 et b=1 on a laiser a l'utilisateur 
                de romplire les champs de complexe */
            cout << "\tEntrer la valeur real du nombre : ";
            cin >> a;
            cout << "\tEntrer la valeur imagimer du nombre : ";
            cin >> b;
            Re = a;
            Img = b;
        }
        else
        {
            Re = a;  // initialisation par 0
            Img = b; // initialisation par 0
        }
    }
    void afficher()
    {
        cout << Re;
        //Pour ne pas afficher a + -bi (si Img est negatif)
        if (Img >= 0)
        {
            cout << " + ";
        }
        cout << Img << "i" << endl;
    }
    complexe conjugue()
    {
        complexe a(0, 0);
        a.Re = Re;
        a.Img = -Img;
        return a;
    }
    double module()
    {
        return Re * Re + Img * Img;
    }
    //Opérateur : complexe = complexe
    bool operatorEgal(complexe a)
    {
        return a.Re == Re && a.Img == Img;
    }
    //Opérateur : complexe + complexe
    complexe operatorAjt(complexe a)
    {
        complexe aj(0, 0);
        aj.Re = Re + a.Re;
        aj.Img = Img + a.Img;
        return aj;
    }
    //Opérateur : complexe - complexe
    complexe operatorSous(complexe a)
    {
        complexe s(0, 0);
        s.Re = Re - a.Re;
        s.Img = Img - a.Img;
        return s;
    }
    //Opérateur : complexe * complexe
    complexe operatorMulti(complexe a)
    {
        complexe m(0, 0);
        m.Re = Re * a.Re - Img * a.Img;
        m.Img = Re * a.Img + Img * a.Re;
        return m;
    }
    //Opérateur : complexe / complexe
    complexe operatorDiv(complexe a)
    {
        complexe d(0, 0);
        d.Re = this->operatorMulti(a.conjugue()).Re * 1 / a.module();
        d.Img = this->operatorMulti(a.conjugue()).Img * 1 / a.module();
        return d;
    }
};
int main()
{
    cout << "bienvenue dans notre programme" << endl;
    cout << "Entrer les valeurs de 1er nombre" << endl;
    complexe a(1, 1);
    cout << "Entrer les valeurs de 2eme nombre" << endl;
    complexe b(1, 1);
    system("clear");
    cout << "vos nombres sont : " << endl;
    cout << "\tA = ";
    a.afficher();
    cout << "\tB = ";
    b.afficher();
    cout << endl;
    int rep;
    bool bo;
    cout << "choisisez une operation de cette liste : " << endl;
    cout << endl;
    cout << "\t1. égalité ( a == b ) \n\t2. addition ( a + b ) \n\t3. soustraction ( b - a ) \n\t4. multiplication ( b * a ) \n\t5. division ( b / a ) \n"
         << endl;
    cout << "votre choix est : ";
    cin >> rep;
    cout << "\n"
         << endl;
    switch (rep)
    {
    case 1:
        bo = a.operatorEgal(b);
        if (bo)
        {
            cout << "les deux nombres sont egaux" << endl;
        }
        else
        {
            cout << "les deux nombres ne sont pas egaux" << endl;
        }
        break;
    case 2:
        cout << "voila la reponse : ";
        a.operatorAjt(b).afficher();
        break;
    case 3:
        cout << "voila la reponse : ";
        b.operatorSous(a).afficher();
        break;
    case 4:
        cout << "voila la reponse : ";
        a.operatorMulti(b).afficher();
        break;
    case 5:
        cout << "voila la reponse : ";
        b.operatorDiv(a).afficher();
        break;
    default:
        cout << "il faut choisir un nombre correct ! (compris entre 1 et 5)" << endl;
    }
    return 0;
}
