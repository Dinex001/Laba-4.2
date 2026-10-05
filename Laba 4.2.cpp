#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double Xpoch, Xkin, dX;
    double x, y;

    cout << "Enter Xpoch: ";
    cin >> Xpoch;

    cout << "Enter Xkin: ";
    cin >> Xkin;

    cout << "Enter dX: ";
    cin >> dX;

    cout << "\n-----------------------------\n";
    cout << setw(10) << "x"
        << setw(15) << "y" << endl;
    cout << "-----------------------------\n";

    for (x = Xpoch; x <= Xkin; x += dX)
    {
        if (x <= -0.1)
        {
            y = 2 * abs(pow(x, 3)) - 5 * cos(18 * x);
        }
        else if (x < 1.2)
        {
            y = 2 * abs(pow(x, 3)) - atan((x + 2) / 5);
        }
        else
        {
            y = 2 * abs(pow(x, 3)) + 1 / tan(x) + 18;
        }

        cout << fixed << setprecision(4);
        cout << setw(10) << x
            << setw(15) << y << endl;
    }

    return 0;
}