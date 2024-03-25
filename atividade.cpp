#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int absolute(int);
int fatorial(int);

int main()
{
    absolute(0);


    return 0;
}

int absolute(int numero)
{
    if (numero >= 0)
    {
        cout << "O absoluto do número é: " << numero << endl; 
    }

    else if (numero < 0)
    {
        numero = numero*(-1);
        cout << "O absoluto do número é: " << numero << endl;
    };

    return numero;

}

int fatorial(int base)
{   
    int i;
    int fator;
    if ( base < 0)
    {
        cout << "Não existe fatorial para negativos" << endl;
    }

    else if ( base >= 0)
    {
        int fator = 1;
        for (i=1; i< base+1; i++)
        {
            fator = fator*i;
        };
    }
    return fator;
}

