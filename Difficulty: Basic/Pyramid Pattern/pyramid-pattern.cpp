#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n;i>0;i--){
        for(int j=i;j>1;j--){
            cout<<" ";
        }
        for(int k=i;k<=n;k++){
            cout<<"*";
        }
        for(int k=i;k<n;k++){
            cout<<"*";
        }

        cout<<endl;
    }
    

    return 0;
}