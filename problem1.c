// #include<stdio.h>
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn\tI will succeed one day.");
// };

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     int A;
//     int B;
//     scanf("%d",&A);
//     scanf("%d",&B);
//     int mul = A*B;
//     printf("%d",mul); 
//     return 0;
// };

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
// int N;
// scanf("%d",&N);
// if(N % 3==0)
// {
//     printf("YES");
// }
// else
// {
//     printf("NO");
// }
// };

#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>1000)
    {
        printf("I will buy Punjabi\n");
        int extra=tk - 1000;
        if (extra >=500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");

        }
        
    }
    else
    {
        printf("Bad luck!");
    }
};
