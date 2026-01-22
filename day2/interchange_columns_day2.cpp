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
        int temp=a[i][0];
        a[i][0]=a[i][c-1];
        a[i][c-1]=temp;
    }
    cout<<"swapped matrix"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;

}

