#include <iostream>
using namespace std;
long long n, i, x, MIN, mx, cx;
int main()
{
    cin >> n;
    MIN = 10;
    mx = -1;
    for(i = 0; i < n; i++) {
        cin >> x;
        cx = x;
        while(x > 9)
            x /= 10;
        if(x < MIN) { MIN = x; mx = cx; }
        else if (x == MIN) {
            if(cx > mx) { mx = x; mx = cx; }
        }

    }
    cout << mx;
    return 0;
}
