#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 15
void selection_sort(char *list[], int n);

/***************************************************************************
Function title: main
Compile instructions: gcc program_13.c -o program_13.exe
Summary: asks for words calls function that sorts words and then prints the
		words in a sorted order
Inputs:int argc, char *argv[], (the user must enter a number when typing in the
	exectuable that will determine how many words will be entered and sorted)
Outputs: none
Pseudocode
Begin
	int for number entered by user
	more int variables
	ragged array to store words in
	multivariable char array for intial input of words
	set j to 16
	Loop
		malloc space for each part of ragged array
		add 1 to i
	End Loop when i = n
	if ragged array is NULL
	then
		print error
		exit
	endif
	Loop
		ask for word
		scan in word
		put in ragged array
		add 1 to i
	End Loop when i = n
	call selection sort function
	print "sorted words"
	Loop
		print word[i]
		add 1 to i
	End Loop when i = n
End
***************************************************************************/
int main(int argc, char **argv){   //Begin
	int n = atoi(argv[1]);			//int for number entered by user
	int i, j;						//more int variables
	char *words[n];			//ragged array to store words in
	char input[n][15];  //multivariable char array for intial input of words
	j = 16;							//set j to 16
	for(i=0; i<n; i++){				//Loop
		words[i] = malloc(j);	//malloc space for each part of ragged array
								//add 1 to i
	}							//End Loop when i = n
	if(words == NULL)			//if ragged array is NULL
	{							//then
		printf("Memory not allocated");    	//print error
		exit(0);						//exit
	}									//endif
	for(i = 0; i < n; i++){				//Loop
		printf("Enter a word: ");		//ask for word
		scanf("%s", input[i]);			//scan in word
		words[i] = input[i];			//put in ragged array
										//add 1 to i
	}									//End Loop when i = n
	
	selection_sort(words, n);			//call selection sort function
	printf("\nSorted words:");			//print "sorted words"
	for(i=0;i<n;i++){					//Loop
		printf(" %s", words[i]);		//print word[i]
										//add 1 to i
	}									//End Loop when i = n
	return 0;
}										//End
/***************************************************************************
Function title: seection_sort
Summary: sorts words that were entered by the user from smallest to biggest
		(alphabetical order)
Inputs: ragged array words (list of the words entered by the user)
		variable n (the number of words in the ragged array)
Outputs: none technically but when the words are sorted they are changed in
		the main function also.
Pseudocode
Begin
	if n is 0
	then
		return
	endif
	int variables
	char array for temporary storage
	set max_idx to 0
	Loop
		if list[i] is > list[max_idx]
		then
			set max_idx to i
		endif
	End Loop when i = n
	copy list[max_idx] into temp
	copy list[max_idx] into list[n-1]
	copy temp into list[n-1]
	selection_sort with list and n - 1 as input
End
***************************************************************************/
void selection_sort(char *list[], int n){			//Begin
	if (n == 0) 									//if n is 0
	{												//then
		return;										//return
	}												//endif
	int i, j, max_idx;								//int variables
	char temp[MAX];						//char array for temporary storage
	max_idx = 0;					//set max_idx to 0
	for (i = 0; i < n; i++) {				//Loop
		if (strcmp(list[i], list[max_idx]) > 0)//if list[i] is > list[max_idx]
		{										//then
			max_idx = i;						//set max_idx to i
		}										//endif
	}											//End Loop when i = n
	strcpy(temp, list[max_idx]);	//copy list[max_idx] into temp
	strcpy(list[max_idx], list[n-1]);	//copy list[max_idx] into list[n-1]
	strcpy(list[n-1], temp);		//copy temp into list[n-1]
	selection_sort(list, n - 1);//selection_sort with list and n - 1 as input
}										//End