In a vibrant town, the villagers have a unique tradition to celebrate their birthdays. Instead of celebrating with age, they celebrate with the concept of a digital root.



You are tasked with writing a program to help the villagers determine their digital root. The program should accept a positive integer representing a villager's age and output their digital root.



Digital Root: The single-digit value obtained by recursively summing the digits of the number until a single-digit result is obtained. For example, if the given number is 1234, the sum of 1+2+3+4 = 10. So the digital root will be 1+0 = 1.

Input format :
The input consists of an integer N, representing the age of a villager.

Output format :
The output prints an integer, which is the sum of digits for N until a single digit is obtained.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 105

Sample test cases :
Input 1 :
5678
Output 1 :
8
Input 2 :
1234
Output 2 :
1

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n >= 10){
        int sum = 0;
        int temp = n;
        
        while(temp > 0){
            sum += temp % 10;
            temp = temp / 10;
        }
        
        n = sum;
    }
    
    cout << n;
    return 0;
}