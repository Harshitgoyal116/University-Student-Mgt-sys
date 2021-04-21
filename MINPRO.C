#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>

			 // Struct Student Structure //

struct student
{
 char fname[10],lname[10];
 char course[10];
 int erp;
 char date[11];
}stu;

long size = sizeof(stu);

			// All funtion modules //

void mgt();
void database();
void help();
void log();
void login();
void first();
void insert();
void display();
void search();
void searchByErp();
void searchByName();
void update();
void updatename();
void updateerp();
void updatecourse();
void del();
void sort();
void sortByErp();
void sortByName();

		  // Creating a file pointer to store the data //

FILE *fp;

//////////////////////// << Main function >> /////////////////////////////

void main()
{
  int i;
 char ch=223,ce=223;

		      // Starting work in program //

 textbackground(YELLOW);
 clrscr();
 _setcursortype(_NOCURSOR);
 delay(200);
 textcolor(BLACK);
 //gotoxy(30,1);
 //cprintf("\n####<< SMSU >>####\n");
 gotoxy(22,12);
 cprintf("\nUniversity Student Management System");

			       // Start loading //

 gotoxy(2,24);
 cprintf("0                            Loading files...                          100");
 gotoxy(2,25);
 for(i=0;i<=73;i++)
 {
  cprintf("%c",ch);
 }
 gotoxy(2,25);
 for(i=0;i<=73;i++)
 {
  delay(30);
  textbackground(YELLOW);
  textcolor(YELLOW + BLACK);
  cprintf("%c",ce);
 }

				// End of loading //

 log();
}

///////////////////////////////// << Login Module >> //////////////////////////////

void log()
{
		  // a is for vertical line.. //
		  // b is for horizontal line.. //
 int a=179,b=196,i;
 char c;
 textbackground(BLACK);
 textcolor(WHITE);
 clrscr();
 while(1)
 {
  gotoxy(25,12);
  printf("Press 1 Key to Login\n");
  gotoxy(25,13);
  printf("Press Escape Key to exit\n");

  // top left corner
  gotoxy(22,10);
  printf("%c",218);

  // for top line

  gotoxy(23,10);
  for(i=0;i<=32;i++)
  {
  printf("%c",b);
  }

  // left line
  gotoxy(22,11);
  printf("%c",a);
  gotoxy(22,12);
  printf("%c",a);
  gotoxy(22,13);
  printf("%c",a);
  gotoxy(22,14);
  printf("%c",a);

  // bottom left corner
  gotoxy(22,15);
  printf("%c",192);

  // top right corner
  gotoxy(55,10);
  printf("%c",191);

  // right line
  gotoxy(55,11);
  printf("%c",a);
  gotoxy(55,12);
  printf("%c",a);
  gotoxy(55,13);
  printf("%c",a);
  gotoxy(55,14);
  printf("%c",a);

  // bottom right corner
  gotoxy(55,15);
  printf("%c",217);

  //for bottom line
  gotoxy(23,15);
  for(i=0;i<=31;i++)
  {
   printf("%c",b);
  }


  c=getch();

  gotoxy(30,20);
  switch(c)
  {
   //for login module press 1

   case '1':
   login();
   break;

   //for Escape key to exit

   case 27:
   textbackground(CYAN);
   clrscr();
   delay(200);
   textcolor(RED);
   gotoxy(25,12);
   cprintf("\nA project by Harshit and Shruti\n");
   gotoxy(10,24);
   textcolor(BLUE);
   cprintf("Thankyou for using University Student Management System..!!");
   delay(1800);
   exit(1);


   default:
   textcolor(RED);
   cprintf("Choose valid option");
   delay(250);
   log();
  }
 getch();
 }
}

///////////////////////////// << Login page >> //////////////////////////////

