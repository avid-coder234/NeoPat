Problem Statement

﻿

Amit, a software engineer, is working on a project that analyzes the prime factorization of numbers. He is tasked with writing a function to calculate the product of all distinct prime factors of a given number. This analysis helps in understanding the structure of numbers, which is valuable for optimizing algorithms related to encryption and data compression.



Function Prototype:

int productOfPrimeFactors(int n);

Input format :
The input contains a single integer n, representing the number for which the product of distinct prime factors needs to be calculated.

Output format :
The output prints the product of all distinct prime factors of n.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following specifications:

1 ≤ n ≤ 100

Sample test cases :
Input 1 :
28
Output 1 :
14
Input 2 :
9
Output 2 :
3


#include<iostream>
#include<set>
#include<numeric>
using namespace std;
int product(int n){
    set<int> st;
    
    if(n % 2 == 0){
        st.insert(2);
        while(n % 2 == 0){
            n = n / 2;
        }
    }
    
    for(int i = 3 ; i <= n ; i = i + 2){
        if(n % i == 0){
            st.insert(i);
            while(n % i == 0){
                n = n / i;
            }
        }
    }
    
    long long product = 1;
    for(int num : st){
        product = product * num;
    }
    
    return static_cast<int>(product);
}


int main(){
    int n;
    cin >> n;
    
    cout << product(n) << endl;
    return 0;
}
