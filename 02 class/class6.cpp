#include <iostream>
using namespace std;

lass mahasiswa{
    public:
        string nama;
        
    public:
        void setNama(string nama){
            this->nama = nama;
        }
        
        string getNama(){
            return nama;
        }
};

int main() {
    mahasiswa mhs;
    
    mhs.setNama("zart");
    cout<<mhs.getNama();

}