#include <bits/stdc++.h>

using namespace std;

int x=5, y, z;

int func(int a, int b)
{
    return a+b;
}

namespace Info{
    int x=10;
}

int main ()
{
    cout <<Info::x << endl;
    return 0;
}
