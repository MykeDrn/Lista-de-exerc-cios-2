#include <iostream>
using namespace std;

int main(){
    char cat;
    cout << " Categorias  ndisponiveis\n\n A--B--C--D\n E--F--H--I\n J--K--R--T\n\n";
    cout << " Forneca a categoria do funcionario para saber qual vai ser o aumento salarial.\n Apenas letras maiusculas: ";
    cin >> cat;
    if (cat == 'A' || cat == 'C' || cat == 'F' || cat == 'H'){
        cout << " O aumento salarial sera de 10%";
    } else if (cat == 'B' || cat == 'D' || cat == 'E' || cat == 'I'|| cat == 'J'|| cat == 'T'){
        cout << " O aumento salarial sera de 15%";
    } else if (cat == 'K' || cat == 'R'){
        cout << "\n O aumento salarial sera de 25%";
    }
}
