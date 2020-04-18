#include <fstream>
#define MAXN 500000
using namespace std;
ifstream fin("turnuri1.in");
ofstream fout("turnuri1.out");
char cul[MAXN];
char c1, c2;
int c, n, l1, l2, nt, i;
long long h, hmax;
int main() {
    fin >> c >> n;
    fin >> l1 >> c1;
    cul[l1 - 1] = c1;  hmax = h = l1; nt = 1;
    for(i = 1; i < n; i++) {
        fin >> l2 >> c2;
        cul[l2 - 1] = c2;
        if(l2 > l1 || c2 == c1) {
            h = 0;
            nt++;
        }
        h += l2;
        if(h > hmax) hmax = h;

        l1 = l2;
        c1 = c2;
    }
    fin.close();
    c1 = n = 0;
    for(l1 = 0; l1 < MAXN; l1++)
        if(cul[l1] > 0 && cul[l1] != c1) {
            n++;
            c1 = cul[l1];
        }

    if(c == 1)
        fout << nt << ' ' << hmax;
    else
        fout << n;
    fout.close();
    return 0;
}