void login()
{
 int ce=219,ch=223;
 char p1[50]="1234",u1[50]="admin";
 char p2[50],u2[50];
 int i;
 textbackground(BLACK);
 textcolor(WHITE);
 clrscr();
 while(1)
 {

			   // for top border.. //

 gotoxy(22,11);
 for(i=0;i<=28;i++)
 {
 cprintf("%c",ch);
 }

			      //for right border.. //

 gotoxy(50,11);
 cprintf("%c",ce);
 gotoxy(50,12);
 cprintf("%c",ce);
 gotoxy(50,13);
 cprintf("%c",ce);
 gotoxy(50,14);
 cprintf("%c",ce);

			       // for left border.. //

  gotoxy(22,11);
 cprintf("%c",ce);
 gotoxy(22,12);
 cprintf("%c",ce);
 gotoxy(22,13);
 cprintf("%c",ce);
 gotoxy(22,14);
 cprintf("%c",ce);

				 // for bottom bar.. //

 gotoxy(22,15);
 for(i=0;i<=28;i++)
 {
 cprintf("%c",ch);
 }

 gotoxy(33,12);
 printf("User id  ");
 gotoxy(33,13);
 for(i=0;i<=7;i++)
 {
  textcolor(WHITE);
  textbackground(WHITE);
  cprintf("%c",ce);
 }
 gotoxy(35,13);
 textbackground(WHITE);
 textcolor(BLACK);
 cscanf("%s",&u2);
 gotoxy(29,12);

 printf("Login Password ");
 gotoxy(33,13);
 for(i=0;i<=7;i++)
 {
  textbackground(WHITE);
  textcolor(WHITE);
  cprintf("%c",ce);
 }
 gotoxy(35,13);
 textbackground(WHITE);
 textcolor(BLACK);
 cscanf("%s",&p2);
 if((strcmp(u1,u2))==0 && (strcmp(p1,p2))==0)
 {
  gotoxy(25,22);
  textcolor(BLUE);
  textbackground(BLACK);
  cprintf("login sucessfully..!!");

				// Login sound //
  /*
  sound(1000);
  delay(300);
  sound(5000);
  delay(200);
  sound(3000);
  delay(300);
  sound(2000);
  delay(300);
  sound(4000);
  delay(300);
  nosound();
  sound(4000);
  delay(200);
  sound(1000);
  delay(100);
  nosound();  */
  delay(800);

  first();
 }
 else
 {
  gotoxy(25,22);
  textcolor(RED);
  textbackground(BLACK);

  cprintf("\nInvalid user id or password\n");
  delay(1000);

  log();
 }
 getch();
 }
}

///////////////////////////////// << First Page >> /////////////////////////

void first()
{
 char ch;
 while(1)
 {

  textcolor(BLACK);
  textbackground(WHITE);
  clrscr();
  _setcursortype(_NOCURSOR);
  printf("________________________________________________________________________________\n");
  printf("                <== University Student Management System ==>\n");
  printf("________________________________________________________________________________\n");
  printf("================================================================================");
  printf("\t1. Admissions\n");
  printf("\t2. Student Database\n");
  printf("\t3. Student Management\n");
  printf("================================================================================");
  gotoxy(2,23);
  textcolor(BLACK);
  cprintf("  Press any key between (1 and 3) to select your choice");
  gotoxy(2,24);
  cprintf("  Press     key to exit the program and press L key to logout\n");
  gotoxy(11,24);
  textcolor(BLUE);
  cprintf("Esc.");
  gotoxy(49,24);
  textcolor(BLUE);
  cprintf("L");
  gotoxy(1,21);
  printf("===============================================================================");
  gotoxy(32,21);
  textcolor(RED);
  cprintf("* INSTRUCTIONS *");
  gotoxy(2,22);
  printf("  Press     key to open help\n");
  gotoxy(11,22);
  textcolor(BLUE);
  cprintf("TAB");


  ch=getch();
  gotoxy(2,11);
  switch(ch)
  {

   // for esc key..

   case 27:
   textbackground(CYAN);
   clrscr();
   delay(200);
   textcolor(RED);
   gotoxy(25,12);
   cprintf("\nA project by Harshit and Shruti\n");
   gotoxy(10,24);
   textcolor(BLUE);
   cprintf("Thankyou for using University Student Management System..!!");
   delay(1800);
   exit(1);

   // for enter key

   case 13:
   first();
   break;

   // for backspace key <-

   case '\b':
   first();
   break;

   // for tab key

   case 9:
   help();
   break;

   // for shift + 2 (@)....


   case 64:
   sortByName();
   break;

   // for Shift + 1 (!)....

   case 33:
   sortByErp();
   break;

   // for shift + 3 (#)....

   case 35:
   display();
   break;

   // for shift + 4 ($)....

   case 36:
   searchByErp();
   break;

   // for shift + 5 (%)....

   case 37:
   searchByName();
   break;

   case '1':
   insert();
   break;

   case '2':
   database();
   break;

   case '3':
   mgt();
   break;

   case 'l':
   delay(500);
   clrscr();
   delay(200);
   gotoxy(30,12);
   textcolor(RED);
   cprintf("    Logging out System");
   delay(1000);
   log();
   break;

   default:
   gotoxy(2,11);
   textcolor(RED);
   cprintf("  Invalid choice...!!\n");
   delay(1000);
   first();
  }
  getch();
 }
}

