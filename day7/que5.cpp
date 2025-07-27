
In today's digital age, efficient data storage and transmission are crucial, especially when dealing with large volumes of text data.



You are tasked with implementing a text compression tool using Huffman coding. The tool should read a string input from the user, build a Huffman tree based on the frequency of characters in the input, generate corresponding Huffman codes sorted by their binary values.

Input format :
The first line of input consists of a single line of text input from the user. This text can contain any combination of lowercase letters (a-z), uppercase letters (A-Z), digits (0-9), punctuation marks, and spaces.

The input will be read using getline, allowing for spaces within the text.



Output format :
The output prints the generated Huffman codes sorted by their binary values for each character in the input.



﻿Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ n ≤ 10000 (length of the text),

1 ≤m ≤ 256 (number of unique characters),

1 ≤ frequency of characters≤1001

Sample test cases :
Input 1 :
aaaabbbcccc
Output 1 :
Huffman Codes (Sorted by Binary Representation):
a: 0
b: 10
c: 11
Input 2 :
hello hi
Output 2 :
Huffman Codes (Sorted by Binary Representation):
h: 00
i: 010
o: 011
l: 10
 : 110
e: 111


#include<iostream>
#include<unordered_map>
#include<queue>
#include<string>
#include<algorithm>

using namespace std;

struct Node{
    char ch;
    int freq;
    Node *left , *right;
    
    Node(char c , int f):
        ch(c) , freq(f) , left(nullptr) , right(nullptr){}
};


struct Compare{
    bool operator()(Node* a , Node* b){
        return a -> freq > b -> freq;
    }
};

void generateCodes(Node* root , string code , unordered_map<char , string>& huffCodes){
    
    if(!root){
        return;
    }
    
    if(!root -> left && !root -> right){
        huffCodes[root -> ch] = code;
    }
    
    generateCodes(root->left , code + "0" , huffCodes);
    generateCodes(root->right , code + "1" , huffCodes);
        
}


int main(){
    string text;
    getline(cin , text);
    
    unordered_map<char,int> freqMap;
    
    for(char ch : text){
        freqMap[ch]++;
    }
    
    
    priority_queue<Node*,vector<Node*> , Compare> pq;
    
    for(auto pair : freqMap){
        pq.push(new Node(pair.first , pair.second));
    }
    
    while(pq.size() > 1){
        Node* left = pq.top();
        pq.pop();
        Node* right = pq.top();
        pq.pop();
        
        Node* merged = new Node('\0',left -> freq + right ->freq);
        merged -> left = left;
        merged -> right = right;
        pq.push(merged);
    }
    
    
    Node* root = pq.top();
    
    unordered_map<char,string> huffCodes;
    generateCodes(root,"",huffCodes);
    
    vector<pair<char,string>> sortedCodes(huffCodes.begin() , huffCodes.end());
    sort(sortedCodes.begin() , sortedCodes.end() ,[](auto& a,auto& b){
        return a.second < b.second;
    });
    
    cout << "\nHuffman Codes (Sorted by Binary Representation):\n";
    
    for(auto& pair : sortedCodes){
        
        cout << "" << pair.first << ":" << pair.second << '\n';
    }
    
    return 0;
}