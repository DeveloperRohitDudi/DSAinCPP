// product of array except self
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {2,3,6,5,3,7};
    int n = nums.size();
    vector<int> ans(n,1);
    
    for(int i = 1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }
    int suffix = 1;
    for(int i = n-2; i>=0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }
    
    cout<<"the answer is: "<<endl;
    for(int value : ans){
        cout<<value<<", ";
    }
}