//////////////////////////// <<Addmission Module>> ///////////////////////

void insert()
{
 char ch,mydate[11];

 // structure date d is define in dos.h header file
 struct date d;

 // take the date from system and store in variable d
 getdate(&d);

 // sprintf is use to convert the int value in char to store in mydate string variable
 sprintf(mydate, "%02d/%02d/%d", d.da_day,d.da_mon,d.da_year);

 // strcpy is use to copy date from my date into structure of student
 strcpy(stu.date,mydate);

 fp=fopen("stu.txt","a");

 printf(" Enter student first name: ");
 // for clean the buffer....
 fflush(stdin);
 scanf("%s",stu.fname);
 printf(" Enter student last name: ");
 scanf("%s",stu.lname);
 printf(" Enter course: ");
 scanf("%s",stu.course);
 printf(" Enter New ERP.ID.: ");
 scanf("%d",&stu.erp);
 fwrite(&stu,sizeof(stu),1,fp);
 textbackground(BLACK);
 textcolor(WHITE);
 cprintf("\nRecord saved sucessfully...!!\n");
 fclose(fp);
}

///////////////////////////// << Database >> //////////////////////////////

void database()
{
 char ch;
 while(1)
 {
  textcolor(BLACK);
  textbackground(WHITE);
  clrscr();
  printf("________________________________________________________________________________\n");
  printf("               <==University Student Management System==>\n");
  printf("                           <<==Database==>>\n");
  printf("________________________________________________________________________________\n");
  printf("================================================================================");
  printf("\n\t1. View student records\n");
  printf("\t2. Sort student records\n");
  printf("================================================================================");
  gotoxy(2,23);
  textcolor(BLACK);
  cprintf("  Press any key between (1 and 2) to select your choice");
  gotoxy(2,24);
  cprintf("  Press           KEY to back on home page");
  gotoxy(11,24);
  textcolor(BLUE);
  cprintf("BACKSPACE");
  gotoxy(1,22);
  printf("===============================================================================");
  gotoxy(32,22);
  textcolor(RED);
  cprintf("* INSTRUCTIONS *");

  //for making choice to execute without pressing enter key.. //
  ch=getch();

  gotoxy(2,12);
  switch(ch)
  {
   case '\b':
   first();
   break;

   case 13:
   database();
   break;

   case '1':
   display();
   break;

   case '2':
   sort();
   break;

   case 27:
   database();
   break;

   default:
   gotoxy(2,12);
   textcolor(RED);
   cprintf("Invalid choice...!!");
   delay(1000);
   database();
  }
  getch();
 }
}

//////////////////////////// << Display Page >> ////////////////////////

void display()
{
 textcolor(BLACK);
 textbackground(WHITE);
 clrscr();
 printf("____________________________Student Information_________________________________\n\n");

 // For create gap between all columns. //
 printf("  %-15s %-15s %-10s %-10s %s\n","First name","Last name","course","ERP.ID.","Date");
 printf("________________________________________________________________________________\n");
 fp=fopen("stu.txt","r");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 {
  printf("  %-15s %-15s %-10s %-10d %s\n",stu.fname,stu.lname,stu.course,stu.erp,stu.date);
  fflush(stdin);
 }
 fclose(fp);
 textbackground(BLACK);
 textcolor(WHITE);
 cprintf("\nPress any key to continiue....!\n");
}

