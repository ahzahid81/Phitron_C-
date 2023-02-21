#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }



    for(int pass = 0; pass<n; pass++)
    {
        bool sorted = true;
        for(int j =0; j<n-1-pass; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                sorted = false;
            }
        }
        if(sorted)
        {
            break;
        }
        cout <<" After pass "<<pass<<": ";
        for(int i=0; i<n; i++)
        {
            cout << a[i] <<" ";
        }
        cout <<"\n";
    }

    cout << "\nAfter Sorting: \n";

    for(int i=0; i<n; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}
