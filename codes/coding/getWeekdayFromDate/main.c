/*
 write Program to print weekday of given date.In this program we will input a date and then validate the date, if given date is correct, program will print weekday.
 try to make function to validate date first then function to return the day.
 EX:
 Input date (DD-MM-YYYY): 22-02-2015
 Date is correct [22/02/2015].
 week day is: Sunday
 */

/*
 links used
 - https://www.youtube.com/watch?v=TKSpLH9CK_c
 - https://www.mathsisfun.com/leap-years.html
 - https://www.mathsisfun.com/measure/months.html
 */

#include <stdio.h>
#include <stdlib.h>

#define INCORRECT_DATE_FORMAT "Date format is incorrect. \n "
#define SIZE_OF_DATE 10
#define DATE_IS_CORRECT "Date is correct "
#define DATE_IS_NOT_CORRECT "Date is NOT correct "

typedef enum bool {false=0, true=1} bool;
typedef char int8; //-128->127
typedef unsigned char uint8; // 0->255
typedef unsigned short uint16; // 0->25,535
typedef short int16;
typedef int int32;

bool checkString(int8 *s);
void getDayMonthYear(int8 *s, uint16 size, uint16 *d, uint16 *m, uint16 *y);
bool checkLeapYear(uint16 y);
bool checkDate(uint16 d, uint16 m, uint16 y);
void getDayFromDate(uint16 d, uint16 m, uint16 y, int8** s);

int8* DayCode[7]= {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
uint16 MonthCode[12] = {1,4,4,0,2,5,0,3,6,1,4,6};
uint16 CenturyCode[4] = {0,6,4,2};

int main(){

    int8 date[SIZE_OF_DATE];
    uint16 d,m,y;
    //get date
    printf("Enter date in that format: DD-MM-YYYY \n");
    scanf("%s", date);

    if(checkString(date)==false){
        printf(INCORRECT_DATE_FORMAT);
    }else{
        getDayMonthYear(date, SIZE_OF_DATE , &d, &m, &y);
        if(checkDate(d,m,y)){
            printf(DATE_IS_CORRECT);
            printf("[%s]. \n", date);

            int8* weekday;
            //getDayFromDate
            getDayFromDate(d,m,y,&weekday);
            printf("weekday is : %s \n",weekday);
        }else{
            printf(DATE_IS_NOT_CORRECT);
            printf("[%s]. \n", date);
        }
    }

    return 0;
}

bool checkString(int8 *s){
    if(s[2]!='-' || s[5]!='-')
        return false;
    return true;
}

void getDayMonthYear(int8 *s, uint16 size, uint16 *d, uint16 *m, uint16 *y){

    //printf("the date: %s \n", s);

    //extract d,m,y
    int8 d_c[3], m_c[3], y_c[5];
    uint16 counter=0, i=0;

    while(s[counter]!='-'){
        d_c[i] = s[counter];
        i++;
        counter++;
    }
    d_c[2] = '\0'; // to end the day string
    counter++; // to skip the '-'

    i=0;
    while(s[counter]!='-'){
        m_c[i] = s[counter];
        i++;
        counter++;
    }
    m_c[2] = '\0'; // to end the month string
    counter++; // to skip the '-'

    i=0;
    while(s[counter]!='\0'){
        y_c[i] = s[counter];
        i++;
        counter++;
    }
    y_c[4] = '\0'; // to end the year string

    // it works now right after ending each string with character '\0'
    /*
     printf("day: %s \n", d_c);
     printf("month: %s \n", m_c);
     printf("year: %s \n", y_c);
     */

    //convert them from string to integer
    *d = (uint16) atoi(d_c);
    *m = (uint16) atoi(m_c);
    *y = (uint16) atoi(y_c);
    /*
     printf("day: %d \n", *d);
     printf("month: %d  \n", *m);
     printf("year: %d  \n", *y);
     */
}

bool checkLeapYear(uint16 y){
    if(y%4==0 && y%400==0 && y%100!=0) return true;
    else return false;
}

bool checkDate(uint16 d, uint16 m, uint16 y){
    if(m<=0 || m>12) return false;

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        if(d>31) return false;
    }else if(m==4 || m==6 || m==9 || m==11){
        if(d>30) return false;
    }else{
        //month Feb -> 28 days , 29 days (in leap year)
        if(checkLeapYear(y)==true){
            if(d>29) return false;
        }else{
            if(d>28) return false;
        }
    }

    return true;
}

void getDayFromDate(uint16 d, uint16 m, uint16 y, int8* *s){
    uint16 y_1 = y/100;
    uint16 y_2 = y%100;

    uint16 index_1 = d + MonthCode[m-1] + CenturyCode[(y_1+1)%4]  + (y_2) + (y_2/4);
    uint16 index_2 = index_1%7;
    //printf("index_2: %d \n", index_2);

    //printf("DayCode[index_2]: %s \n", DayCode[(int32)index_2]);
    *s = DayCode[index_2];
}
