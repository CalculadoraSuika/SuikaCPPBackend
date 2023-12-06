#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int linha, coluna, escolha1, n1, n2, res, res1, res2, lmao, esc1;
int num1, num2, num3, num4,num5,num6;
int matriz[3][3], matriz2[3][3];
string escolha;
void determinante3();
void multiplicador();

int main(){

    setlocale(LC_ALL, "pt_BR");

    cout << "ola estudantes da fundacao Padre Saboia, como vão?\n";
    cout << "meu nome é youkou, e nesta versão meu proposito é fazer cálculos matriciais\n";
    cout << "primeiramente me dê as informações da matriz que vamos trabalhar\n";

    for(int i=0; i<1; i){
        cout << "me fale quantas linhas você gostaria que sua matriz tenha\n";
        cin >> linha;
        cout << "me fale quantas colunas você gostaria que sua matriz tenha\n";
        cin >> coluna;
        cout << "sua matriz possúi " << linha << " linhas e " << coluna << " colunas?\n";
        cin >> escolha;
        if(escolha == "sim"){
            cout << "compreendido\n";
            i++;
        }
        if(escolha == "nao"){
            cout << "ok, vamos tentar novamente\n";
        }
        
    }  
    matriz[linha][coluna];
    matriz2[linha][coluna];
    for(int k=0; k<1; k){
        cout << "ok agora vamos colocar os números dentro dessa matriz\n";
        for(int l=0; l<linha;l++){
            for(int c=0; c<coluna;c++){
               cin >> matriz[l][c];
            }
            cout << "digite a proxima linha\n";
        }
        cout << "essa e a matriz que você deseja?\n";
        for(int l=0; l<linha;l++){
            for(int c=0; c<coluna;c++){
               cout << matriz [l][c];
                cout<< " ";
            }
            cout << "\n";
        }

        cin >> escolha;
        if(escolha == "sim"){
            cout << "compreendido\n";
            k++;
        }
        if(escolha == "nao"){
            cout << "ok, vamos tentar novamente\n";
        }
        
        }
    

    cout << "oque você gostaria de fazer hoje?\n";
    cout << "[1] calcular o determinante de uma matriz?\n[2]multiplicar um escalar por uma matriz?\n[3]calcular a inversa de uma matriz?";
    cin >> escolha1;
    switch(escolha1){
        case 1:
            if(linha ==2 && coluna ==2){
                n1=  matriz[0][0]*= matriz[1][1];
                n2 = matriz[1][0]*= matriz[0][1];
                res = n1-n2;
                cout << "o determinante da sua matriz e " << res;

            }
            if(linha >=3 && coluna >=3){
                determinante3();
                cout << "o determinante da sua matriz e " << res;
                cin >> lmao;

            }
        break;

        case 2:
        cout << "por qual escalar voce gostaria de multiplicar a matriz?\n";
        cin >> esc1;
        multiplicador();

    }

}
 
void multiplicador(){
    for(int i; i<1;i){
        
        cout << "o escalar escolhido foi: " << esc1 << "\n";
        for(int l=0;l<linha;l++){
            for(int c=0;c<0;c++){
                 matriz2[l][c] = esc1*matriz[l][c];
            }
        }   
        cout << "essa e a matriz que voce deseja?\n";
        for(int l=0; l<linha;l++){
            for(int c=0; c<coluna;c++){
               cout << matriz2 [l][c];
                cout<< " ";
            }
            cout << "\n";
        }

        for(int l=0; l<linha;l++){
            for(int c=0; c<coluna;c++){
               cout << matriz [l][c];
                cout<< " ";
            }
            cout << "\n";
        }
        cin >> escolha;
        if(escolha == "sim"){
            cout << "compreendido\n";
            i++;
        }
        if(escolha == "nao"){
            cout << "ok, vamos tentar novamente\n";
        }

    }
}
 
void determinante3(){
    num1= matriz[0][0]*matriz[1][1]*matriz[2][2];
            num2= matriz[0][1]*matriz[1][2]*matriz[2][0];
            num3= matriz[0][2]*matriz[1][0]*matriz[2][1];
            num4= matriz[0][1]*matriz[1][0]*matriz[2][2];
            num5= matriz[0][0]*matriz[1][2]*matriz[2][1];
            num6= matriz[0][2]*matriz[1][1]*matriz[2][0];
            res1 = num1+num2+num3;
            res2 = num4+num5+num6;
            res = res1-res2;
 }
 
 
