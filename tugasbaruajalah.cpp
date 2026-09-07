#include <iostream>
using namespace std;

int main () {

    int radius,tinggi;
    float pi = 3.14,volume,luas;

    cout << "=============================================\n\tVolume dan Luas Alas Kerucut\t\n=============================================" << endl;
    cout << "Masukkan Radius: "; cin >> radius;
    cout << "Massukan tinggi: "; cin >> tinggi;

    cout << "\n===================================================\n\t\tLuas Alas Kerucut\t\n===================================================" << endl;
    luas = pi * radius * radius;
    cout << luas;

    cout << "\n===================================================\n\t\tVolume Kerucut\t\t\n===================================================" << endl;
    volume = 1.0/3.0 * luas * tinggi;
    cout << volume;
    return 0;
}