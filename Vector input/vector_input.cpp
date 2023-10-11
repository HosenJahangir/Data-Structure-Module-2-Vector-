#include <bits/stdc++.h>
using namespace std;
int main()
{ // ## Type one
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // Direct input wasn't possible as size was zero when declared.
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    // ##Type two
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}