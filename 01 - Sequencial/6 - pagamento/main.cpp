#include <iostream>
#include <iomanip>

using namespace std;

string nome;
double valor;
int horas;

int main(){

cout<<"Nome: ";
getline(cin, nome);
cout<<"Valor por hora: ";
cin>>valor;
cout<<"Horas trabalhadas: ";
cin>>horas;

double salario = valor * horas;

cout<<fixed<<setprecision(2)<<"O pagamento para "<<nome<<" equivale a "<<salario<<endl;

system("pause > NULL");
return 0;

}