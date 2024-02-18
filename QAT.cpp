#include <iostream>
#include <string>

void main()
{
    // Declara��o de vari�veis
    int i, num = 1; // 'num' � usado para controlar a adi��o de espa�os antes dos n�meros
    using namespace std;
    string frases;

    // Loop para garantir que o tamanho da string esteja entre 1 e 999
    do
    {
        cin >> frases;
    } while (1 > frases.size() || frases.size() >= 1000);

    // Loop para percorrer cada caractere da string
    for (i = 0; i < frases.size(); i++)
    {
        // Verifica se o caractere � uma letra mai�scula
        if (isupper(frases[i]))
        {
            if (num == 0)
            {
                cout << " 1"; // Se o caractere anterior foi uma letra mai�scula, imprime " 1"
            }
            num = 0; // Reseta 'num' para indicar que a pr�xima letra n�o � mai�scula
            cout << "\n"; // Imprime uma nova linha ap�s a letra mai�scula
        }
        // Verifica se o caractere � um d�gito e se 'num' � 0 (indicando que a letra anterior era mai�scula)
        if (isdigit(frases[i]) && num == 0)
        {
            cout << " "; // Adiciona um espa�o antes do d�gito
            num = num + 1; // Incrementa 'num' para evitar adicionar mais espa�os antes de outros d�gitos
        }
        // Verifica se o caractere � um ponto (.)
        if (frases[i] == '.')
        {
            if (num == 0)
            {
                cout << " 1"; // Se o caractere anterior foi uma letra mai�scula, imprime " 1"
            }
        }
        else
        {
            cout << frases[i]; // Imprime o caractere atual
        }
    }
}
