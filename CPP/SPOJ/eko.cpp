#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int lld;

//vector<int>wood;

int binSearch(vector<int>wood, lld key){
    
    lld low = wood[0], high = wood[wood.size()-1], mid, current;
    
    while(low < high){
        mid = low+(high-low+1)/2, current = 0;
        for(int c = 0; c < wood.size(); c++){
            if(wood[c] > mid) current += (wood[c] - mid);
        }
        if(current < key) high = mid - 1;
        else low = mid;

    }
    return low;

}

int main(){
    
    lld  qty, required, neew;
    
    cin >> qty >> required;

    vector<int>wood(qty);

    for(lld c = 0; c < qty; c++){
        cin >> neew;
        wood.push_back(neew);
    }

    sort(wood.begin(),wood.end());
    lld ans = binSearch(wood, required);
    cout << ans << endl;

    return 0;
}
