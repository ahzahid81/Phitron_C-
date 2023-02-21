#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
        cin >> a[i];

    int sum = 0;
    int mul = 1;
    for(int i=0; i<n; i++)
    {
        sum = sum + a[i];
        mul = mul * a[i];
    }

    cout << sum <<"\n"<<mul<<endl;

    return 0;
}
