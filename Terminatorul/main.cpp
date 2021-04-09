#include <cstdlib>
#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>
#include <conio.h>

using namespace std;

int my_random(int a, int b)
{
    srand(time(nullptr));
    return  1 + rand() % (45);
}

int tinta = my_random(1, 45);

void setup()
{
    cout << "D>>";
    for(int i = 1; i < tinta; i++)
        cout << " ";
    cout << "O A" << endl;
}

void core()
{
    int x;
    setup();
    cin >> x;
    cout << endl;
    system("CLS");
    setup();
    cout << "D>>";
    for(int i = 1; i < x; i++)
    {
        if(i == tinta || i == tinta + 2)
            cout << "&";
        else
            cout << "-";
        Sleep(40);
    }
    cout << "X" << endl;

    if(x == tinta || x == tinta + 1)
        cout << "Ai castigat" << endl;
    else
        cout << "Ai pierdut" << endl;
}

int main()
{
    core();
    getch();
    system("CLS");
    return main();
}
