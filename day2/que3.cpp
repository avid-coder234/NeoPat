#include<iostream>

using namespace std;

int main(){
    int temp;
    cin >> temp;
    
    if(temp < 0){
        cout << "Freezing weather" << endl;
    }
    else if(temp >= 0 && temp <= 9){
        cout << "Very cold weather" << endl;
    }
    else if(temp >= 10 && temp <= 19){
        cout << "Cold weather" << endl;
    }
    else if(temp >= 20 && temp <= 29){
        cout << "Normal in temperature" << endl;
    }
    else if(temp >= 30 && temp <= 39){
        cout << "Its hot" << endl;
    }
    else{
        cout << "Its very hot" << endl;
    }
    
    
}
