#include <iostream>
#include <string>

void main()
{
    // Declaração de variáveis
    int i, num = 1; // 'num' é usado para controlar a adição de espaços antes dos números
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
        // Verifica se o caractere é uma letra maiúscula
        if (isupper(frases[i]))
        {
            if (num == 0)
            {
                cout << " 1"; // Se o caractere anterior foi uma letra maiúscula, imprime " 1"
            }
            num = 0; // Reseta 'num' para indicar que a próxima letra não é maiúscula
            cout << "\n"; // Imprime uma nova linha após a letra maiúscula
        }
        // Verifica se o caractere é um dígito e se 'num' é 0 (indicando que a letra anterior era maiúscula)
        if (isdigit(frases[i]) && num == 0)
        {
            cout << " "; // Adiciona um espaço antes do dígito
            num = num + 1; // Incrementa 'num' para evitar adicionar mais espaços antes de outros dígitos
        }
        // Verifica se o caractere é um ponto (.)
        if (frases[i] == '.')
        {
            if (num == 0)
            {
                cout << " 1"; // Se o caractere anterior foi uma letra maiúscula, imprime " 1"
            }
        }
        else
        {
            cout << frases[i]; // Imprime o caractere atual
        }
    }
}
