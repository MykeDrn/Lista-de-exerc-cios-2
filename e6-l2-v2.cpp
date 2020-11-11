#include <iostream>
using namespace std;

int main(){
    int aPub, publico = 120, sessao = 1;
    float valorIngresso = 5.00, custo = 200.00, lucroLiquido;
    float lucro[2][8]= {};
    for (sessao ; sessao <=8; sessao++){
        cout << "\n\tsessao " << sessao;
        valorIngresso -= 0.50;
        cout << "\n\nvalor do ingresso --- "<< valorIngresso;
        cout <<"\naumento do público --- ";
        cin >> aPub;
        publico+=aPub;
        cout << "publico total ------- " << publico;
        lucroLiquido = (valorIngresso*publico)-custo;
        cout << "\nlucro liquido ------- "<< lucroLiquido <<"\n";
        lucro[0][sessao]=lucroLiquido;
        lucro[1][sessao]=valorIngresso;
        }
        // Compara o indice 0 do array com o contador.
        for(int ct=0; ct < 7; ct++)
    {
        // Se o valor armazenado no indice 0 for menor que o valor armazenado no indice ct, 0 será sebstituido por ct.
       if(lucro[0][0] <= lucro[0][ct]){
            lucro[0][0] = lucro[0][ct];
            lucro[1][0] = lucro[1][ct];
        }
    }
    cout << "\n\nO preço de ingresso que gerou maior lucro foi $" <<lucro[1][0] << "\ncom o lucro liquido de $"<< lucro[0][0];
}
