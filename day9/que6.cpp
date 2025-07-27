Problem Statement



Nandha is learning programming and wants to write a program to reverse a given string. 



Help him write a program that takes a string as input and outputs its reverse.

Input format :
The input consists of a string.

Output format :
The output displays the reversed string on a single line.



﻿Refer to the sample output for formatting specifications.

Code constraints :
The maximum length of the string is 50.

The input string consists of the lowercase and uppercase letters without any space.

Sample test cases :
Input 1 :
hello
Output 1 :
olleh
Input 2 :
Red
Output 2 :
deR


#include <stdio.h>
int main()
{
    int i,len=0;
    char str[50];
    scanf("%s",&str);
    for(i=0;str[i]!='\0';i++)
        len++;
    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
    
    return 0;
}