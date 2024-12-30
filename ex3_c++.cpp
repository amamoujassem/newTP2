#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void incrementer(int &x){
    x++;
}
void permuter(int &x,int &y){
    int temp = x;
    x = y;
    y = x;
}
int main(){
    int a,b;
    cout<<"Saisir les deux entiers : ";
    cin>>a>>b;
    cout<<"Avant l'incrementation : a = "<<a<<" et b = "<<b<<endl;
    incrementer(a);
    incrementer(b);
    cout<<"Apres l'incrementation : a = "<<a<<" et b = "<<b<<endl;
    cout<<"Avant la permutation : a = "<<a<<" et b = "<<b<<endl;
    permuter(a,b);
    cout<<"Apres la permutation : a = "<<a<<" et b = "<<b<<endl;
    return 0;
 
}