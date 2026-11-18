#include<stdio.h>
void main()
{
 int choice;
 int mark1,mark2,mark3,mark4,mark5;
 int pass;
 int roll_number,total;
 char name[20];
 float average;
 char grade;
char result[10];
do
{
printf("STUDENT MARKS MANAGEMENT SYSTEM");
printf("--------------------------------");
printf("1.enter student details");
printf("2.calculate result");
printf("3.display result");
printf("4.Exit");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case1:
 printf("\nEnter roll number:");
 scanf("%d",&roll_number);
 printf("\nEnter student name:");
 scanf("%c",&name);
 printf("\nEnter mark 1:");
 scanf("%d",&mark1);
 printf("\nEnter mark 2:");
 scanf("%d",&mark2);
 printf("\nEnter mark 3:");
 scanf("%d",&mark3);
 printf("\nEnter mark 4:");
 scanf("%d",&mark4);
 printf("\nEnter mark 5:");
 scanf("%d",&mark5);
 total=mark1+mark2+mark3+mark4+mark5;
 average=total/5.0;
if(average>=60)
{
 if(average>=90)
  grade='A';
 else if(average>=80)
  grade='B';
 else if(average>=70)
  grade='C';
 else
  grade='D';
 printf("PASS");
 }
 else
 {
  grade='F';
  printf("FAIL");
 }
 break;
 case2:
  printf("\nSTUDENT RESULT\n");
  printf("\n-----------------\n");
  printf("\nROLL_NUMBER:%d\n",roll_number);
  printf("\nNAME:%s\n",name);
  printf("\nTOTAL:%d\n",total);
  printf("\nAVERAGE:%f\n",average);
  printf("\nGRADE:%c\n",grade);
  printf("\nRESULT:%s\n",result);
  break;
 case3:
  printf("\nExit\n");
  break;
  }
  }
  while(choice!=3);
  }