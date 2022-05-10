#include "Constante.h"
#include <iostream>

using namespace std;

Constante::Constante(float valeur)
{
    _valeur = valeur;
}
void Constante::afficher()
{
      cout << _valeur << endl;
}


