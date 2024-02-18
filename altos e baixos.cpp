#include <iostream>
#include <locale.h>

int main()
{
    using namespace std;

    // Definindo variáveis
    int k[1000], m[1000], i, ra[1000], Alto, Baixo, Patamar, caminhada = 0;

    // Loop para receber os dados das caminhadas
    for (i = 0; i < 1000; i++)
    {
        do {
            cout << "Coloque os Km \n";
            cin >> k[i];
            cout << "Coloque os metros \n";
            cin >> m[i];
        } while ((k[i] > 100 || k[i] < 0) || (m[i] > 999 || m[i] < 0)); // Verificando se os dados estão dentro dos limites

        // Condição para encerrar a entrada de dados
        if (k[i] == 0 && m[i] == 0 && caminhada > 1)
        {
            break;
        }
        else
            if (k[i] == 0 && m[i] == 0 && caminhada <= 1)
            {
                cout << "Não pode ser \n";
                break;
            }
            else
            {
                caminhada = caminhada + 1; // Contando o número de caminhadas
            }
    }

    // Loop para calcular e imprimir a elevação
    for (i = 1; i <= caminhada; i++)
    {
        ra[i - 1] = k[i - 1] * 1000 + m[i - 1];
        ra[i] = k[i] * 1000 + m[i];

        if (ra[i] > ra[i - 1])
        {
            cout << "Alto " << (ra[i] - ra[i - 1]) / 1000 << "km " << (ra[i] - ra[i - 1]) % 1000 << "m.\n";
        }
        else
            if (ra[i] < ra[i - 1])
            {
                cout << "Baixo " << (ra[i - 1] - ra[i]) / 1000 << "km " << (ra[i - 1] - ra[i]) % 1000 << "m.\n";
            }
            else
            {
                cout << "Patamar\n";
            }
    }
    return 0;
}
