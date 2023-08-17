#include <iostream>

using namespace std;

bool primeR(int x, int i = 2);

int main()
{
    cout << primeR(6);
}
bool primeR(int x, int i )
{

    if (x <= 2)
    {
        return (x == 2) ? true : false;
    }
    if (x % i == 0)
    {
        return false;
    }
    if (i * i > x)
    {
        return true;
    }
    return primeR(x, i + 1);
}