#include <iostream>
using namespace std;

int main() {
    int n,i=0,j=1,k=0,l;
    cin>>n;
    if(n<=0){
        return 0;
    }else {
        cout << 1 << endl;
        while (k < n) {
            k = i + j;
            if (k <= n) {
                cout << k << endl;
            }
            i = j;
            j = k;
        }
    }
    return 0;
}
