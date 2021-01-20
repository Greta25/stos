#include <iostream>
#include <vector>

using namespace std;

class Stos 
{
public:
    Stos();
    vector <int> stos;

    void dodaj(int element);
    void usun();
    void pierwszyElement();
    void ostatniElement();
    void wyswietl();
};

Stos::Stos()
{
    stos=vector<int>();
}

void Stos::dodaj(int element)
{
    stos.push_back(element);
}

void Stos::usun()
{
    stos.pop_back();
}

void Stos::pierwszyElement()
{
    cout<<stos.front()<<endl;
}

void Stos::ostatniElement()
{
    cout<< stos.back()<<endl;
}

void Stos::wyswietl()
{
    for(auto &i : stos)
    {
     cout<<i<<endl;
    }
}

int main()
{
    Stos S1;
    S1.dodaj(25);
    S1.dodaj(2);
    S1.dodaj(44);
    S1.wyswietl();
    S1.pierwszyElement();
    S1.ostatniElement();
    S1.usun();
    S1.wyswietl();
    return 0;
}