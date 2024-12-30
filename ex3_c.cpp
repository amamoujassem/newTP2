#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void incrementer_c(int *x){
    *x=*x+1;
}
void permuter_c(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a,b;
    cout << "Entrer deux entiers : ";
    cin >> a >> b;
    cout << "Avant modification : " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    incrementer_c(&a);
    incrementer_c(&b);
    permuter_c(&a, &b);
    cout << "Après modification : " << endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}