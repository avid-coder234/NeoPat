#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>& arr , int n , int k){
    k = k % n;
    
    if(n == 0 || k == 0){
        return;
    }
    
    reverse(arr.begin() , arr.begin() + k);
    reverse(arr.begin() + k , arr.end());
    reverse(arr.begin() , arr.end());
}

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    int k;
    cin >> k;
    rotate(arr , n , k);
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << (i == n - 1 ? "" : " ");
    }
    
    cout << endl;
    
    return 0;
}
