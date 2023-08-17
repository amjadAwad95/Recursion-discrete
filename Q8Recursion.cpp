#include <iostream>

using namespace std;

int maxElementArray(int array[], int size);

int main()
{
    int a[5] = {2, 3, 11, 6, 10};
    cout << maxElementArray(a, 5);
}
int maxElementArray(int array[], int size)
{
    static int max = array[size - 1];
    if (size < 0)
    {
        return max;
    }
    if (array[size - 1] > max)
    {
        max = array[size - 1];
    }

    return maxElementArray(array, size - 1);
}