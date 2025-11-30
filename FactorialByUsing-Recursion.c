// #include <stdio.h>
// int fact(int n)
// {

//     if (n == 0 || n == 1)
//         return 1;
// return n * fact(n - 1);
// }

// int main()
// {

//     int n;
//     printf("Enter the Number:");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {

//         printf("%d", fact(i));
//     }

//     return 0;
// }

#include <stdio.h>

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fact(i));   // space added for clear output
    }

    return 0;
}
