#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
char name[20];
char gender[20];
int age ;
char dOB[20];
int adhaar;
int phone;
char email[100];
int option,ch,pass,confirm,pas,account,cg;
int balance,current,deposit,withdraw;

void create(){
        printf("Enter your name : ");
        scanf("%s",&name[20]);
        printf("\n\n");
        printf("Enter your age : ");
        scanf("%d",&age);
        printf("Enter your Gender : ");
        scanf("%s",&gender);
        printf("\n\n");
        printf("Enter the Date of birth : ");
        scanf("%s",&dOB[20]);
        printf("\n\n");
        printf("Enter the adhaar number : ");
        scanf("%d",&adhaar);
        printf("\n\n");
        printf("enter the phone number : ");
        scanf("%d",&phone);
        printf("\n\n");
        printf("enter the password : ");
        scanf("%d",&pass);
        printf("\n\n");
        printf("confirm your password : ");
        scanf("%d",&confirm);
        if(pass==confirm){
            pass=confirm;
            int account=rand();
            printf("your account number is : %d",account);
            printf("*******************Your account has created........................");
            printf("back to login....");
        }
        else{
            printf("password     /       confirm password is incorect !!!!!!!!!!");
}
}
void deposit1(){
        printf("---------------WELCOME TO DEPOSIT DASHBOARD---------------------\n");
        printf("enetr the balance in your account : ");
        scanf("%d",&balance);
        printf("enter the amount  to deposit : ");
        scanf("%d",&deposit);
        printf("\n\n\n\n");
        printf("*******************************************************\n");
        current=balance+deposit;
        printf("your current balance is :  %d \n\n",current);
}
void withdraw1(){
        printf("-------------WELCOME TO WITHDRAW DASHBOARD-----------------------\n");
        printf("Enter the balance in your account : ");
        scanf("%d",&balance);
        printf("enter the amount to withdraw  : ");
        scanf("%d",&withdraw);
        printf("\n\n\n");
        printf("*********************************************************************\n");
        current=balance-withdraw;
        printf("your current balance is : %d\n\n",current);
}
void main()
{
    do{
    printf("---------------------------BANK MANANGEMENT-------------------------------------\n");
    printf("********************************************************************************\n");
    printf("\n\n\n");
    printf("...............HOME..............\n");
    printf("\n 1.ACCOUNT*****\n2.DEPOSIT*****\n3.WITHDRAWAL*****\n4.EXIT*****\n");
    scanf("%d",&ch);
    switch(ch){
    case 1:
        printf("1.REGISTER HERE.....\n2.Already customer?  LOG IN.......... \n3.EXIT()\n\n");
        printf("select the option you need ....: ");
        scanf("%d",&option);
        if (option==1){
            printf("\n\n");
            create();
            }
        else if (option==2){
            printf("LOG_IN  PAGE\n");
            printf("**********************************\n");
            char name[20]="sakthivel";
            int pass=313003;
            printf("Enter the confrim password : ");
            scanf("%d",&confirm);
            if(confirm==pass){
            printf("login successfully.... \n");
            int account=rand();
            printf("ACCOUNT NUMBER :    %d\n",&account);
        }
            else{

            printf("password is incorrect..........................\n");
        }
            getch();
        }
        else{
            exit(0);
        }
    case 2:
        deposit1();
        break;
    case 3:
        withdraw1();
        break;
    case 4:
        exit(0);
        break;
    }
    printf("**********ENTER 0 TO EXIT OR 1 TO CONTINUE********************     :  ");
    scanf("%d",&cg);
    }while(cg==1);
}
