#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s = "I am eating rice";
    string s2 = "I am also eating dal.";

    cout << s.size() <<"\n";

//    cout << s[0] <<"\n";
//    cout << s[1] << s[2] << "\n";
//    for(int i=0; i<s.size(); i++)
//    {
//        s[i] = s[i] + 1;
//    }
    s.pop_back();
    s.erase(s.begin()+1);
    cout << s;
}
