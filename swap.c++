#include<iostream>
using namespace std;
void swap(int *x, int *u){
    int temp =*x;
    *x = *u;
    *u=temp;


}
int main(){
    int x,u;
    cin>>x>>u;

    int *p1=&x , *p2=&u;

    swap(p1,p2);
    cout<<x<<" "<<u<<endl;
    return 0;
}