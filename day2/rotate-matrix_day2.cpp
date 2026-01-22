#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int a[100][100],r[100][100];
    cout<<"enter the matrix elements"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            r[j][n-1-i]=a[i][j];
        }
    }
    cout<<"rotated matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<r[i][j]<<" ";

        }
        cout<<endl;

    }
    return 0;
}
