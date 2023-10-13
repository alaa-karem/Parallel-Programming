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
}user[1];
int main(void)
{
    printf("Hello...!\nTo Register, Press 1: \nTo Login, Press 2: \nTo Exit Press 3: \n\n");
    int n;
    while(true)
    {
        scanf("%d",&n);
        if(n==1)
        {
            printf("Enter Your First Name: \n");
            scanf("%s",user[0].firstname);
            printf("Enter Your Second Name: \n");
            scanf("%s",user[0].secondname);
            printf("Enter Your Age: \n");
            scanf("%d",&user[0].age);
            printf("Enter Your Email: \n");
            scanf("%s",user[0].email);
            printf("Enter Your Password: \n");
            scanf("%s",user[0].pass);
            printf("\nSuccessfully Register\n\n");

        }
        else if(n==2)
        {
            char email_log[50];
            char pass_log[20];
            printf("Enter Your Email: \n");
            scanf("%s",email_log);
            printf("Enter Your Password: \n");
            scanf("%s",pass_log);
            if( (strcmp(user[0].email,email_log)==0) && (strcmp(user[0].pass,pass_log)==0) )
                printf("Successfully Login\n");
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
