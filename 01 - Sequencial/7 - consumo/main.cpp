#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout<<"\n\n";
    double d, c, m;

    cout<<"Distancia percorrida: ";
    cin>>d;
    cout<<"COmbustivel gasto: ";
    cin>>c;
    m = d/c;

    cout<<fixed<<setprecision(3)<<"Consumo medio = "<<m<<endl;
    system("pause > NULL");
    return 0;
}