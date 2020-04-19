#include <fstream>
using namespace std;
short dlin[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
short dcol[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int a[100][100];
int main() {
    ifstream fin;
    ofstream fout;
    int n, k, d, t, l, c, maxx, nrmax;

    fin.open("furnica.in");
    fin >> n >> k;
    a[l = 0][c = 0]++;
    t = 2;
    maxx = nrmax = 1;
    while(k--) {
        fin >> d; d--;
        l += dlin[d];
        c += dcol[d];
        if(a[l][c] == 0)
            t += (l + c + 2) % 6;
        a[l][c]++;
        if(a[l][c] > maxx) {
            maxx = a[l][c];
            nrmax = 1;
        } else if(a[l][c] == maxx)
            nrmax++;
    }
    fin.close();

    fout.open("furnica.out");
    fout << t << ' ' << nrmax;
    fout.close();
    return 0;
}
