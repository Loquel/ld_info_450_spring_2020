#include <iostream>
using namespace std;

int main()
{
    double x;
    
    cout << "Enter a positive number. Enter 0 to cancel: ";
    cin >> x;

    while(x < 0)
    {
        cout << "Number entered was not positive. Enter a positive number. Enter 0 to cancel: ";
        cin >> x;
    }
    
    while(x != 0)
    {
        cout << "The square of " << x << " is " << x * x;
        
        cout << ". Enter another positive number. Enter 0 to cancel: ";
        cin >> x;
        
        while(x < 0)
        {
            cout << "Number entered was not positive. Enter a positive number. Enter 0 to cancel: ";
            cin >> x;
        }

    }
    
    return 0;
}