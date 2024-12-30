#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool egalite_ppv(int a, int b){
    return a==b;
}
bool egalite_ppr(int &a, int &b){
    return a==b;
}
bool egalite_ppa(int *a, int *b){
    return *a==*b;
}

int main(){
    int a,b;
    cout<<"Entrer deux entiers : ";
    cin>>a>>b;
    cout<<"Egalite avec le passage par valeur : "<<egalite_ppv(a,b)<<endl;
    cout<<"Egalite avec le passage par reference : "<<egalite_ppr(a,b)<<endl;
    cout<<"Egalite avec le passage par adresse : "<<egalite_ppa(&a,&b)<<endl;
    return 0;
}