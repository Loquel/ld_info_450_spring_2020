#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x[10];

    cout << "Enter the number for index 0: ";
    cin >> x[0];
    
    cout << "Enter the number for index 1: ";
    cin >> x[1];

    cout << "Enter the number for index 2: ";
    cin >> x[2];

    cout << "Enter the number for index 3: ";
    cin >> x[3];

    cout << "Enter the number for index 4: ";
    cin >> x[4];

    cout << "Enter the number for index 5: ";
    cin >> x[5];

    cout << "Enter the number for index 6: ";
    cin >> x[6];

    cout << "Enter the number for index 7: ";
    cin >> x[7];

    cout << "Enter the number for index 8: ";
    cin >> x[8];

    cout << "Enter the number for index 9: ";
    cin >> x[9];

    double mean0 = (x[0] + x[1] + x[2] + x[3] + x[4] + x[5] + x[6] + x[7] + x[8] + x[9]) / 10;

    double x0 = (x[0] - mean0) * (x[0] - mean0);
    double x1 = (x[1] - mean0) * (x[1] - mean0);
    double x2 = (x[2] - mean0) * (x[2] - mean0);
    double x3 = (x[3] - mean0) * (x[3] - mean0);
    double x4 = (x[4] - mean0) * (x[4] - mean0);
    double x5 = (x[5] - mean0) * (x[5] - mean0);
    double x6 = (x[6] - mean0) * (x[6] - mean0);
    double x7 = (x[7] - mean0) * (x[7] - mean0);
    double x8 = (x[8] - mean0) * (x[8] - mean0);
    double x9 = (x[9] - mean0) * (x[9] - mean0);

    double mean1 = (x0 + x1 + x2 + x3 + x4 + x5 + x6 + x7 + x8 + x9) / 10;

    double deviation = sqrt(mean1);

    cout << "Results: " << mean0 << ", " << deviation;

    return 0;
}