//////////////////////////// << Student Management>> ////////////////////////

void mgt()
{
 char ch;
 while(1)
 {
  textcolor(BLACK);
  textbackground(WHITE);
  clrscr();
  printf("________________________________________________________________________________\n");
  printf("               <==University Student Management System==>\n");
  printf("                       <<==Student Management==>>\n");
  printf("________________________________________________________________________________\n");
  printf("================================================================================");
  printf("\n\t1. Search student records\n");
  printf("\t2. Modify student records\n");
  printf("\t3. Delete student record\n");
  printf("================================================================================");
  gotoxy(2,23);
  textcolor(BLACK);
  cprintf("  Press any key between (1 and 3) to select your choice");
  gotoxy(2,24);
  cprintf("  Press BACKSPACE KEY to back on home page");
  gotoxy(11,24);
  textcolor(BLUE);
  cprintf("BACKSPACE");
  gotoxy(1,22);
  printf("===============================================================================");
  gotoxy(32,22);
  textcolor(RED);
  cprintf("* INSTRUCTIONS *");

  //for making choice to execute without pressing enter key.. //
  ch=getch();

  gotoxy(2,13);
  switch(ch)
  {
   case '\b':
   first();
   break;

   case 13:
   mgt();
   break;

   case '1':
   search();
   break;

   case '2':
   update();
   break;

   case '3':
   del();
   break;

   case 27:
   mgt();
   break;

   default:
   gotoxy(2,13);
   textcolor(RED);
   cprintf("Invalid choice...!!");
   delay(1000);
   mgt();
  }
  getch();
 }
}

////////////////////////////// << Search Module >> ////////////////////////

void search()
{
 char ch;
 while(1)
 {
  textbackground(WHITE);
  textcolor(BLACK);
  clrscr();
  printf("________________________________________________________________________________\n");
  printf("               <==University Student Management System==>\n");
  printf("                            <<==Search==>>\n");
  printf("________________________________________________________________________________\n");
  printf("================================================================================");
  printf("\n\t1. Search by ERP.ID.\n");
  printf("\t2. Search by Name\n");
  printf("================================================================================");
  gotoxy(2,23);
  textcolor(BLACK);
  cprintf("  Press any key between (1 and 2) to select your choice");
  gotoxy(2,24);
  cprintf("  Press           KEY to back on Management page");
  gotoxy(11,24);
  textcolor(BLUE);
  cprintf("BACKSPACE");
  gotoxy(1,22);
  printf("===============================================================================");
  gotoxy(32,22);
  textcolor(RED);
  cprintf("* INSTRUCTIONS *");

  //for making choice to execute without pressing enter key.. //
  ch=getch();

  gotoxy(2,12);
  switch(ch)
  {
   case '\b':
   mgt();
   break;

   case 13:
   search();
   break;

   case '1':
   searchByErp();
   break;

   case '2':
   searchByName();
   break;

   case 27:
   search();
   break;

   default:
   gotoxy(2,12);
   textcolor(RED);
   cprintf("Invalid choice...!!");
   delay(1000);
   search();
  }
  getch();
 }
}

//////////////////////////// << Search by erp >> ////////////////////////

void searchByErp()
{
 int erp,f=0;
 printf(" Enter ERP.ID. of Student: ");
 scanf("%d",&erp);
 printf(" %-15s %-15s %-10s %-10s %s\n","First name","Last name","course","ERP.ID.","Date");
 fp=fopen("stu.txt","r");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 {
  if(erp == stu.erp)
  {
   f=1;
   printf(" %-15s %-15s %-10s %-10d %s\n",stu.fname,stu.lname,stu.course,stu.erp,stu.date);
   break;
  }
 }
 fclose(fp);
 if(f==0)
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord not found..!!\n");
 }
 else
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord found sucessfully..\n");
 }
}

