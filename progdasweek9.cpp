#include <iostream>
#include <cmath>
using namespace std;

// Fungsi untuk menghitung jarak antara dua titik
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk menghitung radius lingkaran
double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

// Fungsi untuk menghitung keliling lingkaran
double circumference(double r) {
    const double pi = 3.1416;
    return 2 * pi * r;
}

// Fungsi untuk menghitung luas lingkaran
double area(double r) {
    const double pi = 3.1416;
    return pi * pow(r, 2);
}

int main() {
    double x1, y1, x2, y2;

    cout << "=== Program Menghitung Lingkaran dari Dua Titik ===" << endl;
    cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
    cin >> x2 >> y2;

    double r = radius(x1, y1, x2, y2);
    double d = 2 * r;
    double c = circumference(r);
    double a = area(r);

    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "Jari-jari (radius)      : " << r << endl;
    cout << "Diameter                : " << d << endl;
    cout << "Keliling (circumference): " << c << endl;
    cout << "Luas (area)             : " << a << endl;

    return 0;
}
