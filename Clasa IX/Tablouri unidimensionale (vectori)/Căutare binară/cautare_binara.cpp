#include <iostream>
using namespace std;
int n, m, i, s, d, mij;
int x[25000], y[200000];
bool gas;
int main() {
    cin >> n;
    for(i = 0; i < n; i++) cin >> x[i];
    cin >> m;
    for(i = 0; i < m; i++) cin >> y[i];

    for(i = 0; i < m; i++) {
        s = 0;
        d = n - 1;
        gas = false;
        while(s <= d && !gas) {
            mij = (s + d) / 2;
            if(y[i] == x[mij]) gas = true;
            else if(y[i] > x[mij]) s = mij + 1;
            else d = mij - 1;
        }
        if(!gas) cout << 0 << ' ';
        else cout << 1 << ' ';
    }
    return 0;
}
