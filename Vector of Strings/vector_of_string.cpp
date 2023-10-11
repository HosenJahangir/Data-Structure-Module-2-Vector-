#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    // ## Printing
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    // ## OR
    for (string val : v)
    {
        cout << val << endl;
    }

    // ##Input with space
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for (string val : v)
    {
        cout << val << endl;
    }

    return 0;
}