#include <iostream>
using namespace std;

int main (void){
    int num, op;

    cout << "Ingresa un numero para ver si es impar \n";
    cin >> num;

    op = num % 2;

    if(op > 0){
        cout << "Es impar \n";
    }
    else{
        cout << "Es par \n";
    }
    
return 0;
}