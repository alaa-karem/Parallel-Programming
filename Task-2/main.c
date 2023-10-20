#include <stdio.h>
#include <stdlib.h>
#include <stdint-gcc.h>
#include <stdbool.h>
#include <math.h>
struct User{
    char firstname[20];
    char secondname[20];
    int age;
    char email[50];
    char pass[20];
    char active[20];
}user;

union Union{
    struct User user;
}un;
int main(void)
{
    printf("Hello...!\nTo Register, Press 1: \nTo Login, Press 2: \nTo Exit Press 3: \n\n");
    int n;
    while(true)
    {
        scanf("%d",&n);
        if(n==1)
        {
            bool flag;
            printf("Enter Your First Name: \n");
            scanf("%s",un.user.firstname);
            printf("Enter Your Second Name: \n");
            scanf("%s",un.user.secondname);
            printf("Enter Your Age: \n");
            scanf("%d",&un.user.age);
            printf("Enter Your Email: \n");
            scanf("%s",un.user.email);
            printf("Enter Your Password: \n");
            scanf("%s",un.user.pass);
            printf("Enter Your Activation Status: True/1 or False/0 \n");
            scanf("%s",un.user.active);
            printf("\nSuccessfully Register\n\n");

        }
        else if(n==2)
        {
            char email_log[50];
            char pass_log[20];
            char check[20]="true";
            char check2[20]="1";
            //printf("%s\n",check);
            printf("Enter Your Email: \n");
            scanf("%s",email_log);
            printf("Enter Your Password: \n");
            scanf("%s",pass_log);
            if( (strcmp(un.user.email,email_log)==0) && (strcmp(un.user.pass,pass_log)==0) && ( (strcmp(un.user.active,check)==0) || (strcmp(un.user.active,check2)==0) ) )
                printf("Successfully Login\n");
            else if( (strcmp(un.user.email,email_log)==0) && (strcmp(un.user.pass,pass_log)==0) && ( (strcmp(un.user.active,check)!=0) || (strcmp(un.user.active,check2)!=0) ) )
                printf("You Are Not Active, Please Active Your state and Login Again\n");
            else printf("You Email Not Found, Please Press 1 To Register First and Log Again\n");
        }
        else if(n==3)
        {
            printf("Exit Successfully!\n");
            return;
        }
        else printf("Please, Enter A Valid Choice:");
    }
}
