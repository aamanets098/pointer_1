#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;

    int *prtx=&x;
    int *ptry=&y;

    int product = *prtx * *ptry;
    //int *result_pro = &product;
     
    cout<<product<<endl;
   
    return 0;
}