#include <iostream>

using namespace std;

bool binarySearch(int x, int array[], int size);

int main()
{
    int array[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    cout << binarySearch(20, array, 15) << endl;
}
bool binarySearch(int x, int array[], int size)
{
    static int low = 0, high = size;
    int mid = (low + high) / 2;
    if (low > high)
    {
        return false;
    }
    if (x == array[mid])
    {
        return true;
    }
    else
    {
        if (x > array[mid])
        {
            low = mid + 1;

            return binarySearch(x, array, size);
        }
        else
        {
            high = mid - 1;
            return binarySearch(x, array, size);
        }
    }
}