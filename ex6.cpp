#include <iostream>
#include <string>
#include <ctime>
#include <random>
using std::cin;
using std::cout;
using std::endl;
void sapin(int hauteur_sapin ,int hauteur_tronc,int largeur_tronc,int nb_boule){
    for (int i=1;i<=hauteur_sapin;i++){
        for (int j=0;j<=hauteur_sapin-i;j++){
            cout<<" ";

    }
       for (int j=1; j<=2*i-1; j++){
            if (rand() / static_cast<double>(RAND_MAX) < 0.5 && nb_boule > 0) {
                cout << "O";
                nb_boule--;
            }
            else {
                cout << "*";
            }
    }
        cout << endl;
    }
    int nbespacetronc=hauteur_sapin-largeur_tronc/2;
    for(int i=1;i<=hauteur_tronc;i++){
        for(int j=0;j<nbespacetronc;j++){
            cout << " ";
        }
        for(int j=0;j<largeur_tronc;j++){
            cout << "|";
        }
        cout << endl;
    }
}
int main(){
    srand(time(0));

    int hauteur,nb_boules,hauter_tronc,largeur_tronc;
    cout << "Entrer la hauteur du sapin : ";
    cin >> hauteur;
    cout << "Entrer le nombre de boules : ";
    cin >> nb_boules;
    cout << "Entrer la hauteur du tronc : ";
    cin >> hauter_tronc;
    cout << "Entrer la largeur du tronc : ";
    cin >> largeur_tronc;
    sapin(hauteur,hauter_tronc,largeur_tronc,nb_boules);
    return 0;
 
}