#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
//#include<conio.h>
//#include<windows.h>

void loginscreen();
void title();//Display title
void MainMenu();//display main menu
void LoginScreen();//for login screen
void Add_new();//to add record
void DisplayRecord();
void SearchRecord();
void EditRecord();
void DeleteRecord();
void Exit();
void gender();



struct Data
{
    char FirstName[20];
    char MiddleName[20];
    char LastName[20];
    // char Address[50];
    char ContactNo[11];
    char Age[5];
    char Village[20];
    char Taluka[20];
    char District[20];
    char State[20];
    char Email[20];
    char Doctor[20];
    char Reason[30];
    char PinCode[10];
    
};
struct Data p,temp_c;

void Record()
{
    system("cls");
    
}

int main(void) {
  // designing name of hospital
  
  title();
  printf("\n\n\t\t\t\tWELCOME TO \t\n\n\tPCET HOSPITAL MANAGEMENT SYSTEM\n\n\n");
  printf("***************************************************\n");

  loginscreen();
    system("cls");
  MainMenu();
  
  return 0;
}






void loginscreen(){
  
  int try_no=0;
  char username[10],password[10];
  char original_password[10]="1234";
  char original_username[10]="pcet";
  do{
  printf("\n\n\t\t\t\tUSERNAME:");
  gets(username); 
  printf("\n\n\t\t\t\tPASSWORD:");
  gets(password);  
  if(strcmp(username,original_username)==0 && strcmp(password,original_password)==0)
  {
    printf("\n\nLogged in Successfully!!!\n\n");
    break;
    // needs the next function call here; next screen;

  }
  else{
  printf("\n\nEnter valid username or password :(\n TRY AGAIN\n");
  try_no++;
  printf("\n%d attempt left\n",4-try_no);
  printf("*************************************************\n");

  }
  }
  while(try_no<=3);
  if(try_no>3){
    printf("\n\nYou have crossed the limit! You can't Login Now\n\n");
    exit(0);
  }  
  }






void title(){
  printf("**************************************************\n");
  // printf("*\t\t\t\t\t\t\t\t\t*\n");
  printf("\n\t\tPCET HOSPITAL\t\t\t\n\n");
  // printf("*\t\t\t\t\t\t\t\t\t*\n");
  printf("**************************************************\n");
  }




void MainMenu()
  {
    system("cls");
    int select;
    title();
    printf("\n\n\n\n\n\t\t\t\t1. Add New Patient's Information in the Record\n");
    printf("\n\t\t\t\t2. Display All Patient's Record\n");
    printf("\n\t\t\t\t3. Search Records\n");
    printf("\n\t\t\t\t4. Edit Record\n");
    printf("\n\t\t\t\t5. Delete Record\n");
    printf("\n\t\t\t\t6. Exit\n");
    printf("\n\n\n\n\t\t\t\tYour Choice: ");
    scanf("%d",&select);
    system("cls");
    switch(select)
    {
      case 1:
      Add_new();
      break;

      case 2:
      //FunList();
      DisplayRecord();
      break;

      case 3:
      //SearchRecord();
      break;

      case 4:
      //EditRecord();
      break;

      case 5:
      //DeleteRecord();
      break;

      case 6:
      //Exit();
      exit(0);
      break;

      default:
      printf("\t\t\tInvalid Input. Try Again!!\n\t\t\tEnter Again : \n");
      //getch();

    }
  }

