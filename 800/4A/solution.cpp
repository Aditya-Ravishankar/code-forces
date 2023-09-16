#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isEven = n % 2 == 0;
    bool isGreaterThan2 = n > 2;
    string res = isEven && isGreaterThan2 ? "YES" : "NO";
    cout << res << endl;;
    return 0;
}