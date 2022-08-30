#include <stdio.h>

int main()
{   
    
    //Write a program to print size of an int, a float, a char and a double type variable
    char sizeof_char;
    printf("Enter a Char data type:");
    scanf("%c",&sizeof_char);
    int sizeof_int,p1,p2,p3,p4;
    printf("Enter a Integer data type:");
    scanf("%d",&sizeof_int);
    float sizeof_float;
    printf("Enter a float data type:");
    scanf("%f",&sizeof_float);
    double sizeof_double;
    printf("Enter a Double data type :");
    scanf("%lf",&sizeof_double);
    printf("Size of Integer data type '%d' is %d\n",sizeof_int,sizeof(sizeof_int));
    printf("Size of Char data type '%c' is %d\n",sizeof_char,sizeof(sizeof_char));
    printf("Size of Float data type '%f' is %d\n",sizeof_float,sizeof(sizeof_float));
    printf("Size of Double data type '%lf' is %d\n",sizeof_double,sizeof(sizeof_double));
    printf("\n############**********************##############\n");
    //Write a program which takes a character as an input and displays its ASCII code.
    char input_char_;
    printf("Enter a character :");
    scanf("%c",&input_char_);
    printf("Entered character '%c' has an ASCII value of '%d'",input_char_,input_char_);
    printf("\n############**********************##############\n");
    
    //Write a program to print unit digit of a given number
    int input_number,unit_digit;
    printf("Enter a Number :");
    scanf("%d",&input_number);
    printf("Entered NUmber is :%d\n",input_number);
    unit_digit=input_number%10;
    printf("Unit digit of a given number '%d' is :%d\n",input_number,unit_digit);
    printf("\n############**********************##############\n");
    //Write a program to print a given number without its last digit.
    int input_number1,without_unit_digit;
    printf("Enter a Number :");
    scanf("%d",&input_number1);
    printf("Entered NUmber is :%d\n",input_number1);
    without_unit_digit=input_number1/10;
    printf("Given number without Unit digit is :%d\n",without_unit_digit);
    printf("\n############**********************##############\n");
    //Write a program to swap values of two int variables
    int first_num1,second_num1,temp;
    printf("Enter First NUmber :");
    scanf("%d",&first_num1);
    printf("\n");
    printf("Enter Second NUmber :");
    scanf("%d",&second_num1);
    printf("\n");
    printf("Before Swap First Number is '%d', Second NUmber is '%d'\n",first_num1,second_num1);
    temp=second_num1;
    second_num1=first_num1;
    first_num1=temp;
    printf("Using temporary variable, After Swap First Number is '%d', Second NUmber is '%d'\n",first_num1,second_num1);
    printf("\n############**********************##############\n");
    //Write a program to swap values of two int variables without using a third variable.
    int first_num,second_num,sum_;
    printf("Enter First NUmber :");
    scanf("%d",&first_num);
    printf("\n");
    printf("Enter Second NUmber :");
    scanf("%d",&second_num);
    printf("\n");
    printf("Before Swap First Number is '%d', Second NUmber is '%d'\n",first_num,second_num);
    sum_=first_num+second_num;
    second_num=first_num;
    first_num=sum_-second_num;
    printf("After Swap First Number is '%d', Second NUmber is '%d'\n",first_num,second_num);
    printf("\n############**********************##############\n");
    //Write a program to input a three-digit number and display the sum of the digits.
    int input_number11,unit_digit_,tens_digit,tens_digit_,hunderds_digit_,sum_three_digits;
    printf("Enter a three digit Number :");
    scanf("%d",&input_number11);
    unit_digit_=input_number11%10;
    tens_digit_=input_number11/10;
    hunderds_digit_=input_number11/100;
    tens_digit=tens_digit_%10;
    sum_three_digits=unit_digit_+tens_digit+hunderds_digit_;
    printf("Sum of Digits in 3 digit number '%d' is '%d'\n",input_number11,sum_three_digits);
    printf("\n############**********************##############\n");
    //Write a program to find the position of first 1 in LSB.
    int input_number_1,i,k=1;
    printf("Enter a NUmber :");
    scanf("%d",&input_number_1);
    if(input_number_1==1)
    {
        printf("Entered NUmber is %d, first position of 1 is at index 1",input_number_1);
    }
    else{
        while(input_number_1>1)
        {   
            i=input_number_1%2;
            if (i==1)
            {
                printf("Entered NUmber is %d, first position of 1 is at index from LSB side(Right to Left) %d",input_number_1,k);
                break;
            }
            else{
                input_number_1=input_number_1/2;
                ++k;
            }

        }
        printf("Entered NUmber is %d, first position of 1 is at index from LSB side(Right to Left) %d",input_number_1,k);
    }
    printf("\n############**********************##############\n");
    //Write a program to check whether the given number is even or odd using a bitwise operator.
    int odd_even_num;
    printf("Enter a Integer :");
    scanf("%d",&odd_even_num);
    if (odd_even_num&1==1)
    {
        printf("Entered Number %d is Odd\n",odd_even_num);
    }
    else{
        printf("Entered Number %d is Even\n",odd_even_num);
    }
    printf("\n############**********************##############\n");
    //Write a program to make the last digit of a number stored in a variable as zero.
    int last_digit_of_number,last_digit_of_number_;
    printf("Enter a Integer :");
    scanf("%d",&last_digit_of_number);
    if (last_digit_of_number>-10 &last_digit_of_number<10)
    {
        printf("Entered NUmber is %d.\nAfter replacing last digit of a number with zero Entered Number is %d:\n",last_digit_of_number,0);
    }
    else
    {
        last_digit_of_number_=(last_digit_of_number/10)*10;
        printf("Entered NUmber is %d.\nAfter replacing last digit of a number with zero Entered Number is %d:\n",last_digit_of_number,last_digit_of_number_);
    }
    printf("\n############**********************##############\n");
    //Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)
    int last_digit_of_number1,last_digit_1of_number_digit,input_digit;
    printf("Enter a Integer:");
    scanf("%d",&last_digit_of_number1);
    printf("Enter a digit to append:");
    scanf("%d",&input_digit);
    if (last_digit_of_number1>0)
    {
        last_digit_1of_number_digit=(last_digit_of_number1*10)+input_digit;
    }
    else
    {
        last_digit_1of_number_digit=(last_digit_of_number1*10)-input_digit;
    }
    printf("Entered NUmber is %d.\nAfter appending digit at the end to entered NUmber, Now  Number is %d:",last_digit_of_number1,last_digit_1of_number_digit);
    printf("\n############**********************##############\n");
    //Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.
    float input_inr,output_dollar;
    printf("Enter a amount in Indian INR:");
    scanf("%f",&input_inr);
    output_dollar=input_inr*76.23;
    printf("Indian rupee '%f', equivalent to USD is :%f",input_inr,output_dollar);
    printf("\n############**********************##############\n");
    //Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
    int right_shifted_digit,p,first_two_digits,first_digit,last_di,sec_di;
    printf("Enter a three digit Number :");
    scanf("%d",&p);
    first_two_digits=p/10;
    sec_di=first_two_digits/10;
    last_di=first_two_digits%10;
    first_digit=p%10;
    right_shifted_digit=(first_digit*100)+last_di+(sec_di*10);
    printf("Entered number '%d', right shifted digit is :%d",p,right_shifted_digit);
    printf("\n############**********************##############\n");
    return 0;
}



