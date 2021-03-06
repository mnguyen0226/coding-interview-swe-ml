// Function prints out the permutation of the string
// Using Recursion, Backtracking and bruteforce

#include <stdio.h>

void perm(char s[], int k)
{
    static int A[10] = {0}; // initialize array with all 0s
    static char Res[10];
    int i;
    if (s[k] == '\0')
    {
        Res[k] = '\0';
        printf(Res);
        printf("\n");
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                Res[k] = s[i];
                A[i] = 1;
                perm(s, k + 1);
                A[i] = 0;
            }
        }
    }
}

int main()
{
    char s[] = "ABCD";
    perm(s, 0);

    return 0;
}