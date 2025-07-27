Given two strings, write a program to count all the common sub-sequences of the two strings and print them.



A sub-sequence of a string is a sequence of characters that appear in the same order as in the original string, but not necessarily consecutively. If there are no common subsequences or if the input strings do not follow the specified format, print 0.



Example



Input:

ABCD

ABC

Output:

7

Explanation:

ABC has the following sub-sequences: A, B, C, AB, AC, BC, ABC.

ABCD has the following sub-sequences: A, B, C, D, AB, AC, AD, BC, BD, CD, ABC, ABD, ACD, BCD, ABCD.

The common sub-sequence count is 7.

Input format :
The input consists of two strings in separate lines.

Output format :
The output prints the count of common subsequences between the two strings. If there are no common subsequences or if the input strings do not follow the specified format, print 0.



Refer to the sample output for formatting specifications.

Code constraints :
The maximum length of the input strings is 10.

The strings are case-sensitive.

Sample test cases :
Input 1 :
ABCD
ABC
Output 1 :
7
Input 2 :
123
Aa@
Output 2 :
0
Input 3 :
xy
XYZ
Output 3 :
0

#include <stdio.h>
#include <string.h>

int main() {
    char s1[10];
    char s2[10];

    scanf("%s", s1);
    scanf("%s", s2);

    int n1, n2;
    n1 = strlen(s1);
    n2 = strlen(s2);
    int arr[n1 + 1][n2 + 1];

    for (int i = 0; i <= n1; i++) {
        for (int j = 0; j <= n2; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                arr[i][j] = 1 + arr[i][j - 1] + arr[i - 1][j];
            } else {
                arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];
            }
        }
    }

    printf("%d", arr[n1][n2]);

    return 0;
}