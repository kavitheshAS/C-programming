#include<stdio.h>
int main()
{
    int d,m,y;
    printf("enter the day, month and year");
    scanf("%d%d%d",&d,&m,&y);
    if(y%4==0 && (y%400==0 || y%100!=0))
    {
        if(m==1 || m==3 || m==5 ||m==7 || m==8 || m==10)
        {
            if(d>=0 && d<=30)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==31)
            {
                d=1;
                m=m+1;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else if(m==4 || m==6 || m==9 ||m==11)
        {
            if(d>=0 && d<=29)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==30)
            {
                d=1;
                m=m+1;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else if(m==12)
        {
            if(d>=0 && d<=30)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==31)
            {
                d=1;
                m=1;
                y=y+1;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else if(m==2) 
        {
            if(d>=0 && d<=28)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==29)
            {
                d=1;
                m=3;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else /* if months not between 1 and 12*/
        {
            printf("invalid input");
        }
    }
    else /*for non leap years*/ 
    {
        if(m==1 || m==3 || m==5 ||m==7 || m==8 || m==10)
        {
            if(d>=0 && d<=30)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==31)
            {
                d=1;
                m=m+1;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else if(m==4 || m==6 || m==9 ||m==11)
        {
            if(d>=0 && d<=29)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==30)
            {
                d=1;
                m=m+1;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else if(m==12)
        {
            if(d>=0 && d<=30)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==31)
            {
                d=1;
                m=1;
                y=y+1;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else if(m==2) 
        {
            if(d>=0 && d<=27)
            {
                d=d+1;
                printf("%d/%d/%d",d,m,y);
            }
            else if(d==28)
            {
                d=1;
                m=3;
                printf("%d/%d/%d",d,m,y);
            }
            else
            {
                printf("invalid input");
            }
        }
        else /* if months not between 1 and 12*/
        {
            printf("invalid input");
        }
        
    }
    return 0;
}