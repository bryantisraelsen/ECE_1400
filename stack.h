#ifndef STACK
#define STACK
	int stack(char s);
	void make_empty(void);
	int is_empty(void);
	int is_full(void);
	void push(int i);
	int pop(void);
	void stack_overflow(void);
	void stack_underflow(void);
#endif