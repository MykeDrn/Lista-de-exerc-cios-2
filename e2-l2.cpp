#include <iostream>
using namespace std;

int main(){
    float nota;
    cout << " insira a nota: ";
    cin >> nota;
    if (nota >= 0.0 && nota <=2.9){
        cout << " Seu conceito e " << "E.";
    }
    else if (nota >= 3.0 && nota <=4.9){
        cout << " Seu conceito e " << "D.";
    }
     else if (nota >= 5.0 && nota <=6.9){
        cout << " Seu conceito e " << "C.";
    }
    else if (nota >= 7.0 && nota <=8.9){
        cout << " Seu conceito e " << "B.";
    }
     else if (nota >= 9.0 && nota <=10.0){
        cout << " Seu conceito e " << "A.";
    }
}

