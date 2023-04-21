#ifndef CALC_H
#define CALC_H

/**
 * struct op - A struct op.
 * @op: The opertor
 * @f: The associated function.
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);

} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mob(int a, int b);
int (*get_op_funtc(char *s))(int, int);

#endif
