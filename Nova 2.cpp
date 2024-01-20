#include <iostream>
#include <math.h>
#include <iostream>

void main()
{
    // Declara��o de vari�veis
    int dias, pessoas;
    float preco, valor, decimas;

    // Loop para entrada de dados v�lidos
    do
    {
        std::cin >> preco;
        std::cin >> dias;
        std::cin >> pessoas;
    } while (preco <= 100 && preco > 100000);

    // Convers�o do pre�o para formato adequado
    preco = preco / 100;
    preco = preco - preco * 0.25;
    decimas = preco - trunc(preco);

    // Arredondamento do pre�o
    if (decimas > 0.5)
    {
        valor = trunc(preco) + 1;
    }
    else
    {
        valor = trunc(preco) + 0.5;
    }
    preco = valor;

    // Aplica descontos adicionais com base nos dias e n�mero de pessoas
    if ((dias > 4) && (dias < 8))
    {
        preco = preco - preco * 0.4;
        decimas = preco - trunc(preco);
        if (decimas > 0.5)
        {
            valor = trunc(preco) + 1;
        }
        else
        {
            valor = trunc(preco) + 0.5;
        }
        preco = valor;
    }
    else if (dias > 8)
    {
        preco = preco - preco * 0.65;
        decimas = preco - trunc(preco);
        if (decimas > 0.5)
        {
            valor = trunc(preco) + 1;
        }
        else
        {
            valor = trunc(preco) + 0.5;
        }
        preco = valor;
    }

    // Aplica desconto adicional para mais de 3 pessoas
    if (pessoas > 3)
    {
        preco = preco - preco * 0.5;
        decimas = preco - trunc(preco);
        if (decimas > 0.5)
        {
            valor = trunc(preco) + 1;
        }
        else
        {
            valor = trunc(preco) + 0.5;
        }
    }
    preco = valor * 100;

    // Exibe o pre�o final
    std::cout << preco;
}
