#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
    // Inicializa��o de vari�veis e configura��o da localidade para portugu�s
    int m;
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    // Gera��o de um n�mero aleat�rio entre 0 e 99
    int n = rand() % 100;
    cout << n;

    // Loop principal
    do
    {
        // Solicita que o usu�rio escolha um n�mero
        cout << "Escolha um n�mero\n";
        cin >> m;

        // Verifica se o n�mero escolhido � maior, menor ou igual ao n�mero aleat�rio
        if (m > n)
        {
            cout << "maior\n";
        }
        else if (m < n)
        {
            cout << "menor\n";
        }
        else if (m == n) // Verifica se o n�mero escolhido � igual ao n�mero aleat�rio
        {
            cout << "ACERTOU!!!";
            break;
        }
    } while (m != n); // Continua o loop at� que o n�mero escolhido seja igual ao n�mero aleat�rio
}