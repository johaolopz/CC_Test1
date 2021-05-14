#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num = 2;
    string texto = "es el numero que multiplicado por si mismo, nos resulta: ";
    int num2 = num*num;
    cout << num << " " << texto << num2 << "\n" << endl;

    //Ahora imprimir por pantalla con printf
    printf("%d;%s%d", num, texto.c_str(), num2);

    return 0;
}