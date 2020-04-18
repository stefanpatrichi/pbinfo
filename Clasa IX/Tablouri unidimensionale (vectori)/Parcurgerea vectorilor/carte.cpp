#include <fstream>
using namespace std;
ifstream fin("carte.in");
ofstream fout("carte.out");
int n, i, zile, zx, x, xmax, zmax;
int v[10000];
int main() {
    fin >> n;
    for(i = 0; i < n; i++) fin >> v[i];
    x = 1;
    zile = 1;
    zmax = 0;
    while(x < n) {
        i = 0;
        while(v[i] != x && i < n) i++;
        while(v[i] != x + 1 && i < n) i++;
        if(i == n) {
            x++;
            if(zx > xmax) {
                xmax = zx;
                zmax = zile;
            }
            zile++;
            zx = 1;
        }
        else { x++; zx++; }
    }
    if(xmax == 1) zmax = 1;
    fout << zile << ' ' << zmax << ' ' << xmax;
    fin.close();
    fout.close();
    return 0;
}
