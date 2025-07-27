Joyce enjoys learning puzzles from her childhood. She is given a matrix and asked to find the sum of all elements in the matrix.



Can you assist Joyce with a program?

Input format :
The first line of input consists of two space-separated integers r and c, representing the number of rows and columns, respectively.

The next r lines consist of c space-separated integers, representing the elements of the matrix.

Output format :
The output prints a single integer, representing the sum of all elements in the matrix.



Refer to the sample output for formatting specifications.

Code constraints :
2 ≤ r, c ≤ 5

1 ≤ Matrix Element ≤ 980

Sample test cases :
Input 1 :
2 3
27 35 59
73 86 98
Output 1 :
378
Input 2 :
3 4
1 2 3 4
5 6 7 8
9 3 2 4
Output 2 :
54

#include<iostream>

using namespace std;

int main(){
    int r,c;
    cin >> r >> c;
    
    int mat[r][c];
    int sum = 0;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin >> mat[i][j];
            sum += mat[i][j];
        }
    }
    
    cout << sum << endl;
    
    
    
}