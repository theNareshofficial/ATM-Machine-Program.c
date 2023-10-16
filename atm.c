// This function used to bulid Atm machine  program


//header file's
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


// Function Prototype's
int usr_choice();
int new_account();
int account();
int withdrawal();
int balance();
int change_pin();
int deposite();


// Custom user store information about user
struct var{
        char name[20];
        char bank[20];
        char city[20];
        int age;
        int num;
        int account;
        int choice;
        int pin;
        int balance;
};


// Global  variable
struct var user;	// user struct


int main()	// Main function
{
        
         usr_choice();
         system("clear"); // screen Clear function
}

int usr_choice()
{
        int choice;

        system("clear");
        printf("\033[1;34m----------------------------------------\n");
        printf("\033[1;33m\t\t My ATM\n");
        printf("\033[1;34m----------------------------------------\n");

        printf("\033[1;34m 1.)Cash Withdrawal\n");
        printf("\033[1;34m 2.)Cash Deposite\n");
        printf("\033[1;34m 3.)Change PIN\n");
        printf("\033[1;34m 4.)Account\n");
        printf("\033[1;34m 5.)New Account\n");
        printf("\033[1;34m 6.)Balance Check\n");
        printf("\033[1;34m 7.)Exit\n");

        printf("\033[1;33m [+] Enter your choice : ");
        scanf("%d",&choice);

        while(1)
        {
                if(choice == 1)
                {
                        withdrawal();
                }
                else if(choice == 2)
                {
                        deposite();
                }
                else if(choice == 3)
                {
                        change_pin();
                }
                else if(choice == 4)
                {
                        account();
                }
                else if(choice == 5)
                {
                        new_account();
                }
                else if(choice == 6)
                {
                        balance();
                }
                else if(choice == 7)
                {
                        printf("\033[1;34m 6.)Exit\n");
                        exit(1);
                }
                else
                {
                        printf("\033[1;34m Oop's Enter Correct Choice !!!\n");
                }
        }
}

int new_account()
{

        //int back;

        //system("clear");
        printf("\033[1;34m----------------------------------------\n");
        printf("\033[1;33m\t\t NEW ACCOUNT\n");
        printf("\033[1;34m----------------------------------------\n");
        printf("\n");

        printf("\n\033[1;34m [+] Enter Your Name \t: ");
        scanf("%s",user.name);
        printf("\033[1;34m [+] Enter Your Age \t: ");
        scanf("%d",&user.age);
        printf("\033[1;34m [+] Enter Your Number \t: ");
        scanf("%d",&user.num);
        printf("\033[1;34m [+] Enter Bank Name \t: ");
        scanf("%s",user.bank);
        printf("\033[1;34m [+] Enter City Name \t: ");
        scanf("%s",user.city);
        printf("\033[1;34m [+] Enter Account Number : ");
        scanf("%d",&user.account);
        printf("\n");
        printf("\033[1;34m [+] Your Data stored successfully... \n");
        user.pin = rand();
        printf("\033[1;34m [+] Your PIN : \033[1;35m%d\n",&user.pin);
        
        printf("Account Created Suucessfully...\n");
        account();

/*
        while (1)
        {
        }
        */
        
}


int withdrawal()
{
        int pswd;
        int cash;

        printf("\033[1;34m----------------------------------------\n");
        printf("\033[1;33m\t\t CASH WITHDRAWA\n");
        printf("\033[1;34m----------------------------------------\n");
        printf("\n");

        printf("\033[1;33mEnter Your Pin : ");
        scanf("%d",&pswd);

        if (pswd = user.pin)
        {
                printf("\033[1;33mEnter Withdrawal Amount : ");
                scanf("%d",&cash);
                printf("\n");
                printf("Balance Amount : ",&user.balance);
        }
        else{
                printf("\033[1;33m OOP'S Wrong PIN !!!");
        }
        exit(1);
        
}


int balance()
{
        int pswd;

        printf("\033[1;34m----------------------------------------\n");
        printf("\033[1;33m\t\t Balance Check\n");
        printf("\033[1;34m----------------------------------------\n");
        printf("\n");

        printf("\033[1;33mEnter Your Pin : ");
        scanf("%d",&pswd);

        if(pswd == user.pin)
        {
                printf("\033[1;33m Hello %s,",user.name);
                printf("Your balance : %d",&user.balance);
        }
        else
        {
                printf("\033[1;35m Oop's Your PIN Wrong !!!");
        }
}

int change_pin()
{

        printf("\033[1;34m----------------------------------------\n");
        printf("\033[1;33m\t\t Change PIN\n");
        printf("\033[1;34m----------------------------------------\n");
        printf("\n");

        int pswd;

        printf("\033[1;33m Enter Your Pin : ");
        scanf("%d",&user.pin);

        if(pswd == user.pin)
        {
                printf("\033[1;33m Hello %s,",user.name);
                printf("\033[1;33m Enter New Pin : ");
                scanf("%d",user.pin);
                printf("\n");
                printf("\033[1;33m PIN Change Successfully...");
        }
        else
        {
                printf("\033[1;33m Oop's You Entered Wrong PIN !!!");
        }
       
}

int account()
{
        printf("\033[1;34m\n----------------------------------------\n");
        printf("\033[1;33m\t\t Account\n");
        printf("\033[1;34m----------------------------------------\n");
        printf("\n");

        int pswd;
        char retry;

        printf("\033[1;33m Enter Your Pin : ");
        scanf("%d",&pswd);

        while(1)
        {
                if(pswd == user.pin)
                {
                        printf("\033[1;33m Name \t: %s",user.name);
                        printf("\033[1;33m Age \t: %d",&user.age);
                        printf("\033[1;33m Number \t: %d",&user.num);
                        printf("\033[1;33m City \t: %s",user.city);
                        printf("\033[1;33m Bank \t: %s",user.bank);
                        printf("\033[1;33m Account \t: %s",&user.account);
                }
                else if(pswd != user.pin)
                {
                        printf("\033[1;33m Oop's Wrong Pin Retry(y/n)\n");
                        scanf("%c",&retry);

                        while(1)
                        {
                                if(retry == "y")
                                {
                                        account();
                                        break;
                                }
                                else if(retry == "n")
                                {
                                        main();
                                        break;
                                }
                                else{
                                        printf("\033[1;33m Oop's Wrong Pin !!! \n");
                                }
                        }
                }
                else{
                        printf("\033[1;33m Oop's Wrong Value !!! \n");
                }
        }
}

int deposite()
{
        printf("\033[1;34m----------------------------------------\n");
        printf("\033[1;33m\t\t Account\n");
        printf("\033[1;34m----------------------------------------\n");
        printf("\n");

        int pswd,cash;

        printf("\033[1;33m Enter Your Pin : ");
        scanf("%d",&user.pin);

        if(pswd == user.pin)
        {
                printf("\033[1;33m Hello %s\n",user.name);
                printf("\n");
                printf("\033[1;33m Enter your Deposite Amount :  ");
                scanf("%d",&cash);

                user.balance = (cash + user.balance);

                printf("\033[1;33m Cash Deposite Successfully...\n");
                printf("\033[1;33m Your Balance : %d\n",user.balance);

        }
}
