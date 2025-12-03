/* Algorithm Challenge & Problem Solving
 * 14 - Inverted Letter Pattern
 *
 * This program reads a positive number from the user and prints an
 * inverted letter pattern using ASCII uppercase letters.
 *
 * The algorithm is based on:
 *   1. Calculating the starting ASCII code: 'A' + (Number - 1).
 *   2. Printing the corresponding letter (char value) i times.
 *   3. Decreasing the letter each row until reaching 'A'.
 */

#include <iostream>
using namespace std;

// Reads a positive number (greater than 0).
int ReadPositiveNumber(string Message)
{
    int Number = 0;

    do
    {
        cout << Message << endl;
        cin >> Number;

        if (Number <= 0)
            cout << "Please enter a number greater than zero.\n";

    } while (Number <= 0);

    return Number;
}

// Prints an inverted letter pattern using ASCII codes.
void PrintInvertedLetterPattern(int Number)
{
    // Starting ASCII code: 'A' = 65 → 'A' + (Number - 1)
    for (int i = 65 + Number - 1; i >= 65; i--) // Outer loop controls the letter
    {
        // Number of repetitions decreases each row
        for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
        {
            cout << char(i); // Convert ASCII value to character
        }

        cout << endl; // Move to next line
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Enter a Positive Number:\n"));
    return 0;
}
