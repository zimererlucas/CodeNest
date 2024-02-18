#include <iostream>
#include <string>

// Função principal
void main()
{
    // Incluindo as bibliotecas necessárias
    using namespace std;

    // Declarando variáveis
    int i, n, repetir = 1, s[5], c = 0, k[5], h = 0; // s[] e k[] são arrays de inteiros
    string nome = { "Jogador" }; // Variável para armazenar o nome do jogador

    srand(time(0)); // Inicializando o gerador de números aleatórios

    // Preenchendo o array s[] com valores aleatórios (0 ou 1) e imprimindo-os
    for (i = 0; i <= 4; i++)
    {
        s[i] = (rand() % 2); // Gera um número aleatório entre 0 e 1
        cout << s[i]; // Imprime o valor gerado
    }

    // Loop principal do programa
    do
    {
        // Menu de opções
        cout << "---------MENU---------\n";
        cout << "0-sair do programa\n";
        cout << "1-Inserir o nome do jogador\n";
        cout << "2-Jogar\n";
        cin >> n; // Recebe a escolha do usuário

        // Switch para tratar a escolha do usuário
        switch (n)
        {
            // Caso 0: sair do programa
        case(0):
        {
            repetir = 0; // Define repetir como 0 para sair do loop
            break;
        }
        // Caso 1: inserir o nome do jogador
        case(1):
        {
            cout << "Diz o teu nome : ";
            cin >> nome; // Recebe o nome do jogador
            break;
        }
        // Caso 2: jogar
        case(2):
        {
            // Loop para o jogador fazer suas tentativas
            do {
                c = 0; // Reinicia a contagem de acertos
                // Loop para o jogador inserir os valores das tentativas
                for (i = 0; i <= 4; i++)
                {
                    cout << "Coloque 0 ou 1\n";
                    cin >> k[i]; // Recebe a tentativa do jogador
                    // Verifica se a tentativa está correta e conta os acertos
                    if (k[i] == s[i])
                    {
                        c = c + 1; // Incrementa o contador de acertos
                    }
                }
                // Exibe o número de acertos no lugar certo
                cout << nome << " acertou " << c << " vezes no lugar certo\n";
                // Exibe a mensagem de vitória ou derrota
                if (h != 10 && c == 5)
                    cout << "Parabens você ganhou";
                if (h == 10 && c == 5)
                    cout << "Parabens você ganhou";
                if (h != 10 && c != 5)
                    cout << "Parabens você perdeu";
                if (h == 10 && c != 5)
                    cout << "Parabens você perdeu";
                // Incrementa o contador de tentativas
                h = h + 1;
                cout << "\n" << nome << " usou " << h << " tentativas\n";
            } while (h != 10 && c != 5); // Continua o loop enquanto h não for 10 e c for diferente de 5

            break;
        }
        default:
        {
            cout << "colocou um numero errado, tente de novo\n";
        }
        }
    } while (repetir != 0 || c == 5); // Continua o loop enquanto repetir for diferente de 0 ou c for igual a 5
}