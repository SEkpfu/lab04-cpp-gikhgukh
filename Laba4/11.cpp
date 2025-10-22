#include <iostream>
#include <cmath>
using namespace std;

int ar(int x, int y) {
    return (x * y) / 2;
}
double ar(int a, int b, int ugol) {
    double r = ugol * M_PI / 180;
    return (a * b * sin(r)) / 2;
}
double ar(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main() {
    cout << "S po storone 10 i visote 5: " << ar(10, 5) << endl;
    cout << "S po storonam 8, 8 i uglu 60 gradusov: " << ar(8, 8, 60) << endl;
    cout << "S po storonam 3, 4, 5: " << ar(3.0, 4.0, 5.0) << endl;

    return 0;
}