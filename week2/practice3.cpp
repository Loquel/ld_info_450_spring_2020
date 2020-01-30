#include <iostream>
using namespace std;

int main()
{
    int x;
    bool leap;
    
    cout << "Enter a year: ";
    cin >> x;

    while (x != 0) /* I don't believe 0 is specified as an exit condition like in the other
    programs, but for convenience of terminating the program I made it that way */
    {
        if((x % 100 == 0 && x % 400 == 0) || (x % 4 == 0 && x % 100 != 0))
        {
            leap = true;
        }
        else
        {
            leap = false;
        }
        
        if(leap == true)
        {
            cout << x << " is a leap year. ";
            cout << "Enter another year: ";
        }
        else
        {
            cout << x << " is not a leap year. ";
            cout << "Enter another year: ";
        }
        cin >> x;
    }

    return 0;
}