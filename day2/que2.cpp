#include<iostream>
#include<string>
#include<iomanip>
using namespace std;


int main(){
    char code;
    cin >> code;
    double value;
    cin >> value; // TotalAmount
    
    double gst = -1.0;
    
    switch(code){
        case 'A' :
            gst = 0.00;
            break;
        case 'B' :
            gst = 0.02;
            break;
        case 'C' :
            gst = 0.05;
            break;
        case 'D' :
            gst = 0.12;
            break;
        case 'E' :
            gst = 0.18;
            break;
        case 'F' :
            gst = 0.28;
            break;
        default:
            break;
            
    }
    
    if(gst != -1.0){
        double gstamnt = value * gst;
        double final = value - gstamnt;
        
        cout << fixed << setprecision(2) << final << endl;
    }
    else{
        cout << "Invalid choice" << endl;
    }
    
    return 0;
}
