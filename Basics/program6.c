/*
    Start 
        Accept percentage from user 
            If percentage is less than 0 and greater than 100
                Display as invalid input
            If percentage is greater than 0 and less than 35
                Display as fail
             If percentage is greater than 35 and less than 50
                Display as Pass class
              If percentage is greater than 50 and less than 60
                Display as second class  
              If percentage is greater than 60 and less than 70
                Display as first class                  
              If percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop

*/

#include<stdio.h>

void DisplayClass(float fperc)
{
    if ((fperc < 0.0f) || (fperc > 100.0f))
    {
        printf("Unable to proceed as input is invalid\n");
        return;
    }

    if((fperc >= 0.0f ) && ( fperc < 35.0f))
    {
        printf("You are fail\n");
    }
    else if ((fperc >= 35.0f) && ( fperc <50.0f))
    {
        printf("pass class\n");
    }
    else if ((fperc >= 50.0f) && ( fperc <60.0f))
    {
        printf("Second Class\n");
    }
    else if ((fperc >= 60.0f) && ( fperc <70.0f))
    {
        printf("First class\n");
    }
    else if ((fperc >= 70.0f) && ( fperc <100.0f))
    {
        printf("first class with Destinction \n");
    }
    
}

int main()
{
    float fValue = 0.0f;
    
    printf("Please Enter your percentage :\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}