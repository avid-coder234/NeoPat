Aayush, a data analyst, is working with a series of arithmetic sequences for his research project. He is given an arithmetic sequence where one number is missing, and his task is to identify that missing number. The sequence has n−1 elements, but the original sequence should have n elements. The function should be efficient enough to handle large sequences.



Function Prototype:

int findMissingNumber(int arr[], int n);

Input format :
The first line contains an integer n, representing the size of the full sequence (including the missing number).

The second line contains n−1 integers, representing the arithmetic sequence with one number missing.

Output format :
The output prints the missing number in the arithmetic sequence.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

2≤n≤100

Sample test cases :
Input 1 :
5
2 4 6 10
Output 1 :
8
Input 2 :
5
1 2 3 5
Output 2 :
4


// You are using GCC
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    int difference = arr[1] - arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] - arr[i-1] != difference){
            cout << arr[i-1] + difference;
            break;
        }
    }
    return 0;
}