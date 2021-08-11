#include <stdio.h>

int main()
{
    int A,B,C;
    int B_A, A_B_sub, C_B, B_C_sub;

    scanf("%d %d %d", &A,&B,&C);

    A_B_sub = A - B;
    B_C_sub = B - C;
    B_A = B - A;
    C_B = C - B;

    if (A > B)
    {
        if (B <= C)
        {
            printf(":)\n");
        } 
        else if (B > C)
        {
            if (A_B_sub > B_C_sub)
            {
                printf(":)\n");
            }
            else if (A_B_sub <= B_C_sub)
            {
                printf(":(\n");
            }
        }       
    }
    else if (A < B)
    {
        if (B >= C){
           printf(":(\n"); 
        }    
        else if (B < C)
        {
            if (B_A > C_B)
            {
                printf(":(\n");
            }
            else if (B_A <= C_B)
            {
                printf(":)\n");
            }
        }
    }
    else if (A == B)
    {
        if (B < C)
        {
            printf(":)\n");
        }
        else if (B > C)
        {
            printf(":(\n");
        }
        else
        {
            printf(":(\n");
        }
    }
    return 0;
}