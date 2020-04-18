#include <fstream>
using namespace std;
ifstream fin("cifre10.in");
ofstream fout("cifre10.out");
int ea, eb, nr, p, n, i, mn, mx, j, k, contor;
short a[10], b[10];
int main() {
    fin >> p >> n;
    mx = 0;
    for(i = 0; i < n; i++) {
        fin >> ea >> eb;
        for(j = 0; j <= 9; j++) a[j] = b[j] = 0;
        while(ea) { a[ea%10]++; ea /= 10; }
        while(eb) { b[eb%10]++; eb /= 10; }
        nr = 0;
        for(j = 9; j >= 0; j--) {
            if(a[j] > 0 && b[j] > 0) {
                if(a[j] < b[j]) mn = a[j];
                else mn = b[j];
                for(k = 0; k < mn; k++) nr = nr*10 + j;
            }
        }
        if(nr) contor++;
        if(nr > mx) mx = nr;
    }
    if(p == 1) fout << contor;
    else fout << mx;
    return 0;
}
