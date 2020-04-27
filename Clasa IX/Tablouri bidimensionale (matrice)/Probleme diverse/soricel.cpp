#include <fstream>
#include <cmath>
#define MAXN 200
using namespace std;

int cas[MAXN][MAXN];
short zi[MAXN][MAXN];
int main() {
  ifstream fin;
  ofstream fout;
  int p, n, m, k, l, c, radical, zmax, zimax, camzk, dc, uz, ncons, nconsmax, ncub, ncubmax;

  fin.open("soricel.in");
  fin >> p >> n >> m >> k;
  camzk = zmax = 0;
  for(l = 0; l < n; l++)
    for(c = 0; c < m; c++) {
      fin >> cas[l][c];
      if(cas[l][c] > 1) {
        radical = sqrt(cas[l][c] - 1);
        zi[l][c] = cas[l][c] - radical * radical;
        if(zi[l][c] > zmax) zmax = zi[l][c];
        if(zi[l][c] == k) camzk++;
      }
    }
  fin.close();
  c = uz = zimax = ncons = nconsmax = ncub = ncubmax = 0;
  dc = 1;
  for(l = 0; l < n; l++) {
    while(c >= 0 && c < m) {
      if(zi[l][c] != uz)
        ncons = ncub = 0;
      if(zi[l][c]) {
        ncons++;
        ncub += cas[l][c] - zi[l][c];
        uz = zi[l][c];
        if((ncons > nconsmax) || (ncons == nconsmax && ncub > ncubmax) || (ncons == nconsmax && ncubmax == ncubmax && zi[l][c] > zimax)) {
          nconsmax = ncons;
          ncubmax = ncub;
          zimax = zi[l][c];
        }
      }
      c += dc;
    }
    c -= dc;
    dc = -dc;
  }
  fout.open("soricel.out");
  fout << (p == 1? zmax : nconsmax) << ' ' << (p == 1? camzk : zimax);
  fout.close();
  return 0;
}
