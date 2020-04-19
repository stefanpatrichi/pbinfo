#include <fstream>
using namespace std;

ifstream fin("canguri.in");
ofstream fout("canguri.out");

int i, maxSaritura, x, nr, nrMax, sarituri;

int main() {
  i = 1;
  maxSaritura = 0;
  while(i <= 3) {
    fin >> nr >> x;
    if(x > maxSaritura) {
      maxSaritura = x;
      nrMax = nr;
    }
    i++;
  }
  if(800 % maxSaritura == 0) fout << nrMax << "\n" << 800 / maxSaritura;
  else fout << nrMax << "\n" << 800 / maxSaritura + 1;
}
