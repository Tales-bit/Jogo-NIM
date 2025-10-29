#include <iostream>

using namespace std;

int jogador(int total, int max){
    int quant;
    for(int i=0; i==i; i++){
        cout << "Sua vez, quantas moedas voce removera: ";
        cin >> quant;
        if(quant==0){
            cout << "Erro, voce nao pode remover 0 moedas, voce deve remover pelo menos uma" << endl;
            cout << "Tente novamente" << endl << endl;
            continue;
        }
        if(quant<0){
            cout << "Obviamente, voce nao pode remover um numero negativo de moedas" << endl;
            cout << "Tente novamente" << endl << endl;
            continue;
        }
        if(quant>total || quant>max){
            cout << "Erro, o total de moedas atual e: " << total << ", e o maximo de uma vez e: " << max << endl;
            cout << "Tente novamente" << endl << endl;
            continue;
        }
        break;
    }
    cout << "Total = " << total-quant << endl << endl;
    return quant;
}

int computador(int total, int max, int esc){
    int comp=max-esc+1;
    cout << "Minha vez, removo " << comp << " moedas." << endl;
    cout << "Total = " << total-comp << endl << endl;
    if(total-comp==0){
        cout << "Parece que eu ganhei, bom jogo!";
        return 0;
    }
    return comp;
}

int computadorcomeca(int total, int max){
    int comp;
    for(int i=1; i==i; i++){
        comp=i;
        if((total-comp)%(max+1)==0){
            break;
        }
    }
    cout << "Minha vez, removo " << comp << " moedas." << endl;
    cout << "Total = " << total-comp << endl << endl;
    return comp;
}

int main(){
    int max;
    int total;
    int esc;
    int comp;
    cout << "Ola, eu sou o computador e jogarei contra voce" << endl;
    cout << "Se voce nao sabe como o jogo funciona, verifique o arquivo README" << endl << endl;
    cout << "Qual a quantidade maxima de moedas que podem ser removidas de uma vez? ";
    cin >> max;
    cout << "Qual o total de moedas inicialmente? ";
    cin >> total;
    cout << endl;
    // O seguinte "if" determina quem começa o jogo
    if(total%(max+1)!=0){
        total=total-computadorcomeca(total, max);
    }
    for(int i=0; i==i; i++){
        esc=jogador(total, max);
        total=total-esc;
        comp=computador(total, max, esc);
        if(comp==0){
            return 1;
        }
        total=total-comp;
    }
}