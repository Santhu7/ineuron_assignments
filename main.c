/******************************************************************************

Assignment 1

*******************************************************************************/
#include <stdio.h>

int main()
{
    /******************************************************************************
    Write a program to print Hello Students on the screen.
    *******************************************************************************/
    printf("Solution1\n");
    printf("Hello Students\n");
    printf("\n*******************************************************************************\n");
    /******************************************************************************
    Write a program to print Hello in the first line and Students in the second line.
    *******************************************************************************/
    printf("Solution2\n");
    printf("Hello\nStudents\n");
    printf("\n*******************************************************************************\n");
    /******************************************************************************
    Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
    *******************************************************************************/
    printf("Solution3\n");
    printf("\"MySirG\"\n");
    printf("\n*******************************************************************************\n");
    /******************************************************************************
    WAP to find the area of the circle. Take radius of circle from user as input and print the
    result in below given format.
    Expected output format – “Area of circle is A having the radius R”. Replace A with area
    & R with radius.
    *******************************************************************************/
    printf("Solution4\n");
    float radius,Area;
    printf("Program to Find Area of A Circle\nEnter the radius of Circe : ");
    scanf("%f",&radius);
    Area=(22.0/7)*(radius*radius);
    radius=7;
    printf("Area of circle is %f having the radius %f",Area,radius);
    printf("\n*******************************************************************************\n");
    /******************************************************************************
    WAP to calculate the length of String using printf function.
    *******************************************************************************/
    printf("Solution5\n");
    int length_string;
    length_string=printf("Hellow World");
    printf("\n");
    printf("length of above string is %d",length_string);
    printf("\n*******************************************************************************\n");
    /******************************************************************************
    WAP to print the name of the user in double quotes.
    Expected output format – “Hello , Amit Kumar”
    *******************************************************************************/
    printf("Solution6\n");
    char user_input_name[160];
    printf("Enter your Name :");
     /*%[^\n] got it from Google-- If i use %s After space characters are getting removed, hence used that, 
     I know in C++ there is getline Function but in C i got That Format specifier from Google*/
    scanf("%[^\n]",&user_input_name);
    printf("\"Hello , %s\"",user_input_name);
    printf("\n");
    printf("\n*******************************************************************************\n");
    /*7.WAP to print “%d” on the screen.*/
    printf("Solution7\n");
    printf("%%d");
    printf("\n");
    printf("\n*******************************************************************************\n");
    /*8. WAP to print “\n” on the screen.*/
    printf("Solution8\n");
    printf("\\n");
    printf("\n");
    printf("\n*******************************************************************************\n");
    /*9. WAP to print “\\” on the screen.*/
    printf("Solution9\n");
    printf("\\\\");
    printf("\n*******************************************************************************\n");
    /******************************************************************************
    WAP to take date as an input in below given format and convert the date format and
    display the result as given below.
    User Input date format – “DD/MM/YYYY” (27/11/2022)
    Output format –
    “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
    *******************************************************************************/
    printf("Solution10\n");
    char date[15];
    printf("Enter date in form of DD/MM/YYYY:");
    scanf("%[^\n]",&date);
    printf("\nDay - %c%c, Month - %c%c, Year - %c%c%c%c",date[0],date[1],date[3],date[4],date[6],date[7],date[8],date[9]);
    printf("\n*******************************************************************************\n");
    /******************************************************************************
    WAP to take time as an input in below given format and convert the time format and
    display the result as given below.
    User Input date format – “HH:MM”
    Output format – “HH hour and MM Minute”
    Example –
    “11:25” converted to “11 Hour and 25 Minute”
    *******************************************************************************/
    printf("Solution11\n");
    char time_[5];
    printf("Enter time in format of HH:MM ");
    scanf("%[^\n]",&time_);
    printf("\n%c%c Hours and %c%c Minutes",time_[0],time_[1],time_[3],time_[4]);
    printf("\n*******************************************************************************\n");
    /*int main()
    {
    int x = printf(“ineuron”);
    printf(“%d”,x);
    return 0;
    }*/
    printf("Solution12 :ineuron7");
    
    return 0;
}

