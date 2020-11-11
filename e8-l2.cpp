#include <iostream>
using namespace std;

int main(){
    char concursado, genero;
    int matricula, age, cont = 0, nmen = 0, nwomanconv = 0, nwomen30plusnconc = 0, menhigstageconc[100] = {};
    float heightmanless40 = 0, height, nmenless40 = 0;
    while (cont < 100){
        cout << "\nDados dos funcionários\n\n";
        cout << "Matricula: ";
        cin >> matricula;
        cout << "Genero[M/F]: ";
        cin >> genero;
        switch (genero){
        case 'M':{
            nmen++;
            cout << "Concursado[S/N]: ";
            cin >> concursado;
            cout << "Idade: ";
            cin >> age;
            if (concursado == 'S' || concursado == 's'){
                menhigstageconc[cont] = age;}
            cout << "Altura (em cm): ";
            cin >> height;
            if(age > 40){
                heightmanless40 = heightmanless40 + height;
                nmenless40 = nmenless40 + 1;}
            break;}
        case 'F':{
            cout << "Concursado[S/N]: ";
            cin >> concursado;
            if (concursado == 'S')
                nwomanconv++;
            cout << "Idade: ";
            cin >> age;
            if (age < 30 && concursado == 'N'){
                nwomen30plusnconc++;}
            cout << "Altura: ";
            cin >> height;
            break;}
        default:{
            cout << "Genero invalido";
            break;}}
            cont++;}
    cout << "\nNumero de funcionarias concursadas ----------------- " << nwomanconv;
    cout << "\nNumero de funcionarios (apenas homens) ------------- " << nmen;
    for(int ct=0; ct < 4; ct++){
       if(menhigstageconc[0] <= menhigstageconc[ct]){
            menhigstageconc[0] = menhigstageconc[ct];}}
    cout << "\nMaior idade dos homens concursados ----------------- " << menhigstageconc[0];
    cout << "\nMulheres nao concursadas com mais de 30 anos ------- " << nwomen30plusnconc;
    cout << "\nMedia das alturas dos homens com menos de 40 anos -- " << heightmanless40/nmenless40;
}
