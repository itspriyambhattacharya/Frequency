#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    system("cls");
    printf("Enter Size of Array \n");
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element \n");
        scanf("%d", &a[i]);
        b[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c = 1 ;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
                b[j] = 0;
            }
        }
        if (b[i] != 0)
        {
            b[i] = c;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            printf("\n%d is present %d time/times" , a[i] , b[i]);
        }
        
    }
    
    return 0;
}