#include <iostream>

using namespace std;


int N;
int lovingMap[5001];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> lovingMap[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (i == lovingMap[lovingMap[lovingMap[i]]])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}