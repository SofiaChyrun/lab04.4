// ChyrunSofialab4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_04_4.cpp
// < Чирун Софія >
// Лабораторна робота № 4.4
// Табуляція функції, заданої формулою: функція з параметрами 
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x, xp, xk, dx, R1, R2, y;
    cout << "Please input R1<R2, R2<3" << endl;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R1 = "; cin >> R1;
    cout << "R2 = "; cin >> R2;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (R1 < R2 && R2 < 3) {

            if (x <= -2 * R1)
                y = -x - 2 * R1;
            else
                if (-2 * R1 < x && x <= 0)
                    y = sqrt(-pow(x, 2) - 2 * x * R1);
                else
                    if (0 < x && x <= 2 * R2)
                        y = -sqrt(2 * x * R2 - pow(x, 2));
                    else
                        if (2 * R2 < x && x <= 6)
                            y = (-1 / (6 - 2 * R2)) * (x - 2 * R2);
                        else
                            y = -1;
        }
        else cout << "Error of input data";
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}