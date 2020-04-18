#include <fstream>
#define NMAX 250000
using namespace std;
ifstream fin("ordine.in");
ofstream fout("ordine.out");
short c;
int n, i, j;
int v[NMAX];
int main() {
    fin >> n;
    j = 0;
    for(i = 0; i < n; i++) {
        fin >> v[j];
        j += 2;
        if(j > n-1) j = 1;
    }
    fin >> c;
    if(c==1)
        fout << v[n-1];
    else
        for(i = 0; i < n; i++)
            fout << v[i] << ' ';
    fin.close(); fout.close();
    return 0;
}
