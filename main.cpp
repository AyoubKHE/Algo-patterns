#include <iostream>

using namespace std;

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

    cout << "pattern 2 : \n";

    for (int i = size; i >= 1; i--)
    {
        drawStarsLine(i);
    }

    return 0;
}
