/* THIS CODE CONTAINS 4 ERRORS */
/* TRY TO COMPILE THE CODE AND FIX ALL ERRORS */

#include <stdio.h>

#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */

/* count lines, words, and characters in input */
int  main()
{
       int c, nl, nw, nc, state;
       state = OUT;
       nl = nw = nc = 0;
       while ((c = getchar()) != EOF) {
           ++nc;
           if (c == '\n')
               ++nl;
           if (c == ' ' || c == '\n' || c == '\t')
               state = OUT;
           else if (state == OUT) {
               state = IN;
               ++nw;
           }
       }
       printf("\n nl:%d nw:%d nc:%d\n", nl, nw, nc);

      return(0);
}