/////////////////////////// << Search by name.. >> //////////////////////

void searchByName()
{
 char fname[10],lname[10];
 int f=0;
 printf(" Enter First Name of Student: ");
 fflush(stdin);
 scanf("%s",fname );
 printf(" Enter Last Name of Student: ");
 fflush(stdin);
 scanf("%s",lname);
 printf(" %-15s %-15s %-10s %-10s %s\n","First name","Last name","course","ERP.ID.","Date");
 fp=fopen("stu.txt","r");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 {
  if(strcmpi(fname,stu.fname)==0)
  if(strcmpi(lname,stu.lname)==0)
  {
   f=1;
   printf(" %-15s %-15s %-10s %-10d %s\n",stu.fname,stu.lname,stu.course,stu.erp,stu.date);
   break;
  }
 }
 fclose(fp);
 if(f==0)
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord not found..!!\n");
 }
 else
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord found sucessfully..\n");
 }
}

////////////////////////////// << Update module >> ///////////////////////

void update()
{
 char cho;
 while(1)
 {
  textbackground(WHITE);
  textcolor(BLACK);
  clrscr();
  printf("________________________________________________________________________________\n");
  printf("               <==University Student Management System==>\n");
  printf("                     <<==Modify Student Record==>>\n");
  printf("________________________________________________________________________________\n" );
  printf("================================================================================");
  printf("\t1. Modify Name\n");
  printf("\t2. Modify ERP.ID.\n");
  printf("\t3. Modify Course\n");
  printf("================================================================================");
  gotoxy(2,23);
  textcolor(BLACK);
  cprintf("  Press any key between (1 and 3) to select your choice");
  gotoxy(2,24);
  cprintf("  Press           KEY to back on Management page");
  gotoxy(11,24);
  textcolor(BLUE);
  cprintf("BACKSPACE");
  gotoxy(1,22);
  printf("===============================================================================");
  gotoxy(32,22);
  textcolor(RED);
  cprintf("* INSTRUCTIONS *");

  cho=getch();
  gotoxy(2,12);

  switch(cho)
  {
   // for backspace key

   case '\b':
   mgt();
   break;

   // for Enter key

   case 13:
   update();
   break;

   // for esc key

   case 27:
   update();
   break;

   case '1':
   updatename();
   break;

   case '2':
   updateerp();
   break;

   case '3':
   updatecourse();
   break;

   default:
   gotoxy(2,12);
   textcolor(RED);
   cprintf("Invalid choice...!!");
   delay(1000);
   update();
  }
  getch();
 }
}

//////////////////////////// << Update name >> //////////////////////////

void updatename()
{
  int erp,f=0;
  printf(" Enter ERP.ID to Update Record: ");
  scanf("%d",&erp);
   fp=fopen("stu.txt","r+");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 {
  if(erp == stu.erp)
  {
   f=1;
   printf(" Enter New First Name: ");
   fflush(stdin);
   scanf("%s",stu.fname);
   printf(" Enter New Last Name: ");
   fflush(stdin);
   scanf("%s",stu.lname);

   fseek(fp,-size,1);
   fwrite(&stu,sizeof(stu),1,fp);
   fclose(fp);
   break;
  }
 }
 if(f==0)
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord not found...!!\n");
 }
 else
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nUpdate sucessfully..\n");
 }
}

///////////////////////////// << Update erp id >> /////////////////////////

void updateerp()
{
  int erp,f=0;
  printf(" Enter ERP.ID to Update Record: ");
  fflush(stdin);
  scanf("%d",&erp);
   fp=fopen("stu.txt","r+");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 {
  if(erp == stu.erp)
  {
   f=1;
   printf(" Enter New ERP.ID.: ");
   scanf("%d",&stu.erp);

   fseek(fp,-size,1);
   fwrite(&stu,sizeof(stu),1,fp);
   fclose(fp);
   break;
  }
 }
 if(f==0)
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord not found...!!\n");
 }
 else
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nUpdate sucessfully..\n");
 }
}

