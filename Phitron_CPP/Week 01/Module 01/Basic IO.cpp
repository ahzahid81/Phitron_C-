#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    char ch;
    float f;
    double d;
    cin >> x >> y;
    cout << x << " " << y << endl;

    cin >> ch >> f >> d;
    cout << ch <<" " << f <<" "<<d<<"\n";

    string s;
    cin >> s;
    cout << s << "\n";

    string s1 = "I Love Bangladesh\n";
    string s2 = "too much";
    s1 = s1 + s2;
    cout << s;
    return 0;
}
