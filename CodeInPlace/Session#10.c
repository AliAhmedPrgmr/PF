#include <stdio.h>
#include <string.h>
#include <ctype.h>
int countUppercase(char *string)
{
	int upper=0;
	int len = strlen(string);
	for (int i=0; i<len; i++)
	{
		if ( isupper(string[i]) )
		upper++;
	}
	return upper;
}


int countWords(char *string)
{
	int word=1;
	int len =strlen(string);
	
	for(int i=0; i<len; i++)
	{
		if (string[i]==' ')
		word++;
	}
	return word;
}

int countVowels(char *string)
{
	int len, vowel=0, i ;
	len = strlen(string);
	
	for (i=0; i<len; i++)
		string[i]= tolower(string[i]);
		
	for (i=0; i<len; i++)
	{
		switch(string[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
		{
				vowel++;
				break;
		}
			default:
				break;
		}
	}
	return vowel;
}

int main()
{
	int VowelCount,WordCount,UpperCase;
	char text[150];
	puts("Enter a text");
	fgets(text, 150, stdin);
	
	UpperCase = countUppercase(text);
	printf("The number of Capital Letters in this sentence is %d\n",UpperCase);
	
	VowelCount = countVowels(text);
	printf("The number of Vowel in this sentence is %d\n",VowelCount);
	
	WordCount=countWords(text);
	printf("The number of Words in this sentence is %d\n",WordCount);
}
