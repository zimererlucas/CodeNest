#include<iostream>
using namespace std;

int main() {
    int i, j, tabela[50][50], linhas, colunas, soma = 0, quantnums = 1, ultimoi = -1, ultimoj = -1, movimentos;

    // Input validation for the number of rows
    do {
        cout << "Enter the number of rows (1-50): ";
        cin >> linhas;
    } while (linhas < 1 || linhas > 50);

    // Input validation for the number of columns
    do {
        cout << "Enter the number of columns (1-50): ";
        cin >> colunas;
    } while (colunas < 1 || colunas > 50);

    // Input elements of the table
    cout << "Enter the elements of the table:" << endl;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            cin >> tabela[i][j];
        }
    }

    i = 0;
    j = 0;
    do {
        movimentos = 0;
        // Check downward movement
        if (i < linhas - 1 && tabela[i][j] == tabela[i + 1][j] && (i + 1 != ultimoi || j != ultimoj)) {
            quantnums++;
            cout << "B";
            i++;
            ultimoi = i - 1;
            ultimoj = j;
            movimentos++;
        }
        // Check rightward movement
        if (j < colunas - 1 && tabela[i][j] == tabela[i][j + 1] && (i != ultimoi || j + 1 != ultimoj)) {
            quantnums++;
            cout << "D";
            j++;
            ultimoi = i;
            ultimoj = j - 1;
            movimentos++;
        }
        // Check upward movement
        if (i > 0 && tabela[i][j] == tabela[i - 1][j] && (i - 1 != ultimoi || j != ultimoj)) {
            quantnums++;
            cout << "C";
            i--;
            ultimoi = i + 1;
            ultimoj = j;
            movimentos++;
        }
        // Check leftward movement
        if (j > 0 && tabela[i][j] == tabela[i][j - 1] && (i != ultimoi || j - 1 != ultimoj)) {
            quantnums++;
            cout << "E";
            j--;
            ultimoi = i;
            ultimoj = j + 1;
            movimentos++;
        }
    } while (movimentos > 0);

    // Output the product of quantnums and the value at the top-left corner of the table
    cout << endl << "Result: " << quantnums * tabela[0][0] << endl;

    return 0;
}