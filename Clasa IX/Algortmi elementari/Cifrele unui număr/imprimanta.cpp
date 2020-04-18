#include <fstream>
using namespace std;
ifstream f("imprimanta.in");
ofstream g("imprimanta.out");
short v[10] = {12, 5, 11, 11, 9, 11, 12, 7, 13, 12};
long long n, aux, i, c, mi, index, k;
int main() {
    f >> n >> k;
    mi = 14;
    aux = n;
    while(n) {
        c = n % 10;
        if(v[c] < mi) { mi = v[c]; index = c; }
        else if(v[c] == mi && index < c) index = c;
        n /= 10;
    }
    g << index << '\n';
    if(!(k % 5)) {
        for(i = 1; i <= k/5; i++) {
            g << 1;
        }
    } else if(k % 5 == 1) {
        if(k > 16) {
            g << 777;
            for(i = 1; i <= k/5 - 4; i++) {
                g << 1;
            }
        } else g << 74;
    } else if(k % 5 == 2) {
        g << 7;
        for(i = 1; i <= k/5 - 1; i++) {
            g << 1;
        }
    } else if(k % 5 == 3) {
        g << 8;
        for(i = 1; i <= k/5-2; i++) {
            g << 1;
        }
    } else {
        g << 77;
        for(i = 1; i <= k/5-2; i++) {
            g << 1;
        }
    }

    f.close(); g.close();
    return 0;
}
