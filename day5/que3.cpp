Problem Statement



You are working for a language processing company, and one of your colleagues is working on a project where they need to reverse the order of characters in a string. They require your assistance to create a reusable function that can help with this task.



Your task is to create a program with a function that takes a single string as input and returns the reverse of that string. 



Function Specifications: reverseString(char str1[], int start, int end)

Input format :
The input consists of a string.

Output format :
The output prints the reversed string.



Refer to the sample output for formatting specifications.

Code constraints :
1 < string_length < 100

Sample test cases :
Input 1 :
Welcome321
Output 1 :
123emocleW
Input 2 :
!!EBC_ni_oeNmai
Output 2 :
iamNeo_in_CBE!!
Whitelist
Set 1:
reverseString


# You are using Python
str = input()
reverseString = str[::-1]
print(reverseString)