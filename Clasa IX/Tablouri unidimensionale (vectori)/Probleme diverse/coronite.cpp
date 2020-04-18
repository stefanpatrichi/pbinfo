#include <fstream>
#define MAXN 100
using namespace std;
ifstream f("coronite.in");
ofstream g("coronite.out");
int x[MAXN], n[MAXN], coronite[MAXN], onec, ok, k;
int N, i, j, crt;
int main() {
    f >> N;
    for(i = 0; i < N; i++) {
        f >> x[i];
        n[i] = i + 1;
    }
    k = 0;
    for(i = 0; i < N; i++) {
        crt = (crt + x[i]) % N;
        if(!coronite[crt]) { coronite[crt]++; k++; }
        if(crt == 0) onec = k;
    }
    if(k == N) g << 1;
    else g << 0;
    g << '\n' << onec;

    return 0;
}
