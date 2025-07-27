Problem Statement



Sameera, a receptionist at the Regency Hotel, rearranges the flowers in the reception daily. Arjun, the manager of the same hotel, writes a program to display the flower arrangement on the reception TV screen. 



Today, Sameera arranged the flowers as shown in the sample output. Help Arjun write a program to display the pattern.



Example

Input:

5



Output:

* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
Input format :
The input consists of an integer n representing the number of rows for the flower arrangement pattern.

Output format :
The output prints the symmetric pattern with N rows in the upper part, and the same N rows in the lower part, inverted. The pattern should consists of asterisk (*), with spaces in between.



Refer to the sample output for the formatting specifications.

Code constraints :
The given test case fall under the following specifications:

3 ≤ n ≤ 20

Sample test cases :
Input 1 :
5
Output 1 :
* * * * *  * * * * *
* * * *      * * * *
* * *          * * *
* *              * *
*                  *
*                  *
* *              * *
* * *          * * *
* * * *      * * * *
* * * * *  * * * * *
Input 2 :
3
Output 2 :
* * *  * * *
* *      * *
*          *
*          *
* *      * *
* * *  * * *


CODE :
#include<iostream>
using namespace std;

int main(){
    
    int rows;
    cin >> rows;
    
    for(int i = rows ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout << "*";
        }
        
        for(int j = 1 ; j <= 2 * (rows - i) ; j++){
            cout <<" ";
        }
        
        for(int j = 1 ; j <= i ; j++){
            cout <<"*";
        }
        
        cout << endl;
    }
    
    
    
    for(int i = 1 ; i <= rows ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << "*";
        }
        for(int j = 1 ; j <= 2 * (rows - i) ; j++){
            cout << " ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
}
