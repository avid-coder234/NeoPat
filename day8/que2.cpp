Sophia is working on a project that involves processing data from a matrix. She needs to calculate the sum of the elements along the main diagonal (left diagonal) of the matrix.



Sophia is looking for your help in designing and implementing a program that can efficiently perform this task.

Input format :
The first line of input consists of two space-separated integers, N and M, denoting the number of rows and columns in the matrix, respectively.

The next N lines contain M space-separated integers, representing the elements of the matrix.

Output format :
The output prints an integer, representing the sum of the elements on the main diagonal (left diagonal).



Refer to the sample output for the formatting specifications.

Code constraints :
N=M

1 ≤ N, M ≤ 10

-10 ≤ elements of N, M ≤ 10

Sample test cases :
Input 1 :
3 3
1 0 0
0 1 0
0 0 1
Output 1 :
3
Input 2 :
2 2
5 0
0 7
Output 2 :
12

#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    int mat[n][m];
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> mat[i][j];
        }
    }
    
    int sum = 0;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(i == j){
                sum += mat[i][j];
            }
        }
    }
    
    cout << sum << endl;
}