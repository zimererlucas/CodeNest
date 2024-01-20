#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
    // Inicialização de variáveis e configuração da localidade para português
    int m;
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    // Geração de um número aleatório entre 0 e 99
    int n = rand() % 100;
    cout << n;

    // Loop principal
    do
    {
        // Solicita que o usuário escolha um número
        cout << "Escolha um número\n";
        cin >> m;

        // Verifica se o número escolhido é maior, menor ou igual ao número aleatório
        if (m > n)
        {
            cout << "maior\n";
        }
        else if (m < n)
        {
            cout << "menor\n";
        }
        else if (m == n) // Verifica se o número escolhido é igual ao número aleatório
        {
            cout << "ACERTOU!!!";
            break;
        }
    } while (m != n); // Continua o loop até que o número escolhido seja igual ao número aleatório
}