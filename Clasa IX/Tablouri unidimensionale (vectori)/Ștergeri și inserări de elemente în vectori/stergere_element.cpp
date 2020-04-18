#include <iostream>
using namespace std;
int n, v[1500], p, i, aux;
int main() {
    cin >> n >> p;
    for(i = 0; i < n; i++)
        cin >> v[i];
    for(i = p-1; i < n-1; i++)
        v[i] = v[i+1];
    n--;
    for(i = 0; i < n; i++)
        cout << v[i] <<' ';
    return 0;
}
