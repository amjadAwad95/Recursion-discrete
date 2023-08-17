#include <iostream>

using namespace std;

void multiplyMatrix(int mat1[][2], int mat2[][2], int c1, int r2);

int main()
{
    int mat1[2][2] = {{1, 1}, {1, 1}};
    int mat2[2][2] = {{1, 1}, {1, 1}};
    multiplyMatrix(mat1, mat2, 2, 2);
}
void multiplyMatrix(int mat1[10][10], int mat2[10][10], int c1, int r2)
{
    static int r = 0, c = 0;
    int sum = 0;
    if (c1 == r2)
    {
        sum += (mat1[r][c] * mat2[c][r]);
        c += 1;
        sum += (mat1[r][c] * mat2[c][r]);
        cout << sum << endl;
        r += 1;
        multiplyMatrix(mat1, mat2, c1, r2);
    }
}