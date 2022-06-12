#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double B, H, A, D, P;
cout <<  "Base do retangulo: " <<  endl;
cin>> B;
cout<<"Altura do retangulo: "<< endl;
cin>>H;

A = B * H;

P = B + B + H + H;

D = sqrt(B*B+H*H);

cout<<"AREA = " << A << endl;
cout << "PERIMETRO = "<< P << endl;
cout<<"DIAGONAL = "<< D << endl;

    return 0;
}