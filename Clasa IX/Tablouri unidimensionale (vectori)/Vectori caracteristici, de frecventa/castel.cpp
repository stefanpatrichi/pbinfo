#include <fstream>
#define KMAX 10
#define NMAX 1000
using namespace std;
ifstream f("castel.in");
ofstream g("castel.out");
int fr[10], MAX, maxi;
int n, k, i, x;
int main() {
    f >> n;
    for(i = 0; i < n; i++) {
        f >> x;
        while(x) {
            fr[x%10]++;
            x /= 10;
        }
    }
    f >> k;
    MAX = 0;
    for(i = 0; i < k; i++) {
        f >> x;
        if(fr[x] > MAX) { maxi = x; MAX = fr[x]; }
    }
    g << maxi << " " << MAX;
    return 0;
}
