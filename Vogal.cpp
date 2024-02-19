#include <iostream>
#include <string>
#include <locale.h> // Biblioteca para definir a localidade do programa
using namespace std;

void main()
{
    setlocale(LC_ALL, "Portuguese"); // Definindo a localidade para portugu�s

    // Declarando vari�veis
    string txt; // Vari�vel para armazenar a frase inserida pelo usu�rio
    int cu = 0, ca = 0, ci = 0, ce = 0, co = 0, i, n; // Vari�veis para contar as vogais

    // Loop principal do programa
    do
    {
        // Exibindo o menu de op��es
        cout << "Escolha uma op��o\n" << "0-Sair\n" << "1-Contar vogais\n";
        cin >> n; // Recebendo a escolha do usu�rio

        // Switch para tratar a escolha do usu�rio
        switch (n)
        {
            // Caso 0: sair do programa
        case(0):
        {
            break; // Sai do switch e, consequentemente, do loop
        }
        // Caso 1: contar vogais na frase inserida pelo usu�rio
        case(1):
        {
            cout << "Escreve uma frase\n";
            cin.ignore(); // Limpa o buffer do teclado
            getline(cin, txt); // Recebe a frase inserida pelo usu�rio

            // Loop para percorrer cada caractere da frase
            for (i = 0; i < txt.size(); i++)
            {
                // Switch para verificar se o caractere � uma vogal
                switch (txt[i])
                {
                    // Caso seja 'A' ou 'a', incrementa o contador de 'A/a'
                case('A'):
                case('a'):
                {
                    ca = ca + 1;
                    break;
                }
                // Caso seja 'E' ou 'e', incrementa o contador de 'E/e'
                case('E'):
                case('e'):
                {
                    ce = ce + 1;
                    break;
                }
                // Caso seja 'I' ou 'i', incrementa o contador de 'I/i'
                case('I'):
                case('i'):
                {
                    ci = ci + 1;
                    break;
                }
                // Caso seja 'O' ou 'o', incrementa o contador de 'O/o'
                case('O'):
                case('o'):
                {
                    co = co + 1;
                    break;
                }
                // Caso seja 'U' ou 'u', incrementa o contador de 'U/u'
                case('U'):
                case('u'):
                {
                    cu = cu + 1;
                    break;
                }
                }
            }

            // Exibindo a contagem de cada vogal na frase
            cout << "Escreveste " << ca << " A\n" << "Escreveste " << cu << " U\n" << "Escreveste " << ce << " E\n" << "Escreveste " << co << " O\n" << "Escreveste " << ci << " I\n";

            // Reiniciando os contadores para a pr�xima itera��o
            cu = 0; ca = 0; ci = 0; ce = 0; co = 0;
        }
        }
    } while (n != 0); // Continua o loop enquanto a escolha do usu�rio for diferente de 0
}
