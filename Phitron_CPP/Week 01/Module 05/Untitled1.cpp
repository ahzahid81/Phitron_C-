#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, k;
    cin >> n >> k;
    vector <int> a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int low = 0, high = n-1;
    int mid;
    bool f;

    while(low<=high)
    {
        mid = (low + high) / 2;

        if(k == a[mid])
        {
            cout << "Yes\n";
            f=1;
            break;
        }
        else if(k < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(f==0)
    {
      cout <<"No\n";
    }
}
