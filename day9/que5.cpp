Problem Statement



Alice is a teacher, and she wants to analyze the frequency of letters in the given string. She has collected the strings and wants to determine how many times each letter appears in that given string. To make this task easier, Alice decided to write a simple program.



Write a program to help Alice count the occurrence of each letter in the string and finally display the results in alphabetical order.

Input format :
The input consists of a group of characters as a string of lowercase letters.

Output format :
For each alphabet from 'a' to 'z', print "X occurs Y times in the string" where X is the alphabet and Y is an integer representing the number of times it occurs in the string.

Each alphabet count should be printed on a new line in alphabetical order.



Refer to the sample output for formatting specifications.

Code constraints :
The input string contains only alphabets (lowercase) and spaces.

The length of the input string does not exceed 1000 characters.

Sample test cases :
Input 1 :
programming in c
Output 1 :
a occurs 1 times in the string
c occurs 1 times in the string
g occurs 2 times in the string
i occurs 2 times in the string
m occurs 2 times in the string
n occurs 2 times in the string
o occurs 1 times in the string
p occurs 1 times in the string
r occurs 2 times in the string
Input 2 :
apple pie
Output 2 :
a occurs 1 times in the string
e occurs 2 times in the string
i occurs 1 times in the string
l occurs 1 times in the string
p occurs 3 times in the string


#include<stdio.h>
#include<string.h>
int main()
{
    char alphabet[1000];
    int c = 0;
    int count[26] = {0};   
    fgets(alphabet, 1000, stdin);
    while(alphabet[c] != '\0')
    {
        if(alphabet[c] >= 'a' && alphabet[c] <= 'z')
        {
            count[alphabet[c] - 'a']++; 
        }
        c++;
    }
    for(c = 0; c < 26; c++)
    {
        if(count[c] != 0)  
        {
            printf("%c occurs %d times in the string\n",c+'a' ,count[c]);
        }
    }
    return 0;
}