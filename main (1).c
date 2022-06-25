/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int choice,n=3;
  char username[100];
  char emailid[100];
  long long userphone;
  char passworduser[100];
void createaccount();
void login();
struct users{
    char name[100];
    long long phoneno;
    char email[100];
    char password[100];
}user[3];
int main()
{
  strcpy(user[0].name,"Madhu");
  user[0].phoneno=9845371263;
  strcpy(user[0].email,"shreesirishree36@gmail.com");
  strcpy(user[0].password,"Shree");
  strcpy(user[1].name,"Lakshmi");
  user[1].phoneno=9845554823;
  strcpy(user[1].email,"lakshmilakmu123@gmail.com");
  strcpy(user[1].password,"lakshmi123@");
  strcpy(user[2].name,"Daksha Ullas");
  user[2].phoneno=8648921234;
  strcpy(user[2].email,"dakshaullaslak@gmail.com");
  strcpy(user[2].password,"8906**");
  printf("Get started!!!!\n\a");
  printf("Create Account if u dont have one or Login by entering 1:login 2:Create Account\n\a");
  scanf("%d",&choice);
  if(choice==1)
  login();
  else if(choice=2)
  createaccount();
  else
  printf("MAKE A CORRECT ENTRY\n\a");
    return 0;
}
void login()
{
    int checklogin=0,checkpass=0;
    printf("******LOGIN PAGE*******\n\a");
    printf("Email Id: ");
    scanf(" %s",&emailid);
    printf("\a\nPassword: ");
    scanf(" %s",&passworduser);
    for(int i=0;i<3;i++)
    {
        if(strcmp(emailid,user[i].email)==0)
        ++checklogin;
    }
    if(checklogin==0)
    {
        printf("NO ACCOUNT IN THE ABOVE EMAIL ID. PLEASE CREATE AN ACCOUNT AND PROCEED\n\a");
        createaccount();
    }
    else
    {
        for(int k=0;k<n;k++)
        {
            if(strcmp(user[k].password,passworduser)==0)
            ++checkpass;
        }
        if(checkpass==0)
        {
            printf("***INVALID PASSWORD***\n**PLEASE LOGIN AGAIN\n\a");
            login();
        }
        else
        printf("***LOGIN SUCCESSFUL***\n\a");
    }
}
void createaccount()
{
    int checkcreate=0;
    printf("Name: ");
    scanf(" %[^\n]%*c",&user[n].name);
    printf("\n\aPhone No: ");
    scanf("%lld",&user[n].phoneno);
    printf("\n\aEmail Id: ");
    scanf(" %s",&user[n].email);
    printf("\n\aPassword: ");
    scanf(" %s",&user[n].password);
    for(int j=0;j<n;j++)
    {
        if(strcmp(user[j].email,user[n].email)==0)
        {
        ++checkcreate;
        break;
        }
    }
    if(checkcreate!=0)
    {
        printf("THIS EMAIL ID IS ALREADY REGISTERED\n\a PLEASE LOGIN TO PROCEED\n\a");
        login();
    }
    else
    {
    ++n;
    printf("\n\a ***WELCOME YOUR ACCOUNT HAS BEEN CREATED***\a\n");
    }
    printf("TOTAL NO OF USERS = %d\n\a",n);
}
