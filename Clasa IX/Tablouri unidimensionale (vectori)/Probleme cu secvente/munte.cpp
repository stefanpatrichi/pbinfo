#include <fstream>
#define MAXN 100
using namespace std;
ifstream fin("munte.in");
ofstream fout("munte.out");
long long n, v[MAXN], i, j, kt, m, ok, k;
int main(){
    fin >> n;
    for(i = 0; i < n; i++) fin >> v[i];
    kt = 0;
    for(i = 1; i < n-1; i++) {
        if(v[i-1] < v[i] && v[i] > v[i+1]) {
            kt++;
            v[i] = 0;
            for(j = i; j < n-1; j++)
                v[j] = v[j+1];
            n--;
        }
    }
    fout << kt << '\n';
    k = 1;
    while(k > 0) {
        k = 0;
        for(j = 1; j < n-1; j++) {
            if(v[j-1] < v[j] && v[j] > v[j+1]) {
                kt++; k++;
                v[j] = 0;
                for(m = j; m < n-1; m++)
                    v[m] = v[m + 1];
                n--;
            }
        }
    }
    fout << kt << '\n';
    fout << n;
    fin.close(); fout.close();
    return 0;
}
