Problem Statement



Eva is working on a data pre processing task where she needs to rearrange elements in an array such that all negative numbers come before all the positive numbers. The order of negative numbers and the order of positive numbers should remain the same as in the original array. Eva must write a program to accomplish this rearrangement.

Input format :
The first line contains an integer n, representing the number of elements in the array.

The second line contains n space-separated integers, representing the elements of the array.

Output format :
A single line containing the n integers of the array after rearranging, where all negative numbers precede all positive numbers, space-separated.



Refer to the sample output for formatting specifications.

Code constraints :
2 ≤ N ≤ 30

Sample test cases :
Input 1 :
13
12 -23 34 22 -43 -11 -90 8 -87 78 -98 11 13
Output 1 :
-98 -23 -87 -90 -43 -11 22 8 34 78 12 11 13 
Input 2 :
6
1-3 -4 -5 2 23
Output 2 :
-5 -3 -4 1 2 23 


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> arr(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    int i = 0;
    int j = n - 1;
    
    while(i < j){
        if(arr[i] < 0){
            i++;
        }
        else if(arr[j] >= 0){
            j--;
        }
        else{
            swap(arr[i] , arr[j]);
        }
    }
    
    for(auto it : arr){
        cout << it << " ";
    }
}