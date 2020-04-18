#include <fstream>
using namespace std;
ifstream fin("cladiri.in");
ofstream fout("cladiri.out");
int n, i, x, j, cif, y, q, nrp, MAX, dif, flag, nrm;
int cf[100], v[10000];
int cifre(int x) {
    int c = 0;
    y = x;
    while(y) {
        y /= 10;
        c++;
    }
    return c;
}
int main() {
    fin >> n;
    MAX = 0;
    nrp = 0;
    cif = 0;
    nrm = 0;
    for(i = 0; i < n; i++) {
        fin >> x;
        v[i] = x;
        cif = cifre(x);
        for(j = 0; j < cif; j++) {
            cf[j] = x % 10;
            x /= 10;
        }

        for(j = 0; j < cif; j++)
            if(cf[j] > MAX) MAX = cf[j];

        flag = 0;
        for(j = 0; j < cif / 2; j++) {
            q = cif - j - 1;
            if(cf[j] != cf[q]) {
                if(cf[j] > cf[q]) dif = dif + (cf[j] - cf[q]);
                else dif = dif + (cf[q] - cf[j]);
                flag = 1;
            }
        }

        if(!flag) nrp++;
    }
    for(i = 0; i < n; i++) {
        cif = cifre(v[i]);
        for(j = 0; j < cif; j++) {
            cf[j] = v[i] % 10;
            v[i] /= 10;
        }
        for(j = 0; j < cif; j++)
            if(cf[j] == MAX) {nrm++;break;}
}
    fout << MAX << ' ' << nrm << '\n' << nrp << '\n' << dif;
    return 0;
}
