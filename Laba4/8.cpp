#include <iostream>
#include <cmath>
using namespace std;

int nk(double a, double b, double c, double* x1, double* x2) {
    double D = b*b - 4*a*c; // дискриминант
    if (D < 0) return 0; // нет корней
    if (D == 0) { // один корень
        *x1 = -b / (2*a);
        return 1;
    }
    // два корня
    *x1 = (-b + sqrt(D)) / (2*a);
    *x2 = (-b - sqrt(D)) / (2*a);
    return 2;
}

int main() {
    double a, b, c;
    double x1, x2;

    // первое уравнение 4x^2 - 5x + 1 = 0
    a = 4; b = -5; c = 1;
    int r = nk(a, b, c, &x1, &x2);
    if (r == 0) cout << "Net korney dlya uravneniya 4x^2 - 5x + 1 = 0" << endl;
    else if (r == 1) cout << "Koren uravneniya 4x^2 - 5x + 1 = 0: " << "*** " << x1 << " ***" << endl;
    else cout << "Korni uravneniya 4x^2 - 5x + 1 = 0: " << "*** " << x1 << " i " << x2 << " ***"<< endl;

    // второе уравнение 13x^2 + 2x + 5 = 0
    a = 13; b = 2; c = 5;
    r = nk(a, b, c, &x1, &x2);
    if (r == 0) cout << "Net korney dlya uravneniya 13x^2 + 2x + 5 = 0" << endl;
    else if (r == 1) cout << "koren uravneniya 13x^2 + 2x + 5 = 0: " << "*** " <<  x1 << " ***" << endl;
    else cout << "korni uravneniya 13x^2 + 2x + 5 = 0: " << x1 << " и " << "*** " << x2 << " ***" << endl;

    // третье уравнение x^2 - 4x + 4 = 0
    a = 1; b = -4; c = 4;
    r = nk(a, b, c, &x1, &x2);
    if (r == 0) cout << "Net korney dlya uravneniya x^2 - 4x + 4 = 0" << endl;
    else if (r == 1) cout << "Koren uravneniya x^2 - 4x + 4 = 0: " << "*** " << x1 << " ***" << endl;
    else cout << "Korni uravneniya x^2 - 4x + 4 = 0: " << "*** " << x1 << " и " << x2 << " ***" << endl;

    return 0;
}
