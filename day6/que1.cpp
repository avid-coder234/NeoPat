You are organizing a gift distribution event, and you want to ensure that each participant receives a unique combination of gifts. You have a set of x different types of gifts available, numbered from 1 to x. Each participant should receive a total of n gifts. However, you want to distribute the gifts in such a way that each participant receives a combination of gifts that can be expressed as a sum of nth powers of unique natural numbers.



Write a program that takes the total number of available gift types x and the power n as input. The program should calculate and return the number of unique combinations of gifts that can be distributed following the given criteria using recursion.



Example 1



Input:

10

2



Output: 

1



Explanation:

x = 10

n = 2

10 = 12 + 32, hence we have only 1 possibility.



Example 2



Input:

100

2



Output: 

3



Explanation:

x = 100

n = 2

100 = 102 OR 62 + 82 OR 12 + 32 + 42 + 52 + 72, hence total 3 possibilities.



Function Specifications:

int getAllWays(int remainingSum, int power, int base);



Note: This is a sample question asked in a HCL interview.

Input format :
The first line of input consists of the value of integer x.

The second line of input consists of the value of integer n.

Output format :
The output prints the number of ways to express x as a sum of nth powers of unique natural numbers.

Code constraints :
0 < x <=70000

0 < n <=5

Sample test cases :
Input 1 :
10
2
Output 1 :
1
Input 2 :
100
2
Output 2 :
3
Whitelist
Set 1:
getAllWays


#include<bits/stdc++.h>
#include<vector>
using namespace std;

int getAllWays(){
    return 0;
}

int find(vector<vector<int>>&dp , int n , int i , int j){
    if(j == 0) return 1;
    if(i == 0) return 0;
    
    if(dp[i][j] != -1) return dp[i][j];
    
    int take = 0;
    
    if(pow(i , n) <= j){
        take = find(dp , n , i - 1 , j - pow(i , n));
    }
    
    int nottake = find(dp , n , i - 1 , j);
    
    return dp[i][j] = take + nottake;
}
int main(){
    int x , n ;
    cin >> x >> n;
    
    vector<vector<int>> dp(x + 1 , vector<int>(x + 1 , -1));
    cout << find(dp , n , x , x);
    return 0;
}