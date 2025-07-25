#include<iostream>
using namespace std;

int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    
    if(num1 == 0 && num2 == 0){
        cout << "Origin" << endl;
    }
    else if(num1 > 0 && num2 > 0){
        cout << "Ist Quadrant" << endl;
    }
    else if(num1 < 0 && num2 > 0){
        cout << "IInd Quadrant" << endl;
    }
    else if(num1 < 0 && num2 < 0){
        cout << "IIIrd Quadrant" << endl;
    }
    else if(num1 > 0 && num2 < 0){
        cout << "IVth Quadrant" << endl;
    }
}
