#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {3,1,2};
    ranges::sort(v);  // C++20
    for(int x : v) cout << x << " ";
}