include <fstream>
using namespace std;
ifstream f("covor.in");
ofstream g("covor.out");
int n, k, x, r, c, mn, mx, i;
bool ok;
int main() {
    f >> n >> k;
    f >> c;
    x = 1; r = 0;
    if(c == 1) {
        while(r <= n) {
            r = x * (2*x + 1) + 1;
            x++;
        }

        g << x-2;
    } else {
        while(r <= n) {
            r = x * (2*x + 1) + 1;
            x++;
        }
        r = x - 2;
        if(1 <= k && k <= 3) g << 1;
        mx = 3;
        ok = false;
        for(i = 2; i <= r; i++) {
            mn = mx + 1;                                        //la dus
            mx = mn + 2*i - 1;
            if(mn <= k && k <= mx) { g << i; ok = true; break; }
        }
        if(!ok)
            for(i = r; i >= 1; i--) {
                mn = mx + 1;                                    //la intors
                mx = mn + 2*(i-1);
                if(mn <= k && k <= mx) { g << i; ok = true; break; }
            }
        if(!ok) g << 0;
    }
    f.close(); g.close();
    return 0;
}include <fstream>
using namespace std;
ifstream f("covor.in");
ofstream g("covor.out");
int n, k, x, r, c, mn, mx, i;
bool ok;
int main() {
    f >> n >> k;
    f >> c;
    x = 1; r = 0;
    if(c == 1) {
        while(r <= n) {
            r = x * (2*x + 1) + 1;
            x++;
        }

        g << x-2;
    } else {
        while(r <= n) {
            r = x * (2*x + 1) + 1;
            x++;
        }
        r = x - 2;
        if(1 <= k && k <= 3) g << 1;
        mx = 3;
        ok = false;
        for(i = 2; i <= r; i++) {
            mn = mx + 1;                                        //la dus
            mx = mn + 2*i - 1;
            if(mn <= k && k <= mx) { g << i; ok = true; break; }
        }
        if(!ok)
            for(i = r; i >= 1; i--) {
                mn = mx + 1;                                    //la intors
                mx = mn + 2*(i-1);
                if(mn <= k && k <= mx) { g << i; ok = true; break; }
            }
        if(!ok) g << 0;
    }
    f.close(); g.close();
    return 0;
}
