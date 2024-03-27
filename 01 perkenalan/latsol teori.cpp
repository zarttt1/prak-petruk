#include <iostream>
using namespace std;

int main() {
  int sum = 1;

  // Looping dari 1 sampai 4
  for (int i = 1; i <= 4; i++) {
    // Periksa apakah bilangan ganjil
    if (i % 2 != 0) {
      // Tambahkan bilangan ke dalam variabel sum
      sum += i;
    }
  }

  // Tampilkan hasil penjumlahan
  cout << "Jumlah bilangan ganjil 4 angka pertama: " << sum << endl;

  return 0;
}

