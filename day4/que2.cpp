Problem Statement



Arvind is an interior designer working on a new project that involves creating eye-catching wall patterns for a modern art gallery. He wants to design a simple yet elegant square border pattern that can be used as a template for various decorations.



To do this, Arvind decides to write a program that prints a hollow square pattern with stars (*) along the borders and spaces in the middle. The size of the square is determined by a given input N, which represents both the number of rows and columns.



Can you help Arvind by writing this program to generate the desired square border pattern?





Example



Input

4



Output



Input format :
The input consists of an integer N, representing the size of the square.

Output format :
The output prints a square pattern of size N x N where the borders are filled with stars (*) and the inside is hollow (filled with spaces).



Refer to the sample output for the formatting specifications.

Code constraints :
3 ≤ N ≤ 20

Sample test cases :
Input 1 :
4
Output 1 :
****
*  *
*  *
****
Input 2 :
9
Output 2 :
*********
*       *
*       *
*       *
*       *
*       *
*       *
*       *
*********
Fill your code here

CODE :
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}