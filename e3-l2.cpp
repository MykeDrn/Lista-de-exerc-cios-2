#include <iostream>
using namespace std;

int main(){
    int tab, na, nf;
    cout << "Tabuada a ser calculada: ";
    cin >> tab;
    cout << "O calculo deve começar a partir de qual numero: ";
    cin >> na;
    cout << "e deve terminar em qual numero: ";
    cin >> nf;
    for (na; na <= nf; na++)
            cout << tab << "*"<< na << " = "<< na * tab <<"\n\n";}
