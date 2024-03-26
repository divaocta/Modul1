#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string buah[] = {"Apel", "Pisang", "Jeruk", "Anggur"};

    map<std::string, int> jumlahBuah;
    jumlahBuah["Apel"] = 10;
    jumlahBuah["Pisang"] = 5;
    jumlahBuah["Jeruk"] = 8;
    jumlahBuah["Anggur"] = 3;

    cout << "Jumlah Apel yang tersedia: " << jumlahBuah["Apel"] << endl;
    cout << "Jumlah Pisang yang tersedia: " << jumlahBuah["Pisang"] << endl;
    cout << "Jumlah Jeruk yang tersedia: " << jumlahBuah["Jeruk"] << endl;
    cout << "Jumlah Anggur yang tersedia: " << jumlahBuah["Anggur"] << endl;

    return 0;
}