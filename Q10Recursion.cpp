#include <iostream>

using namespace std;

int factR(int x);

int main()
{
    cout<<factR(5)<<endl;
}
int factR(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    return x * factR(x - 1);
}