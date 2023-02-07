#include <iostream>
#include <cstdlib>
using namespace std;

// Решаем уравнение ax + b = 0.
double solve_linear(double a, double b)
{
    // Неужели так просто?
    return -b / a;
}

int main()
{
    cout << "Solving ax + b = 0, enter a, b:\n";
    cout.precision(16);
    for (double a, b; cin >> a >> b;)
        cout << "x == " << solve_linear(a, b) << endl;

    return EXIT_SUCCESS;
}