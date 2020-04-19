#include <fstream>
using namespace std;
ifstream fin("sir5.in");
ofstream fout("sir5.out");
int k, x, xtemp, a, b, s, m, cfx, y, putere10, p, i;
int main() {
    fin >> k >> x >> a >> b;
    xtemp = x;
    for (i = 0; i < k; i++) {
        s = (s + i * (i + 1) / 2);
    }
    fout << s % 10 << endl;

    p = x;
    cfx = putere10 = 1;
    while(x > 9) {
        x /= 10;
        p /= 10;
        putere10 *= 10;
        cfx++;
    }
    if (p == cfx) {
        y = 0;
        for(m = 1; m <= cfx + 1; m++) {
            y = y * 10 + m;
        }
    } else {
         y = (xtemp - (putere10 * p)) * 10 + p;
    }
    fout << y << endl;

    if (b > a) fout << b - a << endl;
    else fout << 0 << endl;

    return 0;
}
