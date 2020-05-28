#include<bits/stdc++.h>
using namespace std;

/*选择排序会直接交换两个不相邻的元素，所以属于不稳定的排序算法*/
int selectionSort(int A[],int n){
    int minj,cnt=0;
    for(int i=0;i<n;i++){
         minj=i;
        for(int j=i;j<n;j++){
            if(A[j]<A[minj])    minj=j;
        }
        if(A[i]!=A[minj])   cnt++;
        swap(A[i],A[minj]);
    }
    //返回值为发生交换的次数
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sw=selectionSort(A,n);
    for(int i=0;i<n;i++)    printf("%d ",A[i]);
    printf("\n%d",sw);
    return 0;
}
