#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> height = {1,8,2,7,6,4,6,3,2};
    int maxWater = 0;
    for(int i = 0; i<height.size(); i++){
        for(int j = i+1; j<height.size(); j++){
            int w = j-i;
            int ht = min(height[i], height[j]);
            maxWater = max(maxWater, w * ht);
        }
    }
    cout<<"this container can store the maximum water: "<<maxWater<<"m^2"<<endl;
}