#include <iostream>

using namespace std;

int hailstoneSequence(int x);

int main()
{
    cout<<hailstoneSequence(100)<<endl;
}
int hailstoneSequence(int x)
{
    static int count = 1;
    if (x == 1)
    {
        return count;
    }
    count++;
    if (x % 2 == 0)
    {
        return hailstoneSequence(x / 2);
    }
    else
    {
        return hailstoneSequence((x * 3) + 1);
    }
}