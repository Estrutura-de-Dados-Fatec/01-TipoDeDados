// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Tipos Numericos\n";
    cout << "===============\n";

    int i = 10;
    short s = 18;
    long l = 200000;
    

    float f = 1.97F;
    double  d = 4.73;
    cout << "Inteiros\n";
    cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
    cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
    cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
    cout << "Ponto Flutuante (Reais)\n";
    cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
    cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";


    cout << "\nTipo logico (boolean)\n";
    cout << "====================\n";

    bool flFacil = false;
    cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";


    cout << "\nTipo caracter\n";
    cout << "=============\n";

    char letra = 'Z';
    cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

    cout << "\nTipo string\n";
    cout << "===========\n";

    string texto = "Estrutura de Dados vai ser moleza!";
    cout << "string texto = " << texto << " ocupa " << sizeof(texto) << " bytes\n";

    cout << "\nPonteiros\n";
    cout << "===========\n";

    string* ponteiro = &texto;

    cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro <<endl;
     
    cout << "O valor armazendo no local indicado pelo ponteiro e *ponteiro = " << *ponteiro;
  
    cout << endl << endl;



    

  
}

