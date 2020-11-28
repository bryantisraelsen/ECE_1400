#include <stdio.h>
#include "stack.h"
#define STACK_SIZE 100
int contents[STACK_SIZE];				//external variable contents (stack)
int top;								//external variable top (top of stack)
int OVER_FLOW;			//external variable OVER_FLOW (=1 if too complex)
int UNDER_FLOW;		//external variable UNDER_FLOW (=1 if not enough operands)
/***************************************************************************
Function title: main
Summary:asks for RPN expression calls function that calculates RPN expression
		and loops until a invalid RPN expression is entered
Inputs: none
Outputs: none
Pseudocode
Begin
	if UNDER_FLOW is 1 or OVER_FLOW is 1
	then 
		terminate program
	variable top = 0
	variable OVER_FLOW = 0
	variable UNDER_FLOW = 0
	define character arrays s and q
	define int variables
	Loop
		ask for RPN expression
		Loop
			scan in character to s array
			if character is not between 42 and 61
			then
				terminate program
			else
				if character is '='
				then
					f is 31
				else 
					put character into q array
					if stack(character) returns 0
					then 
						terminate program
					endif
					add 1 to n
				endif
			endif
		End Loop when f = 31
		if OVER_FLOW and UNDER_FLOW return 0
		then
			print top stack value
		else
			terminate program
		endif
		make_empty function
		set s[0] to '\0'
		set q[0] to '\0'
		set top to 0
		getchar
	End Loop when True = False
End
***************************************************************************/
int main(){									//Begin
	if(UNDER_FLOW == 1 || OVER_FLOW == 1)//if UNDER_FLOW is 1 or OVER_FLOW is 1
	{									//then
		return 0;						//terminate program
	}
	top = 0;							//variable top = 0
	OVER_FLOW = 0;						//variable OVER_FLOW = 0
	UNDER_FLOW = 0;						//variable UNDER_FLOW = 0
	char s[100], q[100];				//define character arrays s and q
	int value, f, n, i=0;				//define int variables
	while(1){							//Loop
		printf("Enter an RPN expression: ");	//ask for RPN expression
		for(i=0, n=0, f=0; f!=31; i++){		//Loop
			scanf(" %c", (s+i));		//scan in character to s array
			if(*(s+i)<42||*(s+i)>61)	//if character is not between 42 and 61
			{							//then
				return 0;				//terminate program
			}
			else{						//else
				if(*(s+i)==61)			//if character is '='
				{						//then
					f = 31;				//f is 31
				}
				else{					//else
					*(q+n) = *(s+i);	//put character into q array
					if(!stack(*(q+n)))	//if stack(character) returns 0
					{					//then
						return 0;		//terminate program
					}					//endif
					n++;				//add 1 to n
				}						//endif
			}							//endif
		}								//End Loop when f = 31
		if(!OVER_FLOW && !UNDER_FLOW)	//if OVER_FLOW and UNDER_FLOW return 0
		{								//then
			printf("Value of expression: %d\n", pop());//print top stack value
		}
		else{						//else
			return 0;				//terminate program
		}							//endif
		make_empty();				//make_empty function
		s[0] = '\0';				//set s[0] to '\0'
		q[0] = '\0';				//set q[0] to '\0'
		top = 0;					//set top to 0
		getchar();					//getchar
	}								//End Loop when Tue = False
}									//End