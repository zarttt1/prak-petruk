#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama, npm;
};

int main()
{
    mahasiswa mhs;

    cin >> mhs.nama;
    cin >> mhs.npm;

    cout << mhs.nama << " " << mhs.npm;

    return 0;
}
