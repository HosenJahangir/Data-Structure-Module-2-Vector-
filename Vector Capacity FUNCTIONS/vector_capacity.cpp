#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; // Here capacity 0

    cout << v.max_size() << endl; // output garbage value
    cout << v.capacity() << endl; // output 0.
    v.push_back(10);
    cout << v.capacity() << endl; // output 1.
    v.push_back(15);
    cout << v.capacity() << endl; //  output 2.
    v.push_back(26);
    cout << v.capacity() << endl; //  output 4 because capacity sob somoy double kore bare.
    cout << v.size() << endl;     // output 3:
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // output (array)10 15 26.
    }
    cout << endl;
    // v.clear();   // er pore v.size= 0 have but v[i] print habe because memory clear honi.
    v.empty();       // return true/false if the vector is empty or not.
    v.resize(2);     // output two elements 10 15
    v.resize(5);     // output last 3 elements 0 0 0
    v.resize(5, 50); // output last 3 elements 50 50 50
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // output 10 15 50 50 50
    }
    return 0;
}