#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string s, res;
        cin >> s;
        if (s.length() <= 10) 
        {
            res = s;
        }
        else 
        {
            res = s[0] + to_string(s.length() - 2) + s[s.length() - 1];
        }
        cout << res << endl;
    }
    return 0;
}