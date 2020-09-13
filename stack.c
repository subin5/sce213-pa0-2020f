/**********************************************************************
 * Copyright (c) 2020
 *  Sang-Hoon Kim <sanghoonkim@ajou.ac.kr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTIABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 **********************************************************************/

/*====================================================================*/
/*          ****** DO NOT MODIFY ANYTHING FROM THIS LINE ******       */
#include <stdio.h>
#include "types.h"
#include "list_head.h"

/* Declaration for the stack instance defined in pa0.c */
extern struct list_head stack;

/* Entry for the stack */
struct entry {
	struct list_head list;
	int value;
};
/*          ****** DO NOT MODIFY ANYTHING ABOVE THIS LINE ******      */
/*====================================================================*/

/*====================================================================*
 * The rest of this file is all yours. This implies that you can      *
 * include any header files if you want to ...                        */

#include <stdlib.h>                    /* like this */

/**
 * push_stack()
 *
 * DESCRIPTION
 *   Push @value into the @stack. The @value should be inserted into the top of 
 *   the stack. You may use either the head or tail of the list for the top.
 */
void push_stack(int value)
{
	/* TODO: Implement this function */

}


/**
 * pop_stack()
 *
 * DESCRIPTION
 *   Pop a value from @stack and return it. The value should come from the top
 *   of the stack, and the corresponding entry should be removed from @stack.
 *
 * RETURN
 *   If the stack is not empty, pop the top of the stack, and return the value.
 *   If the stack is empty, return -1
 */
int pop_stack(void)
{
	/* TODO: Implement this function */
	return 0; /* Must fix so that it returns the popped value instead of 0 */
}


/**
 * dump_stack()
 *
 * DESCRIPTION
 *   Dump the contents in @stack. Print out the value of stack entries while
 *   traversing the stack from the top to the bottom. Note that the value
 *   should be printed out to @stderr to get properly graded in pasubmit.
 */
void dump_stack(void)
{
	/* TODO: Implement this function */

	fprintf(stderr, "%d\n", 0xdeadbeef); /* Example. 
											Print out values in this form */
}
