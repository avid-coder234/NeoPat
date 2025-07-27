Question No: 6
Single File Programming Question
Problem Statement



Stephen wants to create a double pyramid pattern using asterisks based on a specified height. Write a program that reads the height of the pyramid and prints two mirrored pyramids side by side, with spaces between them. The pyramids should be aligned and centered correctly.



Example



Input: 

7 // height



Output:



Input format :
The input consists of an integer N, representing the height.

Output format :
The output displays the required pattern.



Refer to the sample input and output for formatting specifications.

Code constraints :
2 ≤ N ≤ 20

Sample test cases :
Input 1 :
7
Output 1 :
      *             * 
     * *           * * 
    * * *         * * * 
   * * * *       * * * * 
  * * * * *     * * * * * 
 * * * * * *   * * * * * * 
* * * * * * * * * * * * * * 
Input 2 :
4
Output 2 :
   *       * 
  * *     * * 
 * * *   * * * 
* * * * * * * * 


CODE :
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < n - i ; j++){
            cout << " ";
        }
        
        for(int j = 0 ; j < i ; j++){
            cout << "* ";
        }
        
        for(int j = 0 ; j < n - i + 1 ; j++){
            cout << " ";
        }
        
        for(int j = 0 ; j < i ; j++){
            cout << "* ";
        }
        
        cout << endl;
    }
    
    return 0;
}
