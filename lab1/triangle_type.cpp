#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter the values";
    scanf("%d %d %d",&s1,&s2,&s3);
    if((s1+s2>s3||s2+s3>s1||s1+s3>s2)&&(s1!=0&&s2!=0&&s3!=0)){
        if(s1==s2&&s2==s3){
            cout<<"it is an equilateral triangle";

        }
        else if(s1==s2||s2==s3||s3==s1){
            cout<<"it is an isosceles triangle";
        }
        else{
            cout<<"it is a scalent triangle";
        }
    }
    else{
        cout<<"the given triangle is not valid";
    }
    return 0;

}

