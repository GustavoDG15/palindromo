#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool ehPalindromo(int numero){
    string normal;
    std::string numString = std::to_string(numero);
    normal = numString;
    reverse(numString.begin(), numString.end());
    if ((normal == numString) && (numero > 9)){
        cout << "\n!!! Palindromo !!!\n";
        cout << "Normal : " << normal << endl;
        cout << "Invertido : " << numString << endl;
        return true;
    }else{
        cout << "\n### nao palindromo ###\n";
        cout << "Normal : " << normal << endl;
        cout << "Invertido : " << numString << endl;
        return false;
    }
}
int main(){
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    ehPalindromo(numero);

    return 0;
}
