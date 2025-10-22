#include <iostream>
using namespace std;
double sum(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
int main() {
    double a, b;
    cout << "Vvesti A: ";
    cin >> a;
    cout << "Vvesti B: ";
    cin >> b;
    double am2 = sub(a, 2);
    double am2pb = sum(am2, b);
    double proz = mul(am2pb, 5);
    double proz2 = mul(1000,a);
    double isum = sum(proz, proz2);
    cout << "Rezultat = " << isum << endl;
    return 0;
}
double sum(double x, double y) {
    return x + y;
}
double sub(double x, double y) {
    return x - y;
}
double mul(double x, double y) {
    return x * y;
}