#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define e 1e-9
int main(){

    int array[8]={-1,2,4,-3,5,2,-5,2};
    int sum,i,j,best=0,k,n=8;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
        sum+=array[j];
        best=max(best,sum);
        }
        }
    cout<<best;
    return 0;
}