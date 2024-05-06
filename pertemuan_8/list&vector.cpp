#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> angka = {2, 4, 5, 7, 8};

    cout << angka.front() << endl;
    cout << angka.back() << endl;

    list<int>::iterator it;
    for (it = angka.begin(); it != angka.end(); ++it)
        cout << *it << " " << endl;

    angka.pop_front();
    angka.pop_back();

    cout << angka.size() << endl;

    if (angka.empty())
        cout << "kosong";
    else
        cout << "berisi";

    angka.assign(3, 0);
}