#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
double f(double x1, double y1, double x2, double y2);
double st(double s1, double s2, double s3);
int main() {
    double x1, y1, x2, y2;
    cout << "Vvesti x1: ";
    cin >> x1;
    cout << "Vvesti y1: ";
    cin >> y1;
    cout << "Vvesti x2: ";
    cin >> x2;
    cout << "Vvesti y2: ";
    cin >> y2;
//Длина
    double d = f(x1, y1, x2, y2);
    cout << "Dlinna = " << d << endl;
// Расстояние двух точек от начала
    double r1 = f(0, 0, x1, y1);
    cout << "Rasstoyaniye 1 = " << r1 << endl;
    double r2 = f(0, 0, x2, y2);
    cout << "Rasstoyaniye 2 = " << r2 << endl;
//Площадь треугольника
    double x3, y3;
    cout << "Vvesti x3: ";
    cin >> x3;
    cout << "Vvesti y3: ";
    cin >> y3;
    double a = f(x1, y1, x2, y2);    // сторона 1
    double b = f(x1, y1, x3, y3);    // сторона 2
    double c = f(x2, y2, x3, y3);    // сторона 3
    double s1 = st(a, b, c);
    cout << "Ploshad treugolnika = " << s1 << endl;
//Площадь четырёхугольника
    double x4, y4;
    cout << "Vvesti x4: ";
    cin >> x4;
    cout << "Vvesti y4: ";
    cin >> y4;
    double d1 = f(x1, y1, x3, y3); // Диагональ 1
    double d2 = f(x2, y2, x4, y4); // Диагональ 2
    double tr1 = st(f(x1, y1, x2, y2), f(x2, y2, x3, y3), d1);
    double tr2 = st(f(x1, y1, x4, y4), f(x4, y4, x3, y3), d2);
    double sch = tr1 + tr2;
    cout << "Ploshad chetirehugolnika = " << sch << endl;
    return 0;
}
double f(double x1, double y1, double x2, double y2) {
    return pow(pow(x2-x1, 2) + pow(y2-y1, 2), 0.5);
}
double st(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
