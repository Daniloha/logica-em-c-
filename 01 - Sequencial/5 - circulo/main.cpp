#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14159;
double r;


int main (){
    cout<<"Digite o valor do raio: ";
    cin>>r;

    double A = pi *(r*r);

    cout<<fixed<<setprecision(3)<<"AREA = "<<A<<endl;

}