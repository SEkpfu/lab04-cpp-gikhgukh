#include <iostream>
using namespace std;

double pergr(double grc);
double perkel(double grc);
void pergrkel(double grc, double& grf, double& grk);

int main() {
    double grc;
    cout << "Gradusi C: ";
    cin >> grc;
    double grf = pergr(grc);
    cout << "Gradusi F: " << grf << endl;
    double grk = perkel(grc);
    cout << "Kelvin: " << grk << endl;
    double f, k;
    pergrkel(grc, f, k);
    cout << "Temperatura v F: " << f << ", i v K: " << k << endl;

    return 0;
}
double pergr(double grc) {
    double grf = (9.0/5.0)*grc + 32;
    return grf;
}
double perkel(double grc) {
    double grk = grc + 273;
    return grk;
}
void pergrkel(double grc, double & grf, double &grk) {
    // для Фаренгейта
    grf = (9.0/5.0)*grc + 32;
    // для Кельвина
    grk = grc + 273;
}