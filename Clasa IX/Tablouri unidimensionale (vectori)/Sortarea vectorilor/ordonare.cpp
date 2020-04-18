#include <iostream>
using namespace std;
int n, v[1000], i, x, j, aux;
bool f;
int main() {
    cin >> n;
    for(i = 0; i < n; i++) cin >> v[i];
    while(f == false) {                             //later edit: foloseste bubble sort, destul de ineficient
        f = true;
        for(i = 0; i < n-1; i++) {
            if(v[i] > v[i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                f = false;
            }
        }
    }
    for(i = 0; i < n; i++) cout << v[i] << ' ';
    return 0;
}
