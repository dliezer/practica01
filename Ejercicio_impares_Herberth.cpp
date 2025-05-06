#include <iostream>

using namespace std;

int main (void){
    int num;

    cout << "ingresa un numero\n";
    cin >> num;

    if(num % 2 == 0){
        cout << "el numero no es impar\n";
    }

    else{
        cout << "el numero es impar\n";

    }
    return 0;
}