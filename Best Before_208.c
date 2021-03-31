#include<stdio.h>
int main()
{
    int date1,date2,year1,year2,month1,month2,day1,day2;
    scanf("%d\n",&date1);
    scanf("%d",&date2);
    year1=date1%100;
    year2=date2%100;
    month1=(date1/100)%100;
    month2=(date2/100)%100;
    day1=(date1/10000)%100;
    day2=(date2/10000)%100;
    if(month1==1||month1==3||month1==5||month1==7||month1==8||month1==10||month1==12)
    {
        if(day1>31)
            printf("W");
        else
        {
            if(month2==1||month2==3||month2==5||month2==7||month2==8||month2==10||month2==12)
            {
                if(day2>31)
                    printf("W");
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2==4||month2==6||month2==9||month2==11)
            {
                if(day2>30)
                    printf("W");
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2==2)
            {
                if(day2>29)
                    printf("W");
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2>12)
                printf("W");
        }
    }
    else if(month1==4||month1==6||month1==9||month1==11)
    {
        if(day1>30)
        {
            printf("W");
        }
        else
        {
            if(month2==1||month2==3||month2==5||month2==7||month2==8||month2==10||month2==12)
            {
                if(day2>31)
                {
                    printf("W");
                }
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2==4||month2==6||month2==9||month2==11)
            {
                if(day2>30)
                {
                    printf("W");
                }
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2==2)
            {
                if(day2>29)
                {
                    printf("W");
                }
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2>12)
                printf("W");
        }
    }
    else if(month1==2)
    {
        if(day1>29||day2>29)
        {
            printf("W");
        }
        else
        {
            if(month2==1||month2==3||month2==5||month2==7||month2==8||month2==10||month2==12)
            {
                if(day2>31)
                {
                    printf("W");
                }
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2==4||month2==6||month2==9||month2==11)
            {
                if(day2>30)
                {
                    printf("W");
                }
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2==2)
            {
                if(day2>29)
                {
                    printf("W");
                }
                else
                {
                    if(year2>year1)
                        printf("B");
                    else if(year2<year1)
                        printf("L");
                    else if(year1==year2)
                    {
                        if(month2>month1)
                            printf("B");
                        else if(month2<month1)
                            printf("L");
                        else if(month1==month2)
                        {
                            if(day2>day1)
                                printf("B");
                            else if(day2<day1)
                                printf("L");
                        }
                    }
                }
            }
            else if(month2>12)
            {
                printf("W");
            }
        }
    }
    else if(month1>12)
    {
        printf("W");
    }
}

