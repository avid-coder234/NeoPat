Single File Programming Question
Problem Statement



Misha wants to check and print whether the given number N is a neon number or not. Write a program that uses a function and helps her to complete this task.



A neon number is a number where the sum of digits of the square of the number is equal to the number. 



Function Prototype: int neon(int)



Example 1



Input:

9

Output:

9 is a neon number

Explanation:

92 = 81, and the sum of its digits (8+1) is equal to the original number (9).



Example 2



Input:

12

Output:

12 is not a neon number

Explanation:

(12)2=144, and the sum of its digits (1+4+4) is not equal to the original number (12).

Input format :
The input consists of an integer N, representing the number to be checked.

Output format :
If N is a neon number, print "N is a neon number"

Otherwise, print "N is not a neon number"



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

0 ≤ N ≤ 100

Sample test cases :
Input 1 :
9
Output 1 :
9 is a neon number
Input 2 :
12
Output 2 :
12 is not a neon number
Whitelist
Set 1:
int neon


code :

#include<iostream>
using namespace std;

int neon(int n){
    long long sqr = n * n;
    
    int check = 0;
    
    while(sqr > 0){
        int r = sqr % 10;
        check = check + r;
        sqr = sqr / 10;
    }
    
    return check;
}
int main(){
    
    int n;
    cin >> n;
    int check = neon(n);
    
    if(n == check){
        cout << n << " is a neon number" << endl;
    }
    else{
        cout << n << " is not a neon number" << endl;
    }
}
