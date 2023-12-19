#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;

ull fat(ull num){
    if(num == 1) return 1;
    return num * fat(num-1);
}

int main(){
    ull n1, n2;
    cin >> n1 >> n2;

    int mini = min(n1,n2);
    cout << fat(mini) << endl;
}

