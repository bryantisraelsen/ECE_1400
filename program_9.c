#include <stdio.h>
#define MAX 100
int calculate(char *me, int p);
/***************************************************************************
Function title: main
Summary:ask for a word/phrase add it to an array and tell if palindrone or not
Inputs: none
Outputs: none
Pseudocode
Begin
	define char arrays
	define int variables
	ask for word/phrase
	Loop
		getchar, put in array
		if char is enter 
		then 
			f=32
		if char is > 64 and < 92
		then
			if char is not 91-96
			then 
				add char to b array
				add 1 to n
	End Loop when f=32
	if calculate function returns 1
	then 
		word/phrase is palindrome
	else
		word/phrase isnt palindrome	
End
***************************************************************************/
int main(){									//Begin
	char a[MAX], b[MAX];					//define char arrays
	int i, n, f;							//define int variables
	printf("Enter a word/phrase: ");		//ask for word/phrase
	for(i=0, n=0;f!=32;i++){				//Loop
		*(a+i)=getchar();					//getchar, put in array
		if(*(a+i)==10)						//if char is enter
		{									//then
			f = 32;							//f=32
		}
		if(*(a+i)>64 && *(a+i)<122)			//if char is > 64 and < 92
		{									//then
			if(*(a+i)!=91&&*(a+i)!=92&&*(a+i)!=93){	//if char is not 91-96
				if(*(a+i)!=94&&*(a+i)!=95&&*(a+i)!=96){	//then
					*(b+n)=*(a+i);			//add char to b array
					n++;					//add 1 to n
				}
			}
		}
	}										//End Loop when f=32
	if(calculate(b, n))						//if calculate function returns 1
	{										//then
	printf("The word/phrase is a palindrome.");//word/phrase is palindrome
	}
	else{									//else
	printf("The word/phrase is not a palindrome.");//word/phrase isnt palindrome
	}
	
	return 0;
}											//End
/***************************************************************************
Function title: calculate
Summary: determines if word/phrase is palindrome or not
Inputs: char array (b from main function) int (n from main function)
Outputs: int 0 or int 1
Pseudocode
Begin
	define int variables
	Loop
		if (low) char in array is=(high) char in array 
		then 
			add 1 to low
			subtract 1 from high
		else
			low = 2000
	End Loop when low is > high
	if low >=2000
	then 
		return 0
	else
		return 1
End
***************************************************************************/
int calculate(char *me, int p){				//Begin
	int low, high;							//define int variables
	for(low=0, high=(p-1); low<=high;){		//Loop
		if(*(me+low)==*(me+high)//if (low) char in array is=(high) char in array
			||*(me+low)+32==*(me+high)||*(me+low)-32==*(me+high)){//then
		low++;						//add 1 to low
		high--;						//subtract 1 from high
		}
		else{						//else
		low = 2000;					//low = 2000
		}
	}								//End Loop when low is > high
	if(low >= 2000)					//if low >=2000
	{								//then
		return 0;					//return 0
	}
	else{							//else
		return 1;					//return 1
	}
	
}									//End