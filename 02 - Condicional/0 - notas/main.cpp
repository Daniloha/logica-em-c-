#include <iostream>
#include <iomanip>

using namespace std;
double N1, N2, NF;
int main(){
cout<<"Digite a primeira nota: ";
cin>>N1;
cout<<"Digite a segunda nota: ";
cin>>N2;

 NF = N1+N2;

cout<<fixed<<setprecision(2)<<"NOTA FINAL = "<<NF<<endl;
if(NF<60.00){
    cout<<"REPROVADO!";
}
}