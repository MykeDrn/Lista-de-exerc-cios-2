#include <iostream>
using namespace std;

int main(){
    char opt, con = 'y';
    int idade = 0, idadeb = 0;
    float bom = 0, reg = 0, ruim = 0;
    do{
    cout << "\nPesquisa de opiniao\n";
    cout << "o que achou do filme?\n(Digite A para bom, B para regular ou C para ruim): ";
    cin >> opt;
    switch(opt){
    case 'A':
        bom++;
        cout << "Qual é sua idade: ";
        cin >> idade;
        break;
    case 'B':
        reg++;
        cout << "Qual é sua idade: ";
        cin >> idadeb;
        idadeb += idadeb;
        break;
    case 'C':
        ruim++;
        cout << "Qual é sua idade: ";
        cin >> idade;
        break;
    default:
        cout << "Opçao invalida\n";
        break;
    }
    cout << "Continuar a pesquisa? [digite N ou n para sair]:";
    cin >> con;

} while(con != 'n' && con != 'N');
    cout << "\n" <<(bom+reg+ruim) << " pessoas responderam a pesquisa";
    cout << "\n\nQuantidade de pessoas que acharam o filme bom: " << bom;
    cout << "\n\nMedia de idade das pessoas que acharam o filme regular:  " << idadeb/reg;
    cout << "\n\nPorcentagem das pessaos que acharam o filme ruim: " << (ruim*100)/(bom+reg+ruim)<<"%";
}
