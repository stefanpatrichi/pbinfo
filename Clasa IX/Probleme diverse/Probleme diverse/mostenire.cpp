#include <fstream>
using namespace std;
int p[10001];
int inloc[10];
int fr[10001];
int s[101], d[101];
int cfr[10];
int main() {
  ifstream fin( "mostenire.in" );
  int c, n, k, i, j, Max, poz;
  long q;
  fin >> c >> q >> n >> k;
  for( i = 1; i <= n; i++ )
    fin >> p[i];                  //citire
  for( i = 1; i <= k; i++ ) {
    fin >> s[i] >> d[i];
    for( j = s[i]; j <= d[i]; j++ )
      fr[j]++;                                //numar pozitiile intr-un vector de frecventa
  }                                           // pt cerinta 2
  fin.close();
  for( i = 9; i > 0; i-- ) {
    inloc[q % 10] = i;
    q /= 10;
  }
  poz = 0;
  Max = 0;
  for( i = 1; i <= n; i++ )
    if(fr[i] > Max) {
      Max = fr[i];                        //determin pozitia minima poz care a
      poz = i;                            //aparut in cele mai multe secvente modificate
    }
  cfr[p[poz]] = 1;    //la pozitia poz a aparut cifra p[poz]

  for( i = k; i >= 0; i-- ) {
    for( j = s[i]; j <= d[i]; j++)
      p[j] = inloc[p[j]];                 //modific parola
    cfr[p[poz]] = 1;      //la pozitia poz a aparut cifra p[poz]
  }

  ofstream fout( "mostenire.out" );
  if( c == 1 )
    for( i = 1; i <= n; i++ )
      fout << p[i] << ' ';
  else {
    fout << poz << '\n';
    for( i = 1; i <= 9; i++ )
      if( cfr[i] )
        fout << i << ' ';
  }
  fout.close();
  return 0;
}
