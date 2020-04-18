#include <fstream>
using namespace std;
ifstream fin("pozne.in");
ofstream fout("pozne.out");
int n, s, c, p, i, x, xx, o, d, k, kk, kpcp, knpcp;
int main() {
    fin >> p >> n >> s >> c;
    if(p == 1) {
        for(i = 0; i < n; i++) {
            fin >> x;
            xx = x;
            while(x % 10 != c && x > 0) x /= 10;
            if(x != 0) fout << xx << ' ';
        }
    } else {
        for(i = 0; i < n; i++) {
            fin >> x;
            o = 0;
            while(x) {
                o = o * 10 + x % 10;
                x /= 10;
            }
            k = 0;
            for(d = 2; d * d <= o; d++) {
                if(o % d == 0) k++;
            }
            xx = x;
            while(x % 10 != c && x > 0) x /= 10;
            if(x != 0) kpcp++;                      //kpcp = contor prieten cu primarul
            else knpcp++;                           //knpcp = contor nu prieten cu primarul
            if(k == 0) kk++;
        }
        fout << kk << ' ';
        if(kpcp > knpcp) fout << -1;
        else if(kpcp == knpcp) fout << 0;
        else fout << 1;
    }
    return 0;
}
