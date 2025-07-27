Amelia is a data analyst who needs to analyze survey responses where participants have provided ratings ranging from 1 to 25. Her task is to count how many times each rating occurs in the dataset. 



Write a program to help Amelia generate the frequency distribution of the given ratings.

Input format :
The first line of input consists of an integer n, representing the number of survey responses.

The next n inputs are integers representing the survey ratings.

Output format :
The output prints the frequency of each unique rating in the format <rating> <frequency> on separate lines, in the order they first appear in the input.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ n ≤ 10

1 ≤ rating ≤ 25

Sample test cases :
Input 1 :
8
10 20 20 10 10 20 5 20
Output 1 :
10 3
20 4
5 1

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    map<int,int> freq;
    
    vector<int> order;
    
    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        
        if(freq.find(x) == freq.end()){
            order.push_back(x);
        }
        freq[x]++;
    }
    
    for(int &m : order){
        cout << m << " " << freq[m] << endl;
    }
    
    return 0;
}