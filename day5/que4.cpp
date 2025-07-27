Problem Statement



Anna, a busy professional, relies on her phone to manage her appointments and reminders. One day, she notices that her calendar app shows her past appointments in a way that seems unusual. Instead of listing her appointments in the order they were set, they appear in the reverse order, making it difficult for her to review her schedule.



To simplify her scheduling process, Anna decides to create a tool that can help her organize her appointments correctly. She needs a function that can assist her by processing her past appointment records, ensuring that they are displayed in a more intuitive order.



Function Specifications: int processAppointmentCode(int );

Input format :
The input consists of an integer n.

Output format :
The output prints the reversed number that represents the secret code (Initial zeroes and trailing zeroes will be omitted).



Refer to the sample output for the formatting specifications.

Code constraints :
n > 0

Sample test cases :
Input 1 :
123
Output 1 :
321
Input 2 :
86427
Output 2 :
72468
Whitelist
Set 1:
processAppointmentCode


#include<iostream>
#include<vector>

using namespace std;

int processAppointmentCode(int n){
    int num = 0;
    while(n > 0){
        int r = n % 10;
        num = num * 10 + r;
        n = n / 10;
    }
    
    return num;
}
int main(){
    int n;
    cin >> n;
    
    
    cout << processAppointmentCode(n);
}
