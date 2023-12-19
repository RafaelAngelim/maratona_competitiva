#include <iostream>
#include <vector>
using namespace std;

int main(){
    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++){
        int n, u;
        cin >> n >> u;

        vector<int>rep(n+1), res(n+1);
        for(int c = 0; c < u; c++){
            int l, r, val;  cin >> l >> r >> val;

            rep[l] += val;
            rep[r+1] -= val;
        }
        int sum = 0;
        for(int c = 0; c < n; c++){
            sum += rep[c];
            res[c] = sum;
        }
        int q; cin >> q;
        for(int c = 0; c < q; c++){
            int ind;    cin >> ind;
            cout << res[ind] << endl;
        }
    }
}
