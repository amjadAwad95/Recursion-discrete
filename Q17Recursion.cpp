#include <iostream>

using namespace std;

int powR(int x, int y);

int main()
{
    cout<<powR(2,3);
}
int powR(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return x * powR(x, y - 1);
}