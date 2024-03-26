#include <iostream>
using namespace std;

float hitungKeliling(float sisi) {
    return 4 * sisi;
}

float hitungLuas(float sisi) {
    return sisi * sisi;
}

int main() {
    float sisi;
    
    cout << "Masukkan panjang sisi persegi: ";
    cin >> sisi;

    cout << "Keliling Persegi: " << hitungKeliling(sisi) << endl;
    cout << "Luas Persegi: " << hitungLuas(sisi) << endl;

    return 0;
}