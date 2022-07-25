#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//Functions
void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

//Main Code
int main() {
    
    int option;
    float balance = 15000.00;
    int choose;
    
    bool again = true;

    //main code
    while (again) {
    mainMenu();
    
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Your Selection:\t");
    scanf("%d", &option);
    
    
        switch (option) {
            case 1:
                system("CLS");
                checkBalance(balance);
                break;
            case 2:
                system("CLS");
                balance = moneyDeposit(balance);
                break;
            case 3:
                system("CLS");
                balance = moneyWithdraw(balance);
                break;
            
            case 4:
                system("CLS");
                menuExit();
                return 0;
                
            default:
                errorMessage();
                break;
        }
        
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("< 1 > Yes\n");
        printf("< 2 > No\n");
        scanf("%d", &choose);
        
        system("CLS");
        if (choose == 2) {
            again = false;
            menuExit();
            
        }
    }return 0;
}

//Functions

//Main Menu

void mainMenu() {
    
    printf("******************Hello!*******************\n");
    printf("**********Welcome to ATM Banking***********\n\n");
    printf("****Please choose one of the options below****\n\n");
    printf("< 1 >  Check Balance\n");
    printf("< 2 >  Deposit\n");
    printf("< 3 >  Withdraw\n");
    printf("< 4 >  Exit\n\n");
    
}

//Check Balance

void checkBalance(float balance) {
    printf("You Choose to See your Balance\n");
    printf("\n\n****Your Available Balance is:   $%.2f\n\n", balance);
    
}

//money deposit
float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    printf("****Enter your amount to Deposit\n");
    scanf("%f", &deposit);
    
    
    balance += deposit;
    
    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;
    
}
//money withdraw

float moneyWithdraw(float balance) {
    float withdraw;
    bool back = true;
    
    printf("You choose to Withdraw a money\n");
    printf("$$$$Your Balance is: $%.2f\n\n", balance);
    
    while (back) {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &withdraw);
    
    
    if (withdraw < balance) {
        back = false;
        balance -= withdraw;
        printf("\n$$$$Your withdrawing money is:  $%.2f\n", withdraw);
        printf("****Your New Balance is:   $%.2f\n\n", balance);
        
    }
    
        else  {
        
        printf("+++You don't have enough money+++\n");
        printf("Please contact to your Bank Customer Services\n");
        printf("****Your Balance is:   $%.2f\n\n", balance);
    
    }
    }
    return balance;
    
    
}

//exit menu

void menuExit() {
    printf("--------------Take your receipt!!!------------------\n");
    printf("-----Thank you for using ATM Banking Machine!!!-----\n");
    
    
    
}

//error message

void errorMessage() {;
    printf("+++!!!You selected invalid number!!!+++\n");
}



/* Sample Output

******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
< 1 >  Check Balance
< 2 >  Deposit
< 3 >  Withdraw
< 4 >  Exit

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
Your Selection: 1
You Choose to See your Balance
****Your Available Balance is:   $15000.00

=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
Would you like to do another transaction:
< 1 > Yes
< 2 > No
1
******************Hello!*******************
**********Welcome to ATM Banking***********

****Please choose one of the options below****
< 1 >  Check Balance
< 2 >  Deposit
< 3 >  Withdraw
< 4 >  Exit */