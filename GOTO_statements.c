#include <stdio.h>
int main()
{
    int i, num;
    for (i = 0; i < 8; i++)
    {
        printf("1st loop\n");
        for (int j; j < 8; j++)
        {
            printf("enter a number. enter 0 to exit:\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end; //this will exit all loops and take to end
            }
        }
        
    }
  end:
  printf("exited all loops");
}
