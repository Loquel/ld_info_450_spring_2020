#include <iostream>
using namespace std;

int main()
{
    int x;
    int i = 2;
    bool prime;
    
    cout << "Enter a positive integer other than 0. Enter 0 to cancel: ";
    cin >> x;

    while (x < 0)
    {
        cout << "Integer entered was not positive. Enter a positive integer other than 0. Enter 0 to cancel: ";
        cin >> x;
    }
    
    while(x != 0)
    {
        while(i < x)
        {
            if(x % i == 0)
            {
                prime = false;
                break;
            }
            else
            {
                prime = true;
            }
            i++;
        }
        if(prime == true || x == 1 || x == 2)
        {
            cout << x << " is a prime number.";                
        }
        else
        {
            cout << x << " is not a prime number.";
        }
        i = 2;

        cout << " Enter another positive integer other than 0. Enter 0 to cancel: ";
        cin >> x;

        while (x < 0)
        {
            cout << "Integer entered was not positive. Enter a positive integer other than 0. Enter 0 to cancel: ";
            cin >> x;
        }
    }
    
    return 0;
}