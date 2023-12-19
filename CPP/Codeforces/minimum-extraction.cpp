#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int tests, size;
    scanf("%d", &tests);
    for(int i = 0; i < tests; i++){
            
        scanf("%d", &size);
        vector<int>arr(size);
        for(int c = 0; c < size; c++) scanf("%d", &arr[c]);

        sort(arr.begin(), arr.end()); 

        int sub = 0, minex = arr[0];

        for(int c = 0; c < size-1; c++){
            sub += arr[c];  arr[c+1] -= sub;
            minex = max(minex, arr[c+1]);    
            }

        printf("%d\n", minex);

    }

    return 0;
}
