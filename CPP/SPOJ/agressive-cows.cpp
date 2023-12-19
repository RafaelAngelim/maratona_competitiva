#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possible(vector<int>stalls, int dist, int cows){
        int countCows = 1, last = stalls[0];
        for(int i = 1; i < stalls.size(); i++){
                if(stalls[i] - last >= dist){
                        countCows++;
                        last = stalls[i];
                }
                if(countCows >= cows) return true;
        }
        return false;
}

int binSearch(vector<int>stalls, int key){
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int low = 1, high = stalls[n-1] - stalls[0];
        while(low <= high){
                int mid = (high + low)/2;
                if(possible(stalls, mid, key) == true){
                        low = mid + 1;
                }
                else high = mid - 1;
        }
        return high;
}

int main(){
        int t;
        cin >> t;
        for(int i = 0; i < t; i++){
                int N, C;
                cin >> N >> C;
                vector<int>stalls(N);
                for(int j = 0; j < N; j++){ cin >> stalls[j];}

        int ans = binSearch(stalls, C);
        cout << ans << endl;
        }
        return 0;
}
