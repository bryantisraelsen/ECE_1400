#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50
void answer(char a[], int g, char big[], char small[]);
/*****************************************************************
Function title: main
Summary: ask for words and print smallest and largest of those words
Inputs: int argc, char *argv[]
Outputs: int 0
Pseudocode
Begin
	define int variable i
	define int variable j 
	j = int value of argv[1] 
	define char string str
	define char string big
	define char string small
	Loop
		print "Enter word: "
		scan in a string and save it as str
		run answer function
	End Loop when i=j
	print smallest word
	print largest word
End
*****************************************************************/
int main(int argc, char *argv[]){				//Begin
	int i;										//define int variable i
	int j;										//define int variable j
	j =	atoi(argv[1]);							//j = int value of argv[1]
	char str[MAX];								//define char string str
	char big[MAX] = "a";					//define char string big
	char small[MAX] = "zzzzzzzzzzzzzzzzzzzzzzzzzzz";//define char string small
	for (i=0; i<j; i++){						//Loop
		printf("Enter word: ");					//print "Enter word: "
		scanf("%s", str+i);				//scan in a string and save it as str
		answer(str, i, big, small);				//run answer function
	}											//End Loop when i=j
	
	printf("\nSmallest word: %s", small);		//print smallest word
	printf("\nLargest word: %s", big);			//print largest word
	return 0;
}												//End
/*****************************************************************
Function title: answer
Summary: determines if words entered are largest or smallest
Inputs: char str[], int i, char big[], char small[]
Outputs: none technically (but values of small and big are stored in main 
		function still because of pointer properties)
Pseudocode
Begin
	define int variable i
	if word entered is < small
	then
		small becomes word entered
	if word entered is > big
	then
		big becomes word entered
End
*****************************************************************/
void answer(char a[], int g, char big[], char small[]){		//Begin
	int i;									//define int variable i
	if (strcmp(a+g, small) < 0)				//if word entered is < small
	{										//then 
	strcpy(small, a+g);						//small becomes word entered
	}
	if(strcmp(a+g, big) > 0)				//if word entered is > big
	{										//then
	strcpy(big, a+g);						//big becomes word entered
	}	
}											//End