#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"ente rows and coloumns"<<endl;
    cin>>r>>c;
    int a[100][100],t[100][100];
    cout<<"enter the matrix elements"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j =0;j<c;j++){
            t[j][i]=a[i][j];
        }
    }
     for(int i=0;i<c;i++){
        for(int j =0;j<r;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
