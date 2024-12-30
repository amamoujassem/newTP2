#include <iostream>
#include <random>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int aleatoire_entier(int min,int max){
    return min + rand() % max;
}
double aleatoire_reel(double min,double max){
    return min + rand() * max / RAND_MAX;
}
int main(){
    int min,max;
    cout<<"entrer un minimum : ";
    cin>>min;
    cout<<"entrer un maximum : ";
    cin>>max;
    srand(time(0));
    for (int i=0; i<5;i++){
        cout<<aleatoire_entier(min,max)<<endl;
    }
    for (int i=0; i<5; i++){
        cout<<aleatoire_reel(min,max)<<endl;
    }
    return 0;
}

