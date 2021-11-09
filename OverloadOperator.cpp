#include <iostream>

using namespace std;


class Date
{
    private:
        int month, day, year;
    public:
        string months[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        Date(int m, int d, int y)
        {
            month = m;
            day = d;
            year = y;
        }
        bool operator==(Date rhs)
        {
            if (month == rhs.month && day == rhs.day && year == rhs.year)
                return true;
            else
                return false;
        }
        
        bool is_Christmas() {
            return (day == 25 && month == 12);
        }
               

        friend ostream & operator<<(ostream & out, Date d)
        {
            out<< d.months[d.month] << " " << d.day << ", " << d.year;
            return out;
        }
};

int main() 
{
    Date d1(9,14,2021);
    Date d2(9,15,2021);
    Date d3(12, 25,2021);
    if (d1 == d2)
        cout << "same date" << endl;
    else
        cout << "different date" << endl;
    

    cout << d2 << endl;
    if (d2.is_Christmas())
        cout << "The date is Christmas" << endl;
    else
        cout <<"The date is not Christmas :(" << endl;
   

    return 0;
}
