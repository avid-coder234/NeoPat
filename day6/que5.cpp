Gayu is preparing for a mathematics competition and is studying the concept of Euler's Totient Function. To help her, you need to write a program that calculates Euler's Totient Function for a given set of positive integers.



Write a program to calculate the Euler's Totient Function for a given set of positive integers.



Function specification: 

int gcd (int a, int b) 

int phi(unsigned int n)

Input format :
The first line consists of an integer t, representing the number of test cases.

The second line consists of m space-separated positive integers for which Euler's Totient Function needs to be calculated.

Output format :
For each of the t test cases, the output displays an integer which is the value of Euler's Totient Function, separated by a space.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

2 ≤ s ≤ 106

Sample test cases :
Input 1 :
2
15
16
Output 1 :
8
8
Input 2 :
2
9
8
Output 2 :
6
4


#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    while(b){
        int t = a % b;
        a = b;
        b = t;
    }
    
    return a;
}

unsigned int phi(unsigned int n){
    unsigned int result = n;
    
    for(unsigned int p = 2 ; p * p <= n ; p++){
        if(n % p == 0){
            while(n % p == 0){
                n = n / p;
            }
            
            result -= result / p;
        }
    }
    
    if(n > 1){
        result -= result / n;
    }
    
    return result;
}

int main(){
    int t;
    cin >> t;
    
    vector<unsigned int> nums(t);
    
    for(int i = 0 ; i < t ; i++){
        cin >> nums[i];
    }
    
    for(int i = 0 ; i < t ; i++){
        cout << phi(nums[i]) << endl;
    }
}