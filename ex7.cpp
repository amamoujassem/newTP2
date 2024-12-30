#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int suite(int n){
    if (n==0){
        return 3;
    }else{
        return 3*suite(n-1)+4;
    }
}
int main(){
    int n;
    cout<<"entrer un nombre : ";
    cin>>n;
    cout<<"la suite des nombres est : "<<suite(n);
    return 0;
 
}