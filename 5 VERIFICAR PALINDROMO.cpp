#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ehPalindromo(int numero){
    string normal;
    string numString = to_string(numero);
    normal = numString;
    reverse(numString.begin(), numString.end());

    return (numString == normal);
}
int main(){
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (ehPalindromo(numero)){
        cout << "\n!!! Palindromo !!!\n";
        cout << numero << endl;
    }else{
        cout << "\n### Nao palindromo ###\n";
        cout << numero << endl;
    }

    return 0;
}
