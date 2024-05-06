#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    huruf.front() = 'h';
    huruf.back() = 'h';
    cout << huruf.back();

    for (vector<char>::iterator it = huruf.begin(); it != huruf.end(); it++)
    {
        cout << *it << " ";
    }
    cout << huruf.at(3);
    huruf.push_back('o');
    huruf.pop_back();
    cout << huruf.size();
    cout << huruf.empty();

    return 0;
}