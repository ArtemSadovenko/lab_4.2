#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x, xp, xk, dx, y, a, b, c;

    cout << "xp = "; cin >> xp;     
    cout << "xk = "; cin >> xk;     
    cout << "dx = "; cin >> dx;
    cout << "b = "; cin >> b;
    cout << "a = "; cin >> a;
    cout << "c = "; cin >> c;

    cout << fixed;     cout << "---------------------------" << endl;     
    cout << "|" << setw(5) << "x" << "     |" << setw(7) << "y" << "       |" << endl;     
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {
        if (x <= -1) {
            y = 13.5 - (2 * x) - exp(0.4 + x);
        }
        else if (x > -1 && x < 1) {
            y = 13.5 - (2 * x) - 1 - pow((sin(x)), 2);
        }
        else {
            y = 13.5 - (2 * x) - ((cos(x)) / (1 + pow((sin(x)), 2)));
        }

    cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << y << "    |" << endl;         
    x += dx; 
    }     
    cout << "---------------------------" << endl;
    
    return 0;
}


