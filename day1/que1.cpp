#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n1 , n2 , n3 , n4;
    cin >> n1 >> n2 >> n3 >> n4;
    
    bool cond1 = false;
    bool cond2 = false;
    cond1 = (n1 + n2 == 10) ? true : false;
    cond2 = (n3 - n4 == 3) ? true : false;
    
    if(cond1 == true && cond2 == true){
        cout << n1 * n2 * n3 * n4;
    }
    else{
        cout << "Not satisfied" << endl;
    }
    
    return 0;
}