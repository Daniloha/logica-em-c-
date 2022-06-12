#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
double preco, recebido, troco;
int quant;

    cout<<"Preco unitario do produto: ";
    cin>>preco;
    std::cout << "Quantidade comprada: ";
    cin>>quant;
    std::cout << "Valor recebido: ";
    cin>>recebido;

    troco = recebido - (preco * quant); 

std::cout <<fixed<<setprecision(2)<< "TROCO = " <<troco <<endl;
}