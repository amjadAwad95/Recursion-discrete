#include <iostream>

using namespace std;

void printArrayElements(int array[], int size,int n);

int main()
{
    int array[4] = {1, 2, 3, 4};
    printArrayElements(array, 4,0);
}
void printArrayElements(int array[], int size,int n)
{
    if (n == size)
    {
        return;
    }
    cout << array[n] << endl;
    printArrayElements(array, size ,n+1);
}