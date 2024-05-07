#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    queue<int> q;

    for (int i = 0; i < N; ++i)
    {
        string command;
        getline(cin, command);

        stringstream ss(command);
        string operation;
        ss >> operation;

        if (operation == "push")
        {
            int num;
            ss >> num;
            q.push(num);
        }
        else if (operation == "pop")
        {
            if (!q.empty())
            {
                q.pop();
            }
        }

        queue<int> tempQ = q;
        while (!tempQ.empty())
        {
            cout << tempQ.front() << " ";
            tempQ.pop();
        }
        cout << endl;
    }

    return 0;
}
