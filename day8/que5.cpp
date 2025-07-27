Akar is working on a program that modifies a given matrix based on the presence of zeros in its rows and columns. 



He needs your help to write a program that takes an input matrix and modifies it as follows: if a cell in the matrix contains a zero, then the entire row and column of that cell should be set to zero.



Assist him by writing the program.

Input format :
The first line consists of two integers r and c, separated by a space, representing the number of rows and columns in the matrix.

The next r lines contain c space-separated integers, representing the elements of the matrix.

Output format :
If there are zeros in the matrix, display the modified matrix after replacing entire rows and columns with zeros if any element in the row or column is zero. If there are no zeros in the matrix, display the given matrix as it is.



Refer to the sample output for formatting specifications.

Code constraints :
In the given scenario, the test cases fall under the following constraints:

2 ≤ r, c ≤ 8

0 ≤ elements ≤ 9

Sample test cases :
Input 1 :
2 2
1 0
4 9
Output 1 :
0 0 
4 0 
Input 2 :
3 4
1 0 2 3
0 4 5 6
7 8 6 9
Output 2 :
0 0 0 0 
0 0 0 0 
0 0 6 9 
Input 3 :
8 8
1 0 2 3 7 8 6 2
0 4 5 6 4 2 3 2
7 8 0 9 2 3 4 7
2 3 8 0 7 8 4 6
1 2 3 4 5 6 7 8
2 5 8 7 4 1 3 4
2 4 6 9 7 8 1 3
0 1 4 7 2 3 7 3
Output 3 :
0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 
0 0 0 0 5 6 7 8 
0 0 0 0 4 1 3 4 
0 0 0 0 7 8 1 3 
0 0 0 0 0 0 0 0 
Input 4 :
2 3
2 5 7
1 2 4
Output 4 :
2 5 7 
1 2 4 

#include<iostream>

using namespace std;



int main(){
    
    int r , c;
    cin >> r >> c;
    
    int mat[r][c];
    int row[r];
    int col[c];
    
    
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin >> mat[i][j];
        }
    }
    
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            if(mat[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for(int i = 0 ; i < r ; i++){
        if(row[i] == 1){
            for(int j = 0 ; j < c ; j++){
                mat[i][j] = 0;
            }
        }
    }
    
    for(int j = 0 ; j < c ; j++){
        if(col[j] == 1){
            for(int i = 0 ; i < r ; i++){
                mat[i][j] = 0;
            }
        }
    }
    
    
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}