#include<iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    int income;
    cin >> income;
    int score;
    cin >> score;
    
    if(age < 21 || age > 60){
        cout << "NOT APPLICABLE" << endl;
        return 0;
    }
    if(age > 21 && age < 60 && income >= 300000){
        if(score < 500){
            cout << "NOT APPLICABLE" << endl;
        }
        else if(score >= 550 && score <= 649){
            cout << "POOR - NOT ELIGIBLE" << endl;
        }
        else if(score >= 650 && score <= 699){
            cout << "FAIR - ELIGIBLE" << endl;
        }
        else if(score >= 700 && score <= 749){
            cout << "GOOD - ELIGIBLE" << endl;
        }
        else if(score >= 750 && score <= 850){
            cout << "EXCELLENT - ELIGIBLE" << endl;
        }
    }
    else{
        cout << "NOT ELIGIBLE" << endl;
    }
    
}
