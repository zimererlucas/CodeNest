#include <iostream>
#include <math.h>
#include <iostream>

void main()
{
    // Declaração de variáveis
    int dias, pessoas;
    float preco, valor, decimas;

    // Loop para entrada de dados válidos
    do
    {
        std::cin >> preco;
        std::cin >> dias;
        std::cin >> pessoas;
    } while (preco <= 100 && preco > 100000);

    // Conversão do preço para formato adequado
    preco = preco / 100;
    preco = preco - preco * 0.25;
    decimas = preco - trunc(preco);

    // Arredondamento do preço
    if (decimas > 0.5)
    {
        valor = trunc(preco) + 1;
    }
    else
    {
        valor = trunc(preco) + 0.5;
    }
    preco = valor;

    // Aplica descontos adicionais com base nos dias e número de pessoas
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

    // Exibe o preço final
    std::cout << preco;
}