///////////////////////////// << Update Course >> //////////////////////////

void updatecourse()
{
  int erp,f=0;
  printf(" Enter ERP.ID to Update Record: ");
  scanf("%d",&erp);
   fp=fopen("stu.txt","r+");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 {
  if(erp == stu.erp)
  {
   f=1;
   printf(" Enter New Course: ");
   scanf("%s",stu.course);
   fseek(fp,-size,1);
   fwrite(&stu,sizeof(stu),1,fp);
   fclose(fp);
   break;
  }
 }
 if(f==0)
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord not found...!!\n");
 }
 else
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nUpdate sucessfully..\n");
 }
}

/////////////////////////////// << Delete module >> ///////////////////////

void del()
{
 FILE *ft;
 int erp, f=0;
 printf(" Enter ERP ID. to delete the record: ");
 scanf("%d",&erp);

 fp = fopen("stu.txt","r");
 ft = fopen("temp.txt","a");

 while(fread(&stu,sizeof(stu),1,fp)==1)
 {
  if(erp == stu.erp)
  {
   f=1;
  }
  else
  {
   fwrite(&stu,sizeof(stu),1,ft);
  }
 }
 fclose(fp);
 fclose(ft);
 remove("stu.txt");
 rename("temp.txt","stu.txt");

 if(f==0)
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord not found...!");
 }
 else
 {
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf("\nRecord delete successfully..!");
 }
}

////////////////////////////// << Sorting Module >> ////////////////////////

void sort()
{
  char ch;
 while(1)
 {
  textbackground(WHITE);
  textcolor(BLACK);
  clrscr();
  printf("________________________________________________________________________________\n");
  printf("               <==University Student Management System==>\n");
  printf("                       <<==Sorting student record==>>\n");
  printf("________________________________________________________________________________\n");
  printf("================================================================================");
  printf("\n\t1. Sort by ERP.ID.\n");
  printf("\t2. Sort by Name\n");
  printf("================================================================================");
  gotoxy(2,23);
  textcolor(BLACK);
  cprintf("  Press any key between (1 and 2) to select your choice");
  gotoxy(2,24);
  cprintf("  Press           KEY to back on Database page");
  gotoxy(11,24);
  textcolor(BLUE);
  cprintf("BACKSPACE");
  gotoxy(1,22);
  printf("===============================================================================");
  gotoxy(32,22);
  textcolor(RED);
  cprintf("* INSTRUCTIONS *");

  ch=getch();
  gotoxy(2,12);
  switch(ch)
  {

   // for backspace key <-

   case '\b':
   database();
   break;

   // for esc key..

   case 27:
   sort();
   break;

   // for enter key

   case 13:
   sort();
   break;

   case '1':
   sortByErp();
   break;

   case '2':
   sortByName();
   break;

   default:
   gotoxy(2,12);
   textcolor(RED);
   cprintf("Invalid choice...!!");
   delay(1000);
   sort();
  }
  getch();
 }
}

//////////////////////////// << Sorting by erp >> /////////////////////////

void sortByErp()
{
 int c=0,i,j;
 struct student s1[50],t;
 textcolor(BLACK);
 textbackground(WHITE);
 clrscr();
 printf("               <==University Student Management System==>\n");
 printf("                      <<== Sorting By ERP ID. ==>\n");
 printf("________________________________________________________________________________\n");
 fp = fopen("stu.txt","r");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 s1[c++]=stu;

		  // Selection sorting algorithm...! //

 for(i=0;i<c-1;i++)
 {
  for(j=i+1;j<c;j++)
  {
   if(s1[i].erp > s1[j].erp)
   {
    t=s1[i];
    s1[i]=s1[j];
    s1[j]=t;
   }
  }
 }
 printf(" %-15s %-15s %-10s %-10s %s\n","First name","Last name","course","ERP.ID.","Date");
 printf("________________________________________________________________________\n");
 for(i=0;i<c;i++)
 printf(" %-15s %-15s %-10s %-10d %s\n",s1[i].fname,s1[i].lname,s1[i].course,s1[i].erp,s1[i].date);
 textbackground(BLACK);
 textcolor(WHITE);
 cprintf("\n\nPress any key to continue...!\n");
}

