#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int absolute(int);

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