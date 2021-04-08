#include <cstdlib>
#include <iostream>
#include <random>
#include <ctime>

using namespace std;
int my_random(int a, int b)
{
    std::srand(std::time(nullptr));
    return  1 + std::rand() % (45);
}
int main()
{
    int randnr = my_random(0, 10);
    cout << randnr << endl;
    return 0;
}
