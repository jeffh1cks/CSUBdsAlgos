#include <iostream>

using namespace std;

void reverse(string s)
{
    if(s.length() != 0)
    {
        reverse(s.substr(1,s.length()-1));
    }
    cout << s[0];
}

int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num -1);
}

int main()
{
    string a = "hello";
    string b ="racecar";
    reverse(a);
    cout << " ";
    reverse(b);
    cout << endl;
    cout << factorial(4) << endl;
    return 0;
}
