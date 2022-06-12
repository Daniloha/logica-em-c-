#include <iostream>
#include <iomanip>

using namespace std;
int horas, minutos, segundos, conv;

int main(){
cout<<"Digite a duracao em segundos: ";
cin>> segundos;

minutos = segundos/60;
conv = segundos%60;
segundos = conv;
horas = minutos/60;
conv = minutos%60;
minutos = conv;

cout<<horas<<":"<<minutos<<":"<<segundos<< endl;
system ("pause > NULL");
return 0;
}