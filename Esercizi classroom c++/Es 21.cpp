//Consegna: Calcolare la differenza tra il quadrato di un numero e il numero stesso.

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Inserisci un numero: ";
    cin>>a;
    b = (a*a)-a;
    cout<<"Il risultato dell differenza tra il quadrato del numero e lo stesso è: "<<b;
    return 0;
}
