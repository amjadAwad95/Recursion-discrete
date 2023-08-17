#include <iostream>

using namespace std;

char capitalFind(char s[], int i = 0);

int main()
{
    char s[100] = "amJadawad";
    cout << capitalFind(s) << endl;
}
char capitalFind(char s[], int i)
{
    if (s[i] == '\0')
    {
        cout << "No capital letter" << endl;
        return 0;
    }
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        return s[i];
    }
    return capitalFind(s, i + 1);
}