void Add_new()
{
  system("cls");
  title();

  char option;
  int valid;

  FILE *ek;
  ek = fopen("Record.txt","a+");
  printf("\n\n\t\t\t*************** ADD PATIENT RECORD ***************\n");



  label_1:
  {
  printf("\n\t\t\tFirstName : ");
  scanf("%s",p.FirstName);
  p.FirstName[0]=toupper(p.FirstName[0]);
  }
  if(strlen(p.FirstName)>20 || strlen(p.FirstName)<2)
  {
    printf("\n\t Invalid \t The max Range for first name is 20 and min range is 2\n");
    goto label_1;

  }
  else 
  {
    for(int b=0;b<strlen(p.FirstName);b++)
    {
      if (isalpha(p.FirstName[b]))
      {
        valid=1;
      }

      else
      {
        valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\t First Name contains Invalid Character . Enter Again :\n");
      goto label_1;
    }
  }

label_2:{
  printf("\n\t\t\tMiddle Name : ");
  scanf("%s",p.MiddleName);
  p.MiddleName[0]=toupper(p.MiddleName[0]);
  }
  if(strlen(p.MiddleName)>20 || strlen(p.MiddleName)<2)
  {
    printf("\n\t Invalid \t The max Range for first name is 20 and min range is 2\n");
    goto label_2;

  }
  else 
  {
    for(int b=0;b<strlen(p.MiddleName);b++)
    {
      if (isalpha(p.MiddleName[b]))
      {
        valid=1;
      }

      else
      {
        valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\t Middle Name contains Invalid Character . Enter Again :\n");
      goto label_2;
    }
  }
  label_3:{
  printf("\n\t\t\tLast Name : ");
  scanf("%s",p.LastName);
  p.LastName[0]=toupper(p.LastName[0]);
  }
  if(strlen(p.LastName)>20 || strlen(p.LastName)<2)
  {
    printf("\n\t Invalid \t The max Range for first name is 20 and min range is 2\n");
    goto label_3;

  }
  else 
  {
    for(int b=0;b<strlen(p.LastName);b++)
    {
      if (isalpha(p.LastName[b]))
      {
        valid=1;
      }

      else
      {
        valid=0;
        break;
      }
    }
  }

    if(!valid)
    {
      printf("\n\t\t Last Name contains Invalid Character . Enter Again :\n");
      goto label_3;
    }

fputs("\n", ek);
fputs("Name of patient : ", ek);    
fputs(p.FirstName, ek);
fputs(" ", ek);
fputs(p.MiddleName, ek);
fputs(" ", ek);
fputs(p.LastName, ek);
fputs("\n", ek);
    

char gen;
gen_switch:{


printf("\n\t\tGENDER (M/m OR F/f OR T/t) :");
scanf(" %c",&gen);
}
fputs("Gender:",ek);
switch (gen)
{
case 'M':
case 'm':
  fputs("Male",ek);
  break;
case 'F':
case 'f':
  fputs("Female",ek);
  break;
case 'T':
case 't':
  fputs("Transgender",ek);
  break;
default:
  printf("Invalid Input !\t Enter Again:\n");
  goto gen_switch;
  break;
}
  


label_4:{
printf("\n\t\t\tContact Number : ");
scanf("%s",p.ContactNo);
}

if(strlen(p.ContactNo)!=10)
  {
    printf("\n\t Invalid \t Check the number once again!! 10 digit numbers required :)\n");
    goto label_4;

  }
  else 
  {
    for(int b=0;b<strlen(p.ContactNo);b++)
    {
      if (isdigit(p.ContactNo[b]))
      {
        valid=1;
      }

      else
      {
        valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\tNumber contains character other than digits!!! Enter Again :\n");
      goto label_4;
    }      

  }
label_5:{
printf("\n\t\t\tAge : ");
scanf("%s",p.Age);
}
if(strlen(p.Age)>4)
  {
    printf("\n\t Invalid!\tEnter Again:\n");
    goto label_5;

  }
  else 
  {
    for(int b=0;b<strlen(p.Age);b++)
    {
      if (isdigit(p.Age[b]))
      {
        valid=1;
      }

      else
      {
        valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\tAge contains character other than digits!!! Enter Again :\n");
      goto label_5;
    }      

  }

printf("\n\t\t\tENTER ADDRESS : \n");
label_6:{
printf("\n\t\t\tVillage :");
scanf("%s",p.Village);
}
if(strlen(p.Village)>20 || strlen(p.Village)<2)
  {
    printf("\n\t Invalid \t The max Range for village name is 20 and min range is 2\n");
    goto label_6;

  }
  else 
  {
    for(int b=0;b<strlen(p.Village);b++)
    {
      if (isalpha(p.Village[b]))
        valid=1;

      else
      { valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\t Village Name contains Invalid Character . Enter Again :\n");
      goto label_6;
    }
  }
  
label_7:{  
printf("\n\t\t\tTaluka :");
scanf("%s",p.Taluka);}
if(strlen(p.Taluka)>20 || strlen(p.Taluka)<2)
  {
    printf("\n\t Invalid \t The max Range for taluka name is 20 and min range is 2\n");
    goto label_7;

  }
  else 
  {
    for(int b=0;b<strlen(p.Taluka);b++)
    {
      if (isalpha(p.Taluka[b]))
        valid=1;

      else
      { valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\t Taluka Name contains Invalid Character . Enter Again :\n");
      goto label_7;
    }
  }

label_8:{
printf("\n\t\t\tDistrict :");
scanf("%s",p.District);
}
if(strlen(p.District)>20 || strlen(p.District)<2)
  {
    printf("\n\t Invalid \t The max Range for District name is 20 and min range is 2\n");
    goto label_8;

  }
  else 
  {
    for(int b=0;b<strlen(p.District);b++)
    {
      if (isalpha(p.District[b]))
        valid=1;

      else
      { valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\t District Name contains Invalid Character . Enter Again :\n");
      goto label_8;
    }
  }



label_9:{
printf("\n\t\t\tState :");
scanf("%s",p.State);}
if(strlen(p.State)>20 || strlen(p.State)<2)
  {
    printf("\n\t Invalide!! The max Range for State name is 20 and min range is 2\n");
    goto label_9;

  }
  else 
  {
    for(int b=0;b<strlen(p.State);b++)
    {
      if (isalpha(p.State[b]))
        valid=1;

      else
      { valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\t State Name contains Invalid Character . Enter Again :\n");
      goto label_9;
    }
  }
label_10:{
printf("\n\t\t\tPincode :");
scanf("%s",p.PinCode);}
if(strlen(p.PinCode)>10 || strlen(p.PinCode)<2)
  {
    printf("\n\t Invalide!! \n");
    goto label_10;

  }
  else 
  {
    for(int b=0;b<strlen(p.PinCode);b++)
    {
      if (isdigit(p.PinCode[b]))
        valid=1;

      else
      { valid=0;
        break;
      }
    }

    if(!valid)
    {
      printf("\n\t\t PinCode contains Invalid Character\t Enter Again :\n");
      goto label_10;
    }
  }


p.Village[0]=toupper(p.Village[0]);
p.Taluka[0]=toupper(p.Taluka[0]);
p.District[0]=toupper(p.District[0]);
p.State[0]=toupper(p.State[0]);





fputs("\n", ek);
fputs("Contact Number: ", ek);
fputs(p.ContactNo, ek);
fputs("\n", ek);
fputs("Age : ", ek);
fputs(p.Age, ek);
fputs("\n", ek);
fputs("***ADDRESS*** \n", ek);
fputs("Village : ", ek);   fputs(p.Village, ek);
fputs("\nTaluka : ", ek);   fputs(p.Taluka, ek);
fputs("\nDistrict : ", ek);   fputs(p.District, ek);
fputs("\nState : ", ek);   fputs(p.State, ek);
fputs("\nPinCode : ", ek);   fputs(p.PinCode, ek);
fputs("\n", ek);


fclose(ek);


}


void DisplayRecord(){
  FILE *two;
  two = fopen("Record.txt","r");
  if(two==NULL)
    printf("Error Occurred while Opening the File!");
  else
  {
      char c;
      c = fgetc(two);
        printf("\nContent of File is:\n\n");
        while (c != EOF)
        {
          printf("%c",c);
          c = fgetc(two);
        }
        
        
  }
	fclose(two);
}


