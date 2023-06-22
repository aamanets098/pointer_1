#include<iostream>
using namespace std;
int main(){
int x,y;
cin>>x>>y;

int *ptrx=&x;
int *ptry=&y;

int result;
int *result_prt=&result;

*result_prt=*ptrx+*ptry;

cout<<result<<endl;
return 0;
}