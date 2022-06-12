#include<iostream>

using namespace std;

int main(){
    string nomep, nomes;
    double idadep, idades, media;

    cout<<"Dados da primeira pessoa"<<endl;
    cout<<"Nome da primeira pessoa: ";
    getline(cin, nomep);
    cout<<"Idade da primeira pessoa: ";
    cin>>idadep;
    cout<<"Dados da segunda pessoa"<< endl;
    cin.ignore(INT_MAX, '\n');
    cout<<"Nome da segunda pessoa: ";
    getline(cin, nomes);
    cout<<"Idade da segunda pessoa: ";
    cin>>idades;

    media = (idadep + idades)/2;

    cout<<"A idade media entre "<< nomep <<" e "<< nomes << " equivale a "<< media;

    system("pause > NULL");
    return 0;
}