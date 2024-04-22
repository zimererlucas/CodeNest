#include <iostream>
using namespace std;

int main() {
    int i, notes[200], n, j = 0;

    // Ask the user for the number of notes in the sequence
    cout << "Enter the number of notes in the sequence (between 3 and 200): ";
    cin >> n;

    // Repeat the process while n is between 3 and 200
    while (3 <= n && n <= 200) {
        j = 0; // Reset the count for each sequence check

        // Ask the user for the sequence of notes
        cout << "Enter the sequence of notes (each note between 1 and 37): ";
        for (i = 0; i < n; i++) {
            cin >> notes[i];

            // Check if the note is within the valid range [1, 37]
            if (notes[i] < 1 || notes[i] > 37) {
                cout << "Invalid input! Exiting..." << endl;
                return 1; // Exit the program with an error code if the input is invalid
            }
        }

        // Check for sequences of arpeggios
        for (i = 1; i < n - 1; i++) {
            if (notes[i - 1] < notes[i] && notes[i] > notes[i + 1]) {
                j++; // Increment the count for each arpeggio sequence found
            }
        }

        // Output the number of arpeggio sequences found
        cout << "Number of arpeggio sequences found: " << j << endl;

        // Output the arpeggio sequences found
        cout << "Arpeggio sequences found:" << endl;
        for (i = 1; i < n - 1; i++) {
            if (notes[i - 1] < notes[i] && notes[i] > notes[i + 1]) {
                cout << notes[i - 1] << " " << notes[i] << " " << notes[i + 1] << endl;
            }
        }

        // Ask the user for the number of notes in the sequence for the next iteration
        cout << "Enter the number of notes in the sequence (between 3 and 200) or enter any number less than 3 to exit: ";
        cin >> n;
    }

    return 0; // Exit the program with a success code
}
