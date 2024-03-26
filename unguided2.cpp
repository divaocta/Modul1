#include <iostream>
using namespace std;

class Orang {
public:
  string nama;
  int umur;

  void info() {
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << endl;
  }
};

struct Alamat {
  string jalan;
  string kota;
  int kodePos;
};

int main() {
  Orang p1;
  p1.nama = "Diva";
  p1.umur = 18;
  p1.info();

  Alamat alamat;
  alamat.jalan = "Jl. Sijeruk";
  alamat.kota = "Pemalang";
  alamat.kodePos = 52363;

  cout << "Alamat: " << alamat.jalan << ", " << alamat.kota << ", " << alamat.kodePos << endl;

  return 0;
}