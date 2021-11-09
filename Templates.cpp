#include <iostream>

using namespace std;
/*
   int bigger(int a, int b)
   {
   return (a>b)? a : b;
   };


   double bigger(double a, double b) 
   {
   return (a > b) ? a: b;
   };


   string bigger(string a, string b) {
   return (a>b)? a: b;
   };
   */

struct State
{
    string name;
    int pop;
};

template<typename T>
T bigger(T a, T b)
{
  return (a>b)? a:b;
};

template<>
State bigger(State a, State b) 
{
    if (a.pop > b.pop)
    {
        return a;
    } else {
        return b;
    }
};

ostream & operator<<(ostream & out, State s)
{
    out<< s.name;
    return out;
};

int main() 
{
    int int1 =10, int2 =11;
    double d1= 3.1415, d2 = 3.15;
    string s1 = "apple"; 
    string s2 = "banana";
    State st1 {"California", 1000};
    State st2 {"Texas", 90};
    State st3;
    st3.name = "Montana";
    st3.pop = 12;

    cout << bigger(int1, int2) << endl;   
    cout << bigger(d1, d2) << endl;
    cout << bigger(s1, s2)<< endl;
    cout << bigger(st1, st2).name << endl;
    

    return 0;
}
