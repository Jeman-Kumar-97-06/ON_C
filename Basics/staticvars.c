/*
 * Author: M.J Leslie.
 * Purpose: To demonstrate the 'static' storage class 
 */
#include <stdio.h>
void func1(void);

static int count=10;		/* Global variable - static is the default */

int main()
{
  while (count--) func1();
  return 0;
}

/***************************************************************************/

void func1(void)
{
				/* 'thingy' is local to 'func1' - it is 
				 * only initalised at run time. Its value
				 * is NOT reset on every invocation of
				 * 'func1'
				 */
  int thingy=5;
  thingy++;
  printf(" thingy is %d and count is %d\n", thingy, count);
}


/**************************************************************************

Program )/P looks like this:

 thingy is 6 and count is 9
 thingy is 7 and count is 8
 thingy is 8 and count is 7
 thingy is 9 and count is 6
 thingy is 10 and count is 5
 thingy is 11 and count is 4
 thingy is 12 and count is 3
 thingy is 13 and count is 2
 thingy is 14 and count is 1
 thingy is 15 and count is 0

**************************************************************************/