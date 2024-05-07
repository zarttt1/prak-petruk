#include <iostream>
#include <stack>
#include <sstream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    stack<int> stk;

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
            stk.push(num);
        }
        else if (operation == "pop")
        {
            if (!stk.empty())
            {
                stk.pop();
            }
        }

        stack<int> tempStk = stk;
        while (!tempStk.empty())
        {
            cout << tempStk.top() << " ";
            tempStk.pop();
        }
        cout << endl;
    }

    return 0;
}