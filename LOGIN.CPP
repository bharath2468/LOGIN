#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int pass,pass1,c;
char user[10],user1[10];
clrscr();
printf("\n\n\n\t\t\tCREATE ACCOUNT");
printf("\n\n ENTER THE USERNAME = ");
scanf("%s",user);
printf("\n ENTER FOUR DIGIT PASSCODE = ");
scanf("%d",&pass);
clrscr();
printf("\n\n\n\t\t\tLOGIN CREDENTIALS");
printf("\n\n ENTER USERNAME = ");
scanf("%s",&user1);
printf("\n ENTER PASSCODE = ");
scanf("%d",&pass1);
c=strcmp(user,user1);
if(pass==pass1&&c==0){
printf("\n\t\t***LOGIN SUCCESSFULL***");
}
else
{
printf("\n\n\t*INVALID USERNAME OR PASSCODE* ");
}
getch();
}