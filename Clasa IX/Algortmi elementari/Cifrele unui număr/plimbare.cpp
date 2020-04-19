#include <fstream>
#define NMAX 7000
using namespace std;

ifstream fin("plimbare.in");
ofstream fout("plimbare.out");

int nr[NMAX];

bool palindrom(int x) {
  int aux, invers = 0;
  aux = x;
  while(x != 0) {
    invers = invers * 10 + x % 10;
    x /= 10;
  }
  if(aux == invers) return true;
  else return false;
}

int main() {
  int n, i, j, cont_palind;
  fin >> n;
  for(i = 0; i < n; i++)
    fin >> nr[i];
  cont_palind = 0;
  for(j = 0; j < n; j++)
    if(palindrom(nr[j]))
      cont_palind++;

  fout << cont_palind;
}
