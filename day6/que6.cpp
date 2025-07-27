Problem Statement



Rekha is studying programming and wants to write a program to calculate the factorial of a given number using recursion with a method named multiplyNumbers. 



Can you help her with the logic?

Input format :
The input consists of an integer n, representing the number for calculating the factorial.

Output format :
The output prints the factorial of the given number.



Refer to the sample output for formatting specifications.

Code constraints :
0 ≤ n ≤ 15

Sample test cases :
Input 1 :
5
Output 1 :
120
Input 2 :
1
Output 2 :
1
Input 3 :
0
Output 3 :
1
Whitelist
Set 1:
multiplyNumbers


#include<bits/stdc++.h>

using namespace std;

int multiplyNumbers(int n){
    if(n <= 1){
        return 1;
    }
    
    return n * multiplyNumbers(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << multiplyNumbers(n);
}
