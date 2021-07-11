#include <iostream>

using namespace std;

int main()
{
    int n, b = 1, a = 2;;
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
      b *= a;
    cout << b << endl;
    return 0;
}
