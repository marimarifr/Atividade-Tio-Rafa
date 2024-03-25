#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int iAbsolute(int);
int iFatorial(int);
int iProgressao(int, int , int);
int iFibonacci(int);


int main()
{
    iAbsolute(0);
    iFatorial(-5);
    iProgressao(3,2,34);
    iFibonacci(5);

    return 0;
}

int iAbsolute(int iNumero)
{
    if (iNumero >= 0)
    {
        cout << "O absoluto do número é: " << iNumero << endl; 
    }

    else if (iNumero < 0)
    {
        iNumero = iNumero*(-1);
        cout << "O absoluto do número é: " << iNumero << endl;
    };

    return iNumero;

}

int iFatorial(int iBase)
{   
    int iIndex;
    int iFator;
    if ( iBase < 0)
    {
        cout << "Não existe fatorial para negativos" << endl;
    }

    else if ( iBase >= 0)
    {
        int iFator = 1;
        for (iIndex=1; iIndex< iBase +1; iIndex++)
        {
            iFator = iFator*iIndex;
        };
    }
    return iFator;
}

int iProgressao(int iTermoInicial, int iRazao, int iPosicaoFinal)
{
    int iTermoFinal;
    iTermoFinal = iTermoInicial + (iPosicaoFinal -1)*iRazao;

    cout << "O enésimo termo é " << iTermoFinal << endl;

    return iTermoFinal;

}

int iFibonacci(int iPosicao)
{
    int iTermoinicial = 1;
    int iContador = 1;

    int arriListaTermos[iPosicao] = {0};

    int &arriListaTermos[0] = 1;

    for (iContador = 1; iContador < iPosicao; iContador ++)
    {
        &arriListaTermos[iContador + 1] = arriListaTermos[iContador - 1] + arriListaTermos[iContador];
    };

    return arriListaTermos[iPosicao];

}



