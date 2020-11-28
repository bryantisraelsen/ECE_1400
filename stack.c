#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "stack.h"
#define EXIT_LOOP 15
int STACK_SIZE;						//external variable STACK_SIZE
extern int top;						//external variable top (top of stack)
extern int contents[];				//external varaible contents (stack)
extern int UNDER_FLOW;//external variable UNDER_FLOW (if not enough operands =1)
extern int OVER_FLOW;		//external variable OVER_FLOW(if too complex=1)
/***************************************************************************
Function title: stack
Summary:reads if character is a operand or operator and calls other functions
		to execute accordingly
Inputs: character entered by user in main function
Outputs: 1 if succesful, 0 if failure has occurred
Pseudocode
Begin
	if UNDER_FLOW is 1 or OVER_FLOW is 1
	then 
		return 0
	endif
	STACK_SIZE variable = 100
	define int variables
	define character array c
	if s is char of an int
	then
		put s into char array c
		c[1] = '\0'
		call push function with it converted to int
	else if s is '+' '-' '*' or '/'
	then
		define int a and set equal what pop function returns
		define int b and set equal what pop function returns
		define int c
		switch depending on variable s
			case s = '+'
				c = a + b
				call push function with c
			case s = '-'
				c = b - a
				call push function with c
			case s = '*'
				c = a * b
				call push function with c
			case s = '/'
				c = b / a
				call push function with c
			default
				print what the heck
		endswitch
	else
		return 0
	endif
	return 1
End
***************************************************************************/
int stack(char s){						//Begin
	if(UNDER_FLOW==1||OVER_FLOW==1)		//if UNDER_FLOW is 1 or OVER_FLOW is 1
	{									//then
		return 0;						//return 0
	}									//endif
	STACK_SIZE=100;						//STACK_SIZE variable = 100
	int gg, j, q, i;					//define int variables
	char c[2];							//define character array c
	if(s < 58 && s > 47)				//if s is char of an int
	{									//then
		c[0] = s;						//put s into char array c
		c[1] = '\0';					//c[1] = '\0'
		push(atoi(c));			//call push function with it converted to int
	}
	else if(s==42||s==43||s==45||s==47)		//else if s is '+' '-' '*' or '/'
	{										//then
		int a = pop();	//define int a and set equal what pop function returns
		int b = pop();	//define int b and set equal what pop function returns
		int c;			//define int c
		switch (s){		//switch depending on variable s
			case '+': 		//case s = '+'
				c = a + b;	//c = a + b
				push(c);	//call push function with c
				break;
			case '-':		//case s = '-'
				c = b - a;	//c = b - a
				push(c);	//call push function with c
				break;
			case '*':		//case s = '*'
				c = a * b;	//c = a * b
				push(c);	//call push function with c
				break;
			case '/':		//case s = '/'
				c = b / a;	//c = b / a
				push(c);	//call push function with c
				break;
			default:		//default
				printf("What the heck man.");//print what the heck
		}					//endswitch
	}
	else{			//else
		return 0;	//return 0
	}				//endif
	return 1;		//return 1
}					//End
/***************************************************************************
Function title: make_empty
Summary:resets top to 0 so we can loop through the program again
Inputs: none
Outputs: none
Pseudocode
Begin
	set variable top to 0
End
***************************************************************************/

void make_empty(void){ 				//Begin
	top = 0;						//set variable top to 0
}									//End
/***************************************************************************
Function title: is_empty
Summary: checks if stack is empty if so that is not good
Inputs: none
Outputs: 1 if stack is empty, 0 if stack isn't empty
Pseudocode
Begin
	if top is 0
	then
		return 1
	else
		return 0
	endif
End
***************************************************************************/
int is_empty(void){				//Begin
	if(top == 0)				//if top is 0
	{							//then
		return 1;				//return 1
	}
	else{						//else
		return 0;				//return 0
	}							//endif
}								//End
/***************************************************************************
Function title: is_full
Summary: checks if stack is full
Inputs: none
Outputs: 1 if stack is full, 0 if stack isn't full
Pseudocode
Begin
	if top is 100
	then
		return 1
	else
		return 0
	endif
End
***************************************************************************/

int is_full(void){				//Begin
	if(top == STACK_SIZE)		//if top is 100
	{							//then
		return 1;				//return 1
	}
	else{						//else 
		return 0;				//return 0
	}							//endif
}								//End
/***************************************************************************
Function title: push
Summary: calls is_full function to check if stack is full if not adds int to 
		top of stack
Inputs: int i (this is the int that is either entered by the user or calcuted 
		and then pushed back onto the stack)
Outputs: none
Pseudocode
Begin
	if is_full function returns 1
	then
		call stack_overflow function
	else
		add to stack and add 1 to top
	endif
End
***************************************************************************/
void push(int i){						//Begin
	if (is_full())						//if is_full function returns 1
	{									//then
		stack_overflow();				//call stack_overflow function
	}
	else{								//else 
		contents[top++] = i;			//add to stack and add 1 to top
	}									//endif
}										//End
/***************************************************************************
Function title: pop
Summary: checks is stack is empty, then returns value at top of stack
Inputs: none
Outputs: value at top of stack
Pseudocode
Begin
	if is_empty function returns 1
	then
		call stack_underflow function
	else
		return value at top of stack
	endif
End
***************************************************************************/

int pop(void){						//Begin
	if (is_empty())					//if is_empty function returns 1
	{								//then
		stack_underflow();			//call stack_underflow function
	}
	else{ 							//else
		return contents[--top];		//return value at top of stack
	}								//endif
}									//End
/***************************************************************************
Function title: stack_overflow
Summary: sets OVER_FLOW to 1 to terminate program and prints that expression
		is too complex
Inputs: none
Outputs: none
Pseudocode
Begin
	set OVER_FLOW to 1
	print expression is too complex
	define char y and set to 't'
	call stack function with y
End
***************************************************************************/

void stack_overflow(void){				//Begin
	OVER_FLOW=1;						//set OVER_FLOW to 1
	printf("Expression is too complex");//print expression is too complex
	char y='t';							//define char y and set to 't'
	stack(y);							//call stack function with y
}										//End
/***************************************************************************
Function title: stack_underflow
Summary: sets UNDER_FLOW to 1 to terminate program and prints that expression
		doesn't have enough operands
Inputs: none
Outputs: none
Pseudocode
Begin
	set UNDER_FLOW to 1
	print not enough operands
	define char y and set to 't'
	call stack function with y
End
***************************************************************************/
void stack_underflow(void){							//Begin
	UNDER_FLOW=1;									//set UNDER_FLOW to 1
	printf("Not enough operands in expression");//print not enough operands
	char y='t';									//define char y and set to 't'
	stack(y);									//call stack function with y
}												//End