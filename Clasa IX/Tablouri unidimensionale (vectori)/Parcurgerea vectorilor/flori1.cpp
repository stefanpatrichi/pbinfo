#include <fstream>
using namespace std;
ifstream fin("flori1.in");
ofstream fout("flori1.out");
int n, H, zile, b, i, j, z, suma;
int h[100];
int main() {
    fin >> n >> H;
    for(i = 0; i < n; i++) fin >> h[i];
    b = z = 0;
    zile = 0;
    while(zile < n) {
        i = 1;
        while(i < n) {
            j = i;
            while(j > 0 && h[j-1] > h[j]) {
                swap(h[j-1], h[j]);
                j--;
            }
            i++;
        }
        for(i = 0; i < zile + 1; i++) {
            h[i]++;
            if(h[i] == H && !b) {
                b++;
                z = zile;
            }
        }

        zile++;
    }
    if(!b) z = n;
    suma = 0;
    for(i = 0; i < n; i++) {
        suma += h[i];
    }
    fout << suma << '\n' << z;
    return 0;
}
