#include <fstream>
using namespace std;
ifstream f("oglinda.in");
ofstream g("oglinda.out");
long s[2001], d[2001], i, N, M, o, k, j, n, x, t;
int main()
{
    f >> N >> M;
    for(i = 1; i <= M; i++) {
        f >> o;
        if(o == 1) {
            k++;
            f >> s[k] >> d[k];
        } else {
            f >> t;
            for(j = k; j >= 1; j--) {
                if(s[j] <= t &&t <= d[j]){
                    n = t - s[j];
                    t = d[j] - n;
                }
            }
            g << t << '\n';
        }
    }
    return 0;
}
