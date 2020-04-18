#include <fstream>
using namespace std;
ifstream fin("onigim.in");
ofstream fout("onigim.out");
short N, K, p[301], a[1001], i, v[1001], Max, j, a2[1001], m, m2, m3, t, aux[1001], fr[1001], ma;
int main()
{
    fin >> N >> K;
    for(i = 1; i <= K; i++)
        fin >> p[i];
    for(i = 1; i <= N; i++)
    {   fin >> a[i]; a2[i] = a[i]; }
    for(i = 1; i <= N; i++)
        fr[a[i]]++;
    for(i = 1; i <= N; i++)
        if(fr[i] > ma) ma = fr[i];
    for(i = 1; i <= K; K--) {
        Max = 0;
        for(j = 1; j <= N; j++)
            if(a[j] > Max) Max = a[j];
        v[Max] = p[K];
        p[K] = 0;
        for(j = 1; j <= N; j++)
            if(a[j] == Max) a[j] = 0;
    }
    for(i = 1; i <= N; i++) {
        aux[i] = v[a2[i]];
        fout << v[a2[i]] << ' ';
    }
    fout << '\n';
    for(i = 1; i <= N; i++) {
        if(v[i] > m) {
            m3 = m2;
            m2 = m;
            m = v[i];
        } else if(v[i] > m2) {
            m3 = m2;
            m2 = v[i];
        } else if(v[i] > m3) m3 = v[i];
    }
    for(i = 1; i <= N; i++)
        if(aux[i] == m || aux[i] == m2 || aux[i] == m3)
            t++;
    fout << t << '\n' << ma;
    return 0;
}
