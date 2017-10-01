//MONEDAAAAAAAAAAAAAAAAAAAAAAAAAAAA

#include <iostream>
#include<vector>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
  int cont = 0;
  int nObjetos = 0;
  int capacidad = 0;
  cout << "Introduzca numero de objetos" << endl;
  cin >> nObjetos;
  cout << "Introduzca la capacidad de la mochila" << endl;
  cin >> capacidad;
  //creamos el vector
  vector< vector<int> > vector1 (nObjetos, vector<int>(2)); //vector[a][b]: a = peso, b = valor

  while(cont < nObjetos){
    cout << "Introduzca peso del objeto nº" << cont+1 << ": " << endl;
    cin >> vector1[cont][1];
    cout << "Introduzca valor del objeto nº" << cont+1 << ": " <<endl;
    cin >> vector1[cont][2];
    system("clear");
    cont++;
  }