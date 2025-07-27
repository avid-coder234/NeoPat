Ramu is learning about array rotations and wants to practice rotating an array to the right. He seeks your help in writing a Java program that takes an array of integers as input and rotates it to the right.

 

You task is to help Ramu to right rotation involves shifting each element of the array to the right, and the last element becomes the first.

Input format :
The first line contains an integer, N, representing the number of elements in the array.

The second line contains N space-separated integers, representing the elements of the array.

Output format :
The output displays "Rotated Array: "{elements} after rotating them by one position to the right.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the given test cases will fall under the following constraints:

1 ≤ n ≤ 25.

1 ≤ elements ≤ 100.

Sample test cases :
Input 1 :
8
1 2 1 333 4 33 3 7
Output 1 :
Rotated Array: 7 1 2 1 333 4 33 3 
Input 2 :
9
5 6 5 4 5 4 6 8 52
Output 2 :
Rotated Array: 52 5 6 5 4 5 4 6 8 

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 1 ; i < n ; i++){
        cin >> arr[i];
    }
    
    cin >> arr[0];
    
    cout << "Rotated Array: ";
    
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}

