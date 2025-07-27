Problem Statement



Oliver is a software developer working on an application to optimize data processing tasks. As part of his project, he needs to manipulate arrays efficiently to improve performance.



Given the size of an array and its elements, representing data points collected from various sensors. The program increments the value of each element by its index number. Write a program to assist Oliver in this task. 

Input format :
The first line consists of an integer N, representing the number of sensors.

The second line consists of N space-separated integers, representing the data points collected from various sensors.

Output format :
The output prints N space-separated integers representing the updated data points after incrementation.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 15

1 ≤ Data Points ≤ 100

Sample test cases :
Input 1 :
6
65 6 24 12 46 18
Output 1 :
65 7 26 15 50 23 
Input 2 :
5
52 57 94 58 91
Output 2 :
52 58 96 61 95 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        cout << arr[i] + i << " ";
    }
    
    return 0;
}