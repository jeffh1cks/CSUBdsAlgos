#include <iostream>

using namespace std;

int sumRange(int num){
    if (num == 0){
        return num;
    }
   return num + sumRange(num -1);
}

int factorial(int num)
{
    if (num == 1){
        return 1;
    }
    return num * factorial(num-1);
}

int power(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    return base * power(base, exponent -1);
}

int productOfArray(int * arr, int s)
{
    if (s == 1){
        return arr[0];
    }
    return arr[0] * productOfArray(arr + 1, s -1);
}
int fibonacci (int num)
{
    if (num == 1)
    {
        return 1;
    }
    if (num == 2)
    {
        return 1;
    }
    return fibonacci(num -1) + fibonacci(num -2);
}

string reverse(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    return s[s.length() -1] + reverse(s.substr(0,s.length()-1));
}
bool isPalindrome(string s)
{
    if (s.length() == 1)
    {
        return true;
    }
    if (s.length() == 2)
    {
        return true;
    }
    if (s[0] == s[s.length() -1]){
        return isPalindrome(s.substr(1,s.length()-2));
    }
    return false;
}


int main()
{
    int first[] = {1,2,3, 4,5,6};
    string a = "hello";
    string b;
    //cout << productOfArray(first, 6) << endl;
    // cout << power(2, 3)<<endl;
    // cout<< sumRange(6) <<endl;
    //cout << factorial(6)<<endl;
    cout << fibonacci(10)<<endl;
    cout << reverse(b) << endl;
    cout << "Enter a word to see if it is a palindrome: ";
    cin >> b;
    if (isPalindrome(b))
    {
        cout << b << " is a palindrome" << endl;
    }
    else
    {
        cout << b << " is not a palindrome" << endl;
    }
    

    
    return 0;
}
