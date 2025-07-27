Problem Statement



Rani, a receptionist at Hotel SMS Grand rearranges the flowers in the reception daily. Sidharth, manager of the same Hotel writes a program to display the flower arrangement on the reception TV screen. Today, Rani arranged the flowers as shown in the sample output. Help Sidharth to write a program to display the pattern.



Example



Input:

5



Output:

* 
* * 
* * * 
* * * * 
* * * * *
Input format :
The input consists of an integer as n.

Output format :
The output prints the required pattern.



Refer to the sample output for the formatting specifications.

Code constraints :
In the given scenario, the test cases will fall under the following constraints:

1 ≤ n ≤ 15

Sample test cases :
Input 1 :
5
Output 1 :
* 
* * 
* * * 
* * * * 
* * * * * 
Input 2 :
15
Output 2 :
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * * * 
* * * * * * * * 
* * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * * 
* * * * * * * * * * * * 
* * * * * * * * * * * * * 
* * * * * * * * * * * * * * 
* * * * * * * * * * * * * * * 
Input 3 :
1
Output 3 :
* 

#include<iostream>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << " * ";
        }
        
        cout << endl;
    }
}