////////////////////////////// << Sorting by name >> ///////////////////////

void sortByName()
{
 int c=0,i,j;
 struct student s1[50],t;
 textcolor(BLACK);
 clrscr();
 printf("               <==University Student Management System==> \n");
 printf("                      <<== Sorting By Name ==>\n");
 printf("________________________________________________________________________\n");
 fp = fopen("stu.txt","r");
 while(fread(&stu,sizeof(stu),1,fp)==1)
 s1[c++]=stu;

		   // Selection sorting algorithm...! //

 for(i=0;i<c-1;i++)
 {
  for(j=i+1;j<c;j++)
	  {
   if(strcmpi(s1[i].fname,s1[j].fname)>1)
   {
    t=s1[i];
    s1[i]=s1[j];
    s1[j]=t;
   }
  }
 }
 printf(" %-15s %-15s %-10s %-10s %s\n","First name","Last name","course","ERP.ID.","Date");
 printf("________________________________________________________________________\n");
 for(i=0;i<c;i++)
 printf(" %-15s %-15s %-10s %-10d %s\n",s1[i].fname,s1[i].lname,s1[i].course,s1[i].erp,s1[i].date);
 textbackground(BLACK);
 textcolor(WHITE);
 cprintf("\n\nPress any key to continue...!\n");
}

////////////////////////////// << Help module >> ///////////////////////////

void help()
{
char a;
textbackground(CYAN);
textcolor(BLACK);
clrscr();
gotoxy(1,1);
printf("================================================================================");
gotoxy(36,1);
textcolor(RED);
textbackground(CYAN);
cprintf("* HELP *");
gotoxy(1,2);
printf("________________________________________________________________________________");
gotoxy(21,3);
textcolor(BLUE);
cprintf("University Student Management System");
gotoxy(1,4);
printf("________________________________________________________________________________");
gotoxy(2,5);
printf("Press 1 for taking admission of student.\n");
printf(" Press 2 for display all the students database record.\n");
printf(" Press 3 for manage the record.\n");
printf("________________________________________________________________________________\n");
gotoxy(1,9);
printf("================================================================================\n");
gotoxy(33,9);
textcolor(BLUE);
cprintf("* Instruction *");
gotoxy(2,10);
textcolor(RED);
cprintf("  Escape key is use to exit program.");
gotoxy(2,11);
cprintf("  If you enter in sub module of the program, press Backspace key to come back");
gotoxy(4,12);
cprintf(" on main page.");
gotoxy(2,13);
cprintf("  Press L key to logout the system.");

gotoxy(1,14);
printf("================================================================================\n");
gotoxy(32,14);
textcolor(YELLOW);
cprintf("* Shortcut Keys *");
gotoxy(2,15);
textcolor(LIGHTRED+LIGHTBLUE);
cprintf("  Press SHIFT+1 (!) for Sorting the student record by ERP.ID.");
gotoxy(2,16);
textcolor(LIGHTRED+LIGHTBLUE);
cprintf("  Press SHIFT+2 (@) for Sorting the student record by Name.");
gotoxy(2,17);
textcolor(LIGHTRED+LIGHTBLUE);
cprintf("  Press SHIFT+3 (#) for display all the record of students.");
gotoxy(2,18);
textcolor(LIGHTRED+LIGHTBLUE);
cprintf("  Press SHIFT+4 ($) for Search the student record by ERP.ID.");
gotoxy(2,19);
textcolor(LIGHTRED+LIGHTBLUE);
cprintf("  Press SHIFT+5 (%) for Search the student record by Name.");

gotoxy(49,25);
textcolor(BLUE);
textbackground(WHITE);
cprintf("Project by Harshit and Shruti");
gotoxy(4,22);
textcolor(LIGHTBLUE);
textbackground(BLACK);
cprintf("Press any key to exit HELP");
getch();

first();
}