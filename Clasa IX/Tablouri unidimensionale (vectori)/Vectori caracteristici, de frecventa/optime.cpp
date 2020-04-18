#include <fstream>
#define XKMAX 200
#define MAXPRIM 1143893
char ciur[MAXPRIM+1];
int primcol[XKMAX];
using namespace std;
int main() {
    ifstream fin;
    ofstream fout;
    int c, k, x, i, j, suma, d, maxx;
    fin.open("optime.in");
    fin >> c >> k >> x;
    fin.close();
    for(i = 2; i * i <= MAXPRIM; i++)                   //ciur
        if(!ciur[i])
            for(d = i * i; d <= MAXPRIM; d += i)
                ciur[d] = 1;
    suma = j = 0;
    i = 2;
    while(j < 2 * k * k) {
        if(!ciur[i] && i % 100 > 9) {
            if(!ciur[i % 100])
                primcol[j % k]++;
            else
                suma += i % 100;
            j++;
        }
        i++;
    }
    fout.open("optime.out");
    if(c == 1) fout << suma;
    else {
        maxx = j = 0;
        for(i = 0; i < x; i++)
            maxx += primcol[i];
        suma = maxx;
        for(i = x; i < k; i++) {
            suma -= primcol[i - x];
            suma += primcol[i];
            if(suma >= maxx) {
                j = i - x + 1;
                maxx = suma;
            }
        }
        fout << j+1 << '\n' << maxx;
    }
    fout.close();
    return 0;
}
