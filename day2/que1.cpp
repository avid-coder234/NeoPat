#include<iostream>

using namespace std;

int main(){
    
    char cond;
    cin >> cond;
    char location;
    cin >> location;
    char sex;
    cin >> sex;
    int age;
    cin >> age;
    
    
    if(age >= 25 && age <= 35) {
        if(cond == 'e' && location == 'c' && sex == 'm'){
            cout << "The Premium Is Rs.4 Per Thousand And His Policy Cannot Exceed Rs.2 Lakhs" << endl;
        }
        else if(cond == 'e' && location == 'c' && sex == 'f'){
            cout << "The Premium Is Rs.3 Per Thousand And Her Policy Cannot Exceed Rs.1 Lakhs" << endl;
        }
        else if(cond == 'p' && location == 'v' && sex == 'm'){
            cout << "The Premium Is Rs.6 Per Thousand And Cannot Exceed Rs. 10,000" << endl;
        }
        else{
            cout << "Not Insured" << endl;
        }
    }
    else {
        cout << "Not Insured" << endl;   
    }
    
}
