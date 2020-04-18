/*
DISCLAIMER:
  - SOLUTIE DE 90 PUNCTE!
  - ACEST PROGRAM FOLOSESTE MATRICE!
*/
#include <fstream>
using namespace std;
ifstream fin("submit.in");
ofstream fout("submit.out");
int n, p[100], b, m, corect[100][100], vf[100], i, j, maxi, maxp, punctaj;
int main() {
    fin >> n;
    for(i = 0; i < n; i++)
        fin >> p[i];
    fin >> b >> m;
    maxp = maxi = 0;
    for(i = 0; i < m; i++) {
        punctaj = 0;
        for(j = 0; j < n; j++) {
            fin >> corect[i][j];
            punctaj += corect[i][j] ? p[j] : 0;
            if(corect[i][j]) vf[i]++;
        }
        if(punctaj > maxp) {maxp = punctaj; maxi = i;}
    }
    maxp = maxp - maxi * 2;
    if(vf[maxi] == n) maxp += b;
    if(maxp < 0) maxp = 0;
    fout << maxp;
    return 0;
}
