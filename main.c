//
//  main.c
//  number to word
//
//  Created by Prionto Hira on 26/7/26.
//

#include <stdio.h>
void printNumber0to999(int num){
         int temp;

    temp=num;
    if(temp<20){
        
        switch (temp)
        {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        case 10:
            printf("Ten ");
            break;
        case 11:
            printf("Eleven ");
            break;
        case 12:
            printf("Twelve ");
            break;
        case 13:
            printf("Thirteen ");
            break;
        case 14:
            printf("Fourteen ");
            break;
        case 15:
            printf("Fifteen ");
            break;
        case 16:
            printf("Sixteen ");
            break;
        case 17:
            printf("Seventeen ");
            break;
        case 18:
            printf("Eighteen ");
            break;
        case 19:
            printf("Nineteen ");
            break;      
        
        default:
            break;
        }
    }
    
    else if(temp>=20 && temp<100){
        int firstDigit=temp/10;
        int secondDigit=temp%10;
        switch (firstDigit)
        {
        case 2:
            printf("Twenty ");
            break;
        case 3:
            printf("Thirty ");
            break;
        case 4:
            printf("Forty ");
            break;
        case 5:
            printf("Fifty ");
            break;
        case 6:
            printf("Sixty ");
            break;
        case 7:
            printf("Seventy ");
            break;
        case 8:
            printf("Eighty ");
            break;
        case 9:
            printf("Ninety ");
            break;      
        
        default:
            break;
        }
        
        printNumber0to999(secondDigit);
    }
    else if(temp>=100 && temp<1000){
        int firstDigit=temp/100;
        int secondDigit=temp%100;
        printNumber0to999(firstDigit);
        printf("Hundred ");
        printNumber0to999(secondDigit);
    }
}
int main(void) {
   
    int input;
         printf("Enter a number: ");
    scanf("%d",&input);
    int array[4];
    
    for(int i=0;i<4;i++){
        array[i]=input%1000;
        input/=1000;
    }
    for(int i=3;i>=0;i--){
        if(array[i]!=0){
            printNumber0to999(array[i]);
            switch (i)
            {
            case 1:
                printf(" Thousand ");
                break;
            case 2:
                printf(" Million ");
                break;
            case 3:
                printf(" Billion ");
                break;      
            
            default:
                break;
            }
        }
    }

    return 0;
}
