#include <iostream>
using namespace std;
int main(){
    int num = 5;
    for(int i = 0; i < num; i++){
        for(int j = i+1; j > 0; j--){ 
            cout<<j;
        }
        cout<<endl;
    }
}
