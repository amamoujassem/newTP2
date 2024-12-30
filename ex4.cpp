#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int addition(int x, int y){
    return x+y;
}
int subtraction(int x, int y){
    return x-y;
}
int multiplication(int x, int y){
    return x*y;
}
float division(int x, int y){
    if(y!=0){
        return x/y;
    } else {
        cout<<"division par zero impossible"<<endl;
    }
}

int main(){
    int choix, x, y;
    cout<<"********     Choisissez une operation :    *************\n";
    cout<<"*   1. Addition          *\n";
    cout<<"*   2. Soustraction      *\n";
    cout<<"*   3. Multiplication    *\n";
    cout<<"*   4. Division          *\n";
    cout<<"choisir l'operation a effectuer \n";
    cin>>choix;
    if (choix==1){
        cout<<"saisir deux entiers :"<<endl;
        cin>>x>>y;
        cout<<"Resultat : "<<addition(x,y)<<endl;
        
    }else {
        if(choix==2){
            cout<<"Saisir deux entiers :"<<endl;
            cin>>x>>y;
            cout<<"Resultat : "<<subtraction(x,y)<<endl;
        }
        else{
            if (choix==3){
                cout<<"Saisir deux entiers :"<<endl;
                cin>>x>>y;
                cout<<"Resultat : "<<multiplication(x,y)<<endl;
            }else{
                if (choix==4){
                    cout<<"Saisir deux entiers :"<<endl;
                    cin>>x>>y;
                    cout<<"Resultat : "<<division(x,y)<<endl;
                } else {
                    cout<<"votre choix est invalide!"<<endl;
                }
            }
        }
    }
    
}
