#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;        // onstruct a vector with 0 elements
    vector<int> v(5);     // Construct a vector with N elements and  garbage value.
    vector<int> v(5, 10); // Construct a vector with N elements and value  V.

    vector<int> v1(5, 100); // Construct a vector by copying another vector v1.
    vector<int> v2(v1);     // by copying another vector v2 ends here.

    int a[6] = {1, 2, 3, 4, 5, 6}; // Construct a vector by copying an array A of size N.
    vector<int> v(a, a + 6);

    return 0;
}