#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<string> student;
    
    for(int i = 0 ; i < n ; i++){
        string str;
        cin >> str;
        student.push_back(str);
    }
    
    string type;
    cin >> type;
    int m = type.size();
    
    for(int i = n - 1 ; i >= 0 ; i--){
        if(!(type == student[i].substr(0,m))){
            cout << "Roll: " << student[i] << endl; 
        }
    }
    
    return 0;
}
