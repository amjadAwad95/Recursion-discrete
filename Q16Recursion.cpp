#include <iostream>

using namespace std;

bool PalindromeString(char s[]);

int main()
{
    char name[100] = "ababa";
    cout << PalindromeString(name) << endl;
}
bool PalindromeString(char s[])
{
    static int count = 0, f;
    if (s[count] == '\0')
    {
        static int l = count - 1;
        if (f == l||f == (l+1))
        {
            return true;
        }
        if (s[f] == s[l])
        {
            f++;
            l--;
            return PalindromeString(s);
        }
        else
        {
            return false;
        }
    }
    count++;
    return PalindromeString(s);
}