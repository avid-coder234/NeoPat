Problem Statement



Rose wants to write a program to generate a half-diamond pattern based on user input. The program should take an integer N as input and print a pattern forming a half-diamond. 



Help her with the program using looping statements.



Example

Input: 

5



Output:



Input format :
The input consists of an integer N representing the the number of stars in the middle row of the flower arrangement pattern.

Output format :
The output displays a symmetrical pattern of stars, where the number of stars increases from 1 to N in the first part, and then decreases from N−1 back to 1 in the second part.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

2 ≤ N ≤ 20

Sample test cases :
Input 1 :
5
Output 1 :
*
**
***
****
*****
****
***
**
*
Input 2 :
6
Output 2 :
*
**
***
****
*****
******
*****
****
***
**
*

#include<iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    
    for(int i = n - 1 ; i >= 0 ; i--){
        for(int j = 0 ; j < i ; j++){
            cout << "*";
            
        }
        cout << endl;
    }
}
