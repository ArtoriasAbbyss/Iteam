#include <iostream>
#include <windows.h>
#include <locale.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//variaveis globais
    int palpite1, palpite2, placarOfc1, placarOfc2;

//adicionar suporte a utf8
void aceitarUTF8(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "UTF8");
}

//primeira parte: registrar o apostador
void registrarApostador(){
    string leituraNome;
    cout << "Nome do apostador: " << endl;
    cin >> leituraNome;
}
//registar o palpite do operador
void receberPalpite(){
    cout << "Palpite para o primeiro time: " << endl;
    cin >> palpite1;
    cout << "Palpite para o segundo time: " << endl;
    cin >> palpite2;
}

//mostrar o resultado
void mostrarPlacar(){
    for(int i = 0; i < 11; i++){
        cout << "=";
    }
    cout << " Placar ";
    for(int i = 0; i < 11; i++){
        cout << "=";
    }
    cout << "\n\tBRA" << "\tMEX" << endl;
    cout <<"\t " << placarOfc1 <<"\t "<< placarOfc2 << endl;
    for(int i = 0; i < 31; i++){
        cout <<"=";
    }
}
//conferir
void conferirPalpite(){
    cout <<"\n\nSeu palpite foi: " << endl;
    for(int i = 0; i < 11; i++){
        cout << "=";
    }
    cout << " Placar ";
    for(int i = 0; i < 11; i++){
        cout << "=";
    }
    cout << "\n\tBRA" << "\t MEX" << endl;
    cout <<"\t " << palpite1 <<"\t  "<< palpite2 << endl;
    for(int i = 0; i < 31; i++){
        cout <<"=";
    }
    if ((palpite1 == placarOfc1) && (palpite2 == placarOfc2)){
        cout << "\nAcertou";
    } else {
        cout << "\nErrou";
    }
}

int main(){


}