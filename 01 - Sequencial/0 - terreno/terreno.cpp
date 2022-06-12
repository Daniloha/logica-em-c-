#include <iostream>

using namespace std;

int main(){
double L, C, M, A, V;

cout<< "Digite a largura do terreno: " << endl;
cin>>L;
cout<<"Digite o comprimento do terreno: " << endl;
cin>>C;
cout<<"Digite o valor do metro quadrado: " << endl;
cin>>M;

A = L * C;
V = A * M;

cout<< "Area do terreno = " << A << endl;
cout << "Valor do terreno = " << V <<endl;



}