#include <fstream>
using namespace std;

ifstream fin("triviador.in");
ofstream fout("triviador.out");

long i = 1, n, p1, p2, p3, sumaPunctaje, maxim1 = 0, maxim2 = 0, egale = 1;

int main() {
  fin >> n;

  while(i <= n) {
    fin >> p1 >> p2 >> p3;
    sumaPunctaje = p1 + p2 + p3;

    if(sumaPunctaje > maxim1) {
      maxim2 = maxim1;
      maxim1 = sumaPunctaje;
    } else if(sumaPunctaje > maxim2 && sumaPunctaje != maxim1) {
      maxim2 = sumaPunctaje;
    } else {
      egale++;
    }

      i++;
  }

  if(egale == n) fout << "TOTI SUNT CASTIGATORI";
  else fout << maxim1 << " " << maxim2;

  fin.close();
  fout.close();

  return 0;
}
