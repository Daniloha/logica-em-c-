#include <iostream>
#include <iomanip>

using namespace std;

int main(){

double A, B, C, Q, TRI, TRA;

    cout<<"Fazer um programa para ler tres medidas A, B e C. \nEm seguida, calcular e mostrar (imprimir os dados com quatro casas decimais):\n"
    <<"\na) a area do quadrado que tem lado A"
    <<"\nb) a area do triangulo retangulo que base A e altura B"
    <<"\nc) a area do trapezio que tem bases A e B, e altura C "<<endl;

    cout << "Digite a medida A: ";
    cin>>A;
    cout << "Digite a medida B: ";
    cin>>B;
    cout << "Digite a medida C: ";
    cin>>C;

    Q = A* A;

    TRI = (A*B)/2;

    TRA = ((A+B)*C)/2;

    cout<<fixed<<setprecision(4)<<"Area do quadrado = "<<Q<<endl;
    cout<<fixed<<setprecision(4)<<"Area do triangulo = "<<TRI<<endl;
    cout<<fixed<<setprecision(4)<<"Area do trapezio = "<<TRA<<endl;

    system("pause > NULL");
    return 0;
}
