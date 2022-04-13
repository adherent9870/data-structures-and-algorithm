#include<iostream>
using namespace std;
int main(){
  //  int i=1,current=2,j=0,k=0;
    int n=7;
    int nums[]={-1};
   // cin>>n;
   /* int *nums=new int[n];
    for(int s=0;s<n;s++){
        cin>>nums[s];
    }
    

    while(current!=n){
        if(nums[i]-nums[i-1]==nums[current]-nums[current-1]);{
            j=j+1;
        }
        if(k<j){
            k=j;
        }
        if(nums[i]-nums[i-1]!=nums[current]-nums[current-1]){
            j=0;
        }
        i++;
        current++;s
    }
    cout<<(k+1)<<endl;
    */
   int curr=0;
   int max_sum=-100;
    for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(curr+nums[j]<0){break;}
                    curr=curr+nums[j];
            }
            max_sum=max(max_sum,curr);
            curr=0;
        }
        cout<< max_sum;
}