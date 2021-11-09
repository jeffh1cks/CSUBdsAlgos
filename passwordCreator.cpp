#include <iostream>
#include <cstring>

using namespace std;


class PasswordException : public exception
{
    public:
        const char * what() const throw()
        {
            return "Bad Password";
        }
};

class PasswordTooShort : public PasswordException
{
    public:
        const char * what() const throw()
        {
            return "Password too short";
        }
};

class PasswordNoDigits : PasswordException
{
    public:
        const char * what() const throw()
        {
            return "Password does not contain digits";
        }
};


int main()
{
    char password[20];

    cout << "create password: ";
    cin.getline(password, 20);
    try{
        bool gotdigits = false;
        for (int i = 0; i < strlen(password); i++)
        {
            if(isdigit(password[i]))
               gotdigits = true;
        }
        if (strlen(password) < 6) {throw PasswordTooShort();}
        if (!gotdigits) {throw PasswordNoDigits();}

        cout << "Password valid, you typed: " <<password << endl;
    }
    catch (PasswordTooShort & pts)
    {
        cerr<<pts.what() << endl;
    }
    catch (PasswordNoDigits & pnd)
    {
        cerr<<pnd.what() << endl;
    }
    catch(PasswordException & pe)
    {
        cerr << pe.what() << endl;
    }
    catch (...)
    {
        cerr <<"Unknown error occurred" << endl;
    }
    return 0;
}
