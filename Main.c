#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

void Triangle(int num);
int main(void){
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\n\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\n",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num;char ch;
    while(1){
        printf("\n\e[1;36mHow Many Rows Do You Want to Create Your Triangle? :\e[0m ");scanf("%d",&num);
        if (num<=1)
           continue;
        Triangle(num);
        while(1){
            printf("\n\e[1;35mWould You Like To Contunie (Y/N) ? :\e[0m ");ch=getche();
            if (ch=='Y' || ch=='y'){
                Sleep(2000);break;
            }
            else if (ch=='N' || ch=='n'){
                time_t Time2;
                Time2=time(NULL);
                Tm=localtime(&Time2);
                printf("\n\e[1;32mHave a Good Days...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                printf("\n\e[1mProcess returned 0 (0x0)   execution time :%lf\nPress any key to continue.",difftime(Time2,Time));
                getche();_exit(0);
            }
            else{
                printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
            }
        }
    }
}