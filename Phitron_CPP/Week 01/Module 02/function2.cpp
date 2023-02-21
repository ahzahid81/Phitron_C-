#include <bits/stdc++.h>

using namespace std;

void erase_first_last (string s)
{
    s.erase(s.begin());
    s.pop_back();
    cout << s <<"\n";
}

int main ()
{
    string s;
    cin >> s;
    erase_first_last(s);
    cout << s <<"\n";

    return 0;
}

