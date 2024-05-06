#include<iostream>
using namespace std;

class perhitunganKabisat{
    private:
    T* tahun;

    public:
    perhitunganKabisat(T* tahun):tahun(tahun){
    }
    T* gettahun()const{
        return tahun;
    }
    void settahun(T* tahun){
        this->tahun = tahun;
    }
    bool hitung kabisat () const{
        if(*tahun %4 ==0){
            if(*tahun%100 == 0){
                if(*tahun %400 == 0){
                    return true;
                }else{
                    return false;
                }
            }else{
                return true;
            }
        }else{
            return false;
        }
    }
};

int main(){
    int tahun;
    cout<<"masukan tahun : ";
    cin>>tahun;

    perhitunganKabisat<int> kabisat(&tahun);
    if(kabisat.hitumgkabisat()){
        cout<<*kabisat.gettahun()<< "adalah tahun kabisat"<<endl;
    }else{
        cout<<*kabisat.gettahun()<<"bukan tahun kabisat"<<endl;
    };

    return 0;
}