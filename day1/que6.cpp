#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double f;
    cin >> f;
    
    double cel = (f - 32.0) * 5.0 / 9.0;
    cout << "Equivalent temperature in Celsius : " << fixed << setprecision(2)
    << cel << endl;
    
    return 0;
}
