Rabin-Karp Algorithm for Pattern Searching



Given a text txt[0..n-1] and a pattern pat[0..m-1], write a function search(char pat[], char txt[], int q) that prints all occurrences of pat[] in txt[]. You may assume that n > m.



Note: Use the Rabin-Karp Algorithm

Input format :
The first line consists of a string txt representing the text in which the pattern is to be searched.

The second line consists of a string pat which represents the pattern to be searched in the text.

Output format :
If the pattern is found in the text, the program outputs the starting indices (0-based) of each occurrence of the pattern in the text. Each occurrence should be printed on a new line in the format: "Pattern found at index [X]".

.

Refer to the sample output for the formatting specifications.

Code constraints :
10 ≤ txt ≤ 50

2 ≤ pat ≤ 25

The text and the pattern will contain only printable ASCII characters (values from 32 to 126).

The text and pattern are case-sensitive.



Note: d=256 (Maximum number of ASCII values)

q = 101

Sample test cases :
Input 1 :
AABAACAADAABAABA
AABA
Output 1 :
Pattern found at index 0
Pattern found at index 9
Pattern found at index 12
Input 2 :
aabcddijjklmnoop
lmnoop
Output 2 :
Pattern found at index 10
Input 3 :
MMMMMMMMMM
MMM
Output 3 :
Pattern found at index 0
Pattern found at index 1
Pattern found at index 2
Pattern found at index 3
Pattern found at index 4
Pattern found at index 5
Pattern found at index 6
Pattern found at index 7


#include<string.h>
#include<stdio.h>
#define d 256
void search(char pat[], char txt[], int q)
{
	int M = strlen(pat);
	int N = strlen(txt);
	int i, j;
	int p = 0; 
	int t = 0; 
	int h = 1;
	for (i = 0; i < M-1; i++)
		h = (h*d)%q;
	for (i = 0; i < M; i++)
	{
		p = (d*p + pat[i])%q;
		t = (d*t + txt[i])%q;
	}
	for (i = 0; i <= N - M; i++)
	{
		if ( p == t )
		{
			for (j = 0; j < M; j++)
			{
				if (txt[i+j] != pat[j])
					break;
			}
			if (j == M)
				printf("Pattern found at index %d \n", i);
		}
		if ( i < N-M )
		{
			t = (d*(t - txt[i]*h) + txt[i+M])%q;
			if (t < 0)
			t = (t + q);
		}
	}
}
int main()
{
	char txt[50], pat[25];
	scanf("%s",txt);
	scanf("%s",pat);
	int q = 101;
	search(pat, txt, q);
	return 0;
}