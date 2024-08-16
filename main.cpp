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

    cout << "\n";
}

int main()
{
    int size = 10;

    cout << "pattern 3 : \n";

    for (int i = 1; i <= size; i++)
    {
        drawSpaces(size - i);
        drawStarsLine(i);
    }

    return 0;
}
