#include <iostream>

using namespace std;

void drawSpaces(int quantity)
{
    for (int i = 1; i <= quantity; i++)
    {
        cout << " ";
    }
}

void drawStarsLine(int quantity)
{
    for (int i = 1; i <= quantity; i++)
    {
        cout << "*";
    }
}

int main()
{
    int size = 10;

    cout << "pattern 5 : \n";

    for (int i = 1; i <= size; i += 2)
    {
        drawSpaces((size - i) / 2);

        drawStarsLine(i);

        // drawSpaces((size - i) / 2);

        cout << "\n";
    }

    for (int i = size - 3; i >= 1; i -= 2)
    {
        drawSpaces((size - i) / 2);

        drawStarsLine(i);

        // drawSpaces((size - i) / 2);

        cout << "\n";
    }

    return 0;
}