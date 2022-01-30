/****************************/
/********DEVIANT POLL********/
/****FUTURE OF DEMOCRACY*****/
/****************************/

/***********************

    HEADER FILES

***********************/


#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*********************

 FUNCTION PROTOTYPES

*********************/

void Timeloop();
void Heading();
void Pro_Pass();
void Home();
void Voters();
void Candidates();
void M_Election();
void Append();
void Search();
void Modify();
void Delete();
int  Sample_Search();
void E_Delete();


//****BASE CLASS****//

class Election
{
      char      aadhaar_no[50];
      char      Name[30];
      char      House_name[30];
      char      Street[20];
      char      City[20];
      char      District[20];
      char      Pin_code[20];
      char      Dob[20];
      char      Gender[20];
      char      Religion[20];
      char      Marital_status;
      int       V_Password;
      int       Age;

   public :

      void V_Details()                   //Fun 1
      {
	 Heading();
	 cout<<"\n\n\n\n\t\tEnter Aadhaar Number\t:\t";
	 gets(aadhaar_no);
	 cout<<"\n\t\tEnter Name Of The Voter\t:\t";
	 gets(Name);
	 cout<<"\n\t\tEnter House Name\t:\t";
	 gets(House_name);
	 cout<<"\n\t\tEnter Street\t\t:\t";
	 gets(Street);
	 cout<<"\n\t\tEnter City\t\t:\t";
	 gets(City);
	 cout<<"\n\t\tEnter District\t\t:\t";
	 gets(District);
	 cout<<"\n\t\tEnter Pincode\t\t:\t";
	 gets(Pin_code);
	 Heading();
	 cout<<"\n\n\n\n\t\tEnter Date Of Birth(D/M/Y):\t";
	 gets(Dob);
	 cout<<"\n\t\tEnter Gender(M/F)\t:\t";
	 gets(Gender);
	 cout<<"\n\t\tEnter Age\t\t:\t";
	 cin>>Age;
	 cout<<"\n\t\tEnter Religion\t\t:\t";
	 gets(Religion);
	 cout<<"\n\t\tEnter Marital St.(M/N/W):\t";
	 cin>>Marital_status;
	 cout<<"\n\t\tENTER VOTER CODE(4-DIG)\t:\t";
	 cin>>V_Password;
      }

      void V_Display()                   //Fun 2
      {
	 clrscr();
	 Heading();
	 cout<<"\n\n\n\n\t\t\tAadhaar No.\t:\t"<<aadhaar_no;
	 cout<<"\n\t\t\tName\t\t:\t"<<Name;
	 cout<<"\n\t\t\tHouse Name\t:\t"<<House_name;
	 cout<<"\n\t\t\tStreet\t\t:\t"<<Street;
	 cout<<"\n\t\t\tCity\t\t:\t"<<City;
	 cout<<"\n\t\t\tDistrict\t:\t"<<District;
	 cout<<"\n\t\t\tPincode\t\t:\t"<<Pin_code;
	 cout<<"\n\t\t\tDate Of Birth\t:\t"<<Dob;
	 cout<<"\n\t\t\tGender\t\t:\t"<<Gender;
	 cout<<"\n\t\t\tAge\t\t:\t"<<Age;
	 cout<<"\n\t\t\tReligion\t:\t"<<Religion;
	 cout<<"\n\t\t\tMarital Status\t:\t"<<Marital_status;

      }

      char* get_aadhaar()                //Fun 3 , Accessor Fun1
      {
	return aadhaar_no;
      }

      int get_voter_code()               //Fun 4 , Accessor Fun2
      {
	return V_Password;
      }

      void V_Modify();                    //Fun 5
};

/***DEFINITION FOR FUN 4***/

   void Election::V_Modify()
      {
	 Heading();
	 int choice1;
	 char ch='n';
	 Heading();
	 cout<<"\n\n\n\t\tENTER THE DATA TO MODIFY  :";
	 cout<<"\n\t\t\t1.Name";
	 cout<<"\n\t\t\t2.House Name\n\t\t\t3.Street";
	 cout<<"\n\t\t\t4.Pin\n\t\t\t";
	 cout<<"5.Date Of Birth\n\t\t\t6.Age";
	 cout<<"\n\t\t\t7.Marital Status";
	 cout<<"\n\t\t\t8.Go Back";
	 cout<<"\n\n\t\t\tENTER YOUR CHOICE : ";
	 cin>>choice1;
	 switch(choice1)
	 {
	    case 1 : char nm[30];
		     Heading();
		     cout<<"\n\n\n\n\t\tPresnt name\t:\t";
		     cout<<Name;
		     getch();
		     Heading();
		     cout<<"\n\n\n\n\n\t\tNew Name\t:\t";
		     gets(nm);
		     Heading();
		     cout<<"\n\n\n\t\tARE YOU SURE ?";
		     cout<<"\n\t\tDO YOU WANT TO CONTINUE (Y/N) ?\t:\t";
		     cin>>ch;
		     if((ch=='Y')||(ch=='y'))
		       strcpy(Name,nm);
		     break;

	    case 2 : char Hn[30];
		     Heading();
		     cout<<"\n\n\n\n\t\tPresent House Name\t:\t";
		     cout<<House_name;
		     getch();
		     Heading();
		     cout<<"\n\n\n\n\t\tNew House Name\t:\t";
		     gets(Hn);
		     clrscr();
		     cout<<"\n\n\n\t\tARE YOU SURE ?";
		     cout<<"\n\t\tDO YOU WANT TO CONTINUE (Y/N) ?\t:\t";
		     cin>>ch;
		     if((ch=='Y')||(ch=='y'))
		       strcpy(House_name,Hn);
		     break;

	    case 3 : char str[20];
		     Heading();
		     cout<<"\n\n\n\n\t\tPresent Location\t:\t";
		     cout<<Street;
		     getch();
		     Heading();
		     cout<<"\n\n\n\n\t\tNew Location\t:\t";
		     gets(str);
		     clrscr();
		     cout<<"\n\n\n\t\tARE YOU SURE ?";
		     cout<<"\n\t\tDO YOU WANT TO CONTINUE (Y/N) ?\t:\t";
		     cin>>ch;
		     if((ch=='Y')||(ch=='y'))
		       strcpy(Street,str);
		     break;

	    case 4 : char P[20];
		     Heading();
		     cout<<"\n\n\n\n\t\tPresent Pincode\t:\t";
		     cout<<Pin_code;
		     getch();
		     Heading();
		     cout<<"\n\t\tNew Pincode\t:\t";
		     gets(P);
		     clrscr();
		     cout<<"\n\n\n\t\tARE YOU SURE ?";
		     cout<<"\n\t\tDO YOU WANT TO CONTINUE (Y/N) ?\t:\t";
		     cin>>ch;
		     if((ch=='Y')||(ch=='y'))
		       strcpy(Pin_code,P);
		     break;

	    case 5 : char Date[20];
		     Heading();
		     cout<<"\n\n\n\n\t\tPresent Date of Birth\t:\t";
		     cout<<Dob;
		     getch();
		     Heading();
		     cout<<"\n\n\n\n\t\tNew Date of Birth\t:\t";
		     gets(Date);
		     clrscr();
		     cout<<"\n\n\n\t\tARE YOU SURE ?";
		     cout<<"\n\t\tDO YOU WANT TO CONTINUE (Y/N) ?\t:\t";
		     cin>>ch;
		     if((ch=='Y')||(ch=='y'))
		       strcpy(Dob,Date);
		     break;

	    case 6 : int Vage;
		     Heading();
		     cout<<"\n\n\n\n\t\tPresent Age\t:\t";
		     cout<<Age;
		     getch();
		     Heading();
		     cout<<"\n\n\n\n\t\tCorrect Age\t:\t";
		     cin>>Vage;
		     clrscr();
		     cout<<"\n\n\n\t\tARE YOU SURE ?";
		     cout<<"\n\t\tDO YOU WANT TO CONTINUE (Y/N) ?\t:\t";
		     cin>>ch;
		     if((ch=='Y')||(ch=='y'))
		       Age=Vage;
		       break;

	    case 7 : char Maristat;
		     Heading();
		     cout<<"\n\n\n\n\t\tPresent Marital Status :\t";
		     cout<<Marital_status;
		     getch();
		     Heading();
		     cout<<"\n\n\n\n\t\tChange To(N/M/W)\t:\t";
		     cin>>Maristat;
		     clrscr();
		     cout<<"\n\n\n\t\tARE YOU SURE ?";
		     cout<<"\n\t\tDO YOU WANT TO CONTINUE (Y/N) ?\t:\t";
		     cin>>ch;
		     if((ch=='Y')||(ch=='y'))
		       Marital_status=Maristat;
		     break;

	    case 8 : Heading();
		     Voters();
		     break;

	   default : Heading();
		     cout<<"\n\n\n\t\t\tINVALID ENTRY!!!!";
		     getch();
	 }
      }


//***OBJECT OF ELECTION***


Election E;


//***GLOBAL VARIABLES***


char aadhaar4[50];
int VPassword1;


//****USER DEFINED FUNCTIONS****


void Timeloop()                         //USD Fun 1
{
    for(float i=0;i<3000000;i++);
    Heading();
}

void Heading()                          //USD Fun 2
{
    clrscr();
    cout<<"\n\t\t\t\tDEVIANT POLL";
    cout<<"\n\t\t\t\t------------";
}
void Continue()                         //USD Fun 3
{
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\tPRESS ANY KEY TO CONTINUE";
  getch();
}

void Pro_Pass()                         //USD Fun 4
{

    char a,b,c,d;
    int i=0;
    pass :
    for(i;i<3;i++)
    {
       clrscr();
       cout<<"\n\n\n\n\n\t\t\tENTER PASSWORD : ";
       a=getch();
       cout<<"*";
       b=getch();
       cout<<"*";
       c=getch();
       cout<<"*";
       d=getch();
       cout<<"*";
       if((a=='1')&&(b=='4')&&(c=='3')&&(d=='4'))
       {
	    getch();
	    clrscr();
	    break;
       }
       else if(i<2)
       {
	    getch();
	    clrscr();
	    cout<<"\n\n\n\n\n\t\t\tSORRY TRY AGAIN.........";
	    Timeloop();
	    i++;
	    goto pass;

       }
    }
       if(i==3)
       {
	    getch();
	    clrscr();
	    cout<<"\n\n\n\n\n\t\t\tEXECUTION BLOCKED.........";
	    getch();
	    exit(0);
       }
}

void Home()                             //USD Fun 5
{
    int choice2;
    char ch1,ch2;
    ch1='y';
    ch2='y';
    while((ch2=='y')||(ch2=='Y'))
    {
       Heading();
       cout<<"\n\n\n\n\t\t\t\t1.Voters";
       cout<<"\n\t\t\t\t2.Candidates";
       cout<<"\n\t\t\t\t3.Election";
       cout<<"\n\t\t\t\t4.Exit";
       cout<<"\n\n\t\t\tENTER YOUR CHOICE : ";
       cin>>choice2;
       Heading();
       cout<<"\n\n\n\n\n\t\t\t\tLOADING.......";
       Timeloop();
       switch(choice2)
       {
	  case 1     :   Voters();
			 break;

	  case 2     :   Candidates();
			 break;

	  case 3     :   M_Election();
			 break;

	  case 4     :   cout<<"\n\n\n\n\n\t\t\tARE YOU SURE(Y/N) : ";
			 cin>>ch1;
			 if((ch1=='y')||(ch1=='Y'))
			   exit(0);
			 else
			   Home();

	  default    :   cout<<"\n\n\n\n\n\t\t\t\tINVALID ENTRY";
			 getch();
       }
    }
}

void Voters()                           //USD Fun 6
{
     Heading();
     int choice3;
     char ch3='y';
     while(ch3=='y')
     {
       Heading();
       cout<<"\n\n\n\n\t\t\t1.ADD NEW ID";
       cout<<"\n\t\t\t2.SEARCH VOTER ID";
       cout<<"\n\t\t\t3.MODIFY EXISTING VOTER ID";
       cout<<"\n\t\t\t4.DELETE VOTER ID";
       cout<<"\n\t\t\t5.BACK TO MAIN MENU";
       cout<<"\n\n\t\t\tENTER YOUR CHOICE : ";
       cin>>choice3;
       Heading();
       cout<<"\n\n\n\n\t\t\t\tLOADING......";
       Timeloop();
       switch(choice3)
       {
	  case  1  :  Append();
		      break;

	  case  2  :  Search();
		      break;

	  case  3  :  Modify();
		      break;

	  case  4  :  Delete();
		      break;

	  case  5  :  Home();
		      break;

	  default  :  cout<<"\n\n\n\n\t\t\t\tINVALID ENTRY";
		      getch();
       }
     }
}
void Append()                           //USD Fun 7
{
   char ch='y';
   ofstream ofile("Voter.dat",ios::app|ios::binary);
   while((ch=='y')||(ch=='Y'))
   {
     Heading();
     E.V_Details();
     ofile.write((char*)&E,sizeof(E));
     Heading();
     cout<<"\n\n\n\n\n\t\t\tDO YOU WANT TO ADD MORE ID(Y/N) : ";
     cin>>ch;
   }
   ofile.close();
}

void Search()                           //USD Fun 8
{
   char aadhaar1[50];
   int found1=0,VPassword,a,b,c,d;
   ifstream ifile("Voter.dat",ios::binary);
   Heading();
   cout<<"\n\n\n\n\t\t\tENTERR THE AADHAAR NO : ";
   gets(aadhaar1);
   Heading();
   cout<<"\n\n\n\n\t\t\tENTER YOUR VID CODE : ";
   a=getch();
   cout<<'*';
   b=getch();
   cout<<'*';
   c=getch();
   cout<<'*';
   d=getch();
   cout<<'*';
   Continue();
   VPassword=((a-48)*1000)+((b-48)*100)+((c-48)*10)+(d-48);
   ifile.seekg(0);
   while(!ifile.eof())
   {
     ifile.read((char*)&E,sizeof(E));
     if((strcmp(E.get_aadhaar(),aadhaar1)==0)&&(E.get_voter_code()==VPassword))
     {
       Heading();
       E.V_Display();
       getch();
       found1=1;
       break;
     }
   }
   if(found1==0)
   {
     Heading();
     cout<<"\n\n\n\n\t\t\tSORRY DATA DOES'NT EXIST";
     getch();
   }
   ifile.close();
}

void Modify()                           //USD Fun 9
{
   char aadhaar2[50],p,q,r,s;
   long pos;
   int found2=0;
   int VMPassword;
   fstream file("Voter.dat",ios::in|ios::out|ios::binary);
   file.seekg(0);
   Heading();
   cout<<"\n\n\n\n\t\t\tENTER AADHAAR NO : ";
   gets(aadhaar2);
   Heading();
   cout<<"\n\n\n\n\t\t\tENTER YOUR VID CODE : ";
   p=getch();
   cout<<'*';
   q=getch();
   cout<<'*';
   r=getch();
   cout<<'*';
   s=getch();
   cout<<'*';
   Continue();
   VMPassword=((p-48)*1000)+((q-48)*100)+((r-48)*10)+(s-48);
   while(!file.eof())
   {
     pos=file.tellg();
     file.read((char*)&E,sizeof(E));
     if((strcmp(E.get_aadhaar(),aadhaar2)==0)&&(E.get_voter_code()==VMPassword))
     {
       E.V_Display();
       getch();
       file.seekp(pos);
       E.V_Modify();
       file.write((char*)&E,sizeof(E));
       found2=1;
       break;
     }
   }
   if(found2==0)
   {
     Heading();
     cout<<"\n\n\n\n\t\t\tSORRY ID DOES'NT EXIST";
     getch();
   }
   else
   {
     file.seekg(pos);
     file.read((char*)&E,sizeof(E));
     cout<<"\n\n\n\n\n\n\n\t\t\t\tMODIFIED ID...........";
     Timeloop();
     E.V_Display();
   }
   file.close();
   getch();
}

void Delete()                           //USD Fun 10
{
   char aadhaar3[50];
   int found3=0;
   char confirm='n';
   ifstream ifileh("Voter.dat",ios::binary);
   ofstream ofile("Temp.dat",ios::binary);
   Heading();
   cout<<"\n\n\n\n\t\t\tENTER AADHAAR NO : ";
   gets(aadhaar3);
   ifileh.seekg(0);
   while(!ifileh.eof())
   {
     Heading();
     ifileh.read((char*)&E,sizeof(E));
     if(strcmp(E.get_aadhaar(),aadhaar3)==0)
     {
       E.V_Display();
       getch();
       found3=1;
       Heading();
       cout<<"\n\n\n\n\t\t\tARE YOU SURE(Y/N) : ";
       cin>>confirm;
       if(confirm=='n')
	 ofile.write((char*)&E,sizeof(E));
       else
       {
	 Heading();
	 cout<<"\n\n\n\n\n\n\n\t\t\t\tDELETING........";
	 Timeloop();
       }
     }
     else
       ofile.write((char*)&E,sizeof(E));
   }
   if(found3==0)
     cout<<"\n\n\n\n\t\t\tSORRY ID DOES'NT EXIST";
     getch();
   ofile.close();
   ifileh.close();
   remove("Voter.dat");
   rename("Temp.dat","Voter.dat");
   Heading();
}

void Candidates()                       //USD Fun 11
{
   Heading();
   char Cname1[20],Cname2[20],Cname3[20],Cname4[20],Cname5[20];
   char P1[20],P2[20],P3[20],P4[20],P5[20];
   char S1,S2,S3,S4,S5;
   strcpy(Cname1,"CANDIDATE1");
   strcpy(Cname2,"CANDIDATE2");
   strcpy(Cname3,"CANDIDATE3");
   strcpy(Cname4,"CANDIDATE5");
   strcpy(Cname5,"CANDIDATE5");
   strcpy(P1,"PARTY1");
   strcpy(P2,"PARTY2");
   strcpy(P3,"PARTY3");
   strcpy(P4,"PARTY4");
   strcpy(P5,"PARTY5");
   S1='A';
   S2='B';
   S3='C';
   S4='D';
   S5='E';
   cout<<"\n\t\t\t\tCANDIDATE LIST";
   cout<<"\n\t\t\t\t--------------";
   cout<<"\n\n\n\t\t\tNAME\t\tPARTY\t\tSYMBOL";
   cout<<"\n\t\t\t--------------------------------------";
   cout<<"\n\t\t\t"<<Cname1<<"\t"<<P1<<"\t\t"<<S1;
   cout<<"\n\t\t\t"<<Cname2<<"\t"<<P2<<"\t\t"<<S2;
   cout<<"\n\t\t\t"<<Cname3<<"\t"<<P3<<"\t\t"<<S3;
   cout<<"\n\t\t\t"<<Cname4<<"\t"<<P4<<"\t\t"<<S4;
   cout<<"\n\t\t\t"<<Cname5<<"\t"<<P5<<"\t\t"<<S5;
   Continue();
}

void E_Delete()                         //USD Fun 12
{
   ifstream ifile1("Copy.dat",ios::binary);
   ofstream ofile("Copy2.dat",ios::binary|ios::out);
   ifile1.seekg(0);
   while(!ifile1.eof())
   {
    ifile1.read((char*)&E,sizeof(E));
    if((strcmp(E.get_aadhaar(),aadhaar4)!=0)&&(E.get_voter_code()==VPassword1))
    ofile.write((char*)&E,sizeof(E));
   }
   ifile1.close();
   ofile.close();
   remove("Copy.dat");
   rename("Copy2.dat","Copy.dat");
}

int Sample_Search()                     //USD Fun 13
{

   int found1=0,a,b,c,d;
   ifstream ifile("Copy.dat",ios::binary);
   Heading();
   cout<<"\n\n\n\n\t\t\tENTER THE AADHAAR NO : ";
   gets(aadhaar4);
   Heading();
   cout<<"\n\n\n\n\t\t\tENTER YOUR VID CODE : ";
   a=getch();
   cout<<'*';
   b=getch();
   cout<<'*';
   c=getch();
   cout<<'*';
   d=getch();
   cout<<'*';
   Continue();
   VPassword1=((a-48)*1000)+((b-48)*100)+((c-48)*10)+(d-48);
   while(!ifile.eof())
   {
     ifile.read((char*)&E,sizeof(E));
     if((strcmp(E.get_aadhaar(),aadhaar4)==0)&&(E.get_voter_code()==VPassword1))
     {
       Heading();
       E.V_Display();
       getch();
       found1=1;
       return 1;
     }
   }
   if(found1==0)
     Heading();
   ifile.close();
   return 0;
}

void Copy()                             //USD Fun 14
{
  ofstream cfile("Copy.dat",ios::binary|ios::out);
  ifstream ifile("Voter.dat",ios::binary);
  while(!ifile.eof())
  {
    ifile.read((char*)&E,sizeof(E));
    cfile.write((char*)&E,sizeof(E));
  }
  ifile.close();
  cfile.close();
}
					//USD Fun 15
void M_Election()
{
   Heading();
   Copy();
   char Cname1[20],Cname2[20],Cname3[20],Cname4[20],Cname5[20];
   char P1[20],P2[20],P3[20],P4[20],P5[20];
   char S1,S2,S3,S4,S5;
   int Count1,Count2,Count3,Count4,Count5,V_Count,Check;
   int a,b,c,d,Password1;
   float e,f;
   long int aadhaar2;
   char S;
   Count1  =  0;
   Count2  =  0;
   Count3  =  0;
   Count4  =  0;
   Count5  =  0;
   V_Count =  0;
   again1:
   if(Sample_Search()==1)
   {
     E_Delete();
     Candidates();
     Heading();
     cout<<"\n\n\n\n\t\t\tENTER YOUR VOTE : ";
     cin>>S;
     if((S=='A')||(S=='a'))
       Count1++;
     else if((S=='B')||(S=='b'))
       Count2++;
     else if((S=='C')||(S=='c'))
       Count3++;
     else if((S=='D')||(S=='d'))
       Count4++;
     else if((S=='E')||(S=='e'))
       Count5++;
     V_Count++;
     Heading();
     again2:
     Heading();
     e=random(9913);
     cout<<"\n\n\n\n\t\t\t"<<e;
     cout<<"\n\t\t\tENTER THE ABOVE CODE : ";
     cin>>f;
     if(f==e)
     {
       Heading();
       cout<<"\n\n\n\n\t\t\tCONGRATULATIONS....";
       cout<<"\n\t\t\tYOU HAVE PLACED YOUR VOTE";
       cout<<"\n\t\t\tPLEASE LEAVE THE PANEL...";
       again3:
       Heading();
       cout<<"\n\n\n\n\t\t\tENTER ELECTION CODE : ";
       a=getch();
       cout<<'*';
       b=getch();
       cout<<'*';
       c=getch();
       cout<<'*';
       d=getch();
       cout<<'*';
       Continue();
       Password1=((a-48)*1000)+((b-48)*100)+((c-48)*10)+(d-48);
       if(Password1==1434)
       {
	 Heading();
	 cout<<"\n\n\n\n\n\n\n\t\t\t\tLOADING.......";
	 Timeloop();
	 goto again1;
       }
       else if(Password1==3414)
       {
	 Heading();
	 cout<<"\n\n\n\n\n\n\n\t\t\t\tPROCESSING.......";
	 Timeloop();
	 {
	   Heading();
	   strcpy(Cname1,"CANDIDATE1");
	   strcpy(Cname2,"CANDIDATE2");
	   strcpy(Cname3,"CANDIDATE3");
	   strcpy(Cname4,"CANDIDATE5");
	   strcpy(Cname5,"CANDIDATE5");
	   strcpy(P1,"PARTY1");
	   strcpy(P2,"PARTY2");
	   strcpy(P3,"PARTY3");
	   strcpy(P4,"PARTY4");
	   strcpy(P5,"PARTY5");
	   cout<<"\n\n\t\t\t\tELECTION RESULT";
	   cout<<"\n\t\t\t\t---------------";
	   cout<<"\n\n\t\t\tTOTAL VOTES = "<<V_Count;
	   cout<<"\n\n\n\t\t\tNAME\t\tPARTY\t\tVOTES";
	   cout<<"\n\t\t\t--------------------------------------";
	   cout<<"\n\t\t\t"<<Cname1<<"\t"<<P1<<"\t\t"<<Count1;
	   cout<<"\n\t\t\t"<<Cname2<<"\t"<<P2<<"\t\t"<<Count2;
	   cout<<"\n\t\t\t"<<Cname3<<"\t"<<P3<<"\t\t"<<Count3;
	   cout<<"\n\t\t\t"<<Cname4<<"\t"<<P4<<"\t\t"<<Count4;
	   cout<<"\n\t\t\t"<<Cname5<<"\t"<<P5<<"\t\t"<<Count5;
	   getch();
	 }
       }
       else
	 goto again3;
     }
     else
       goto again2;
   }
   else
   {
     Heading();
     cout<<"\n\n\n\n\n\t\t\tSORRY DATA DOES'NT EXIST";
     getch();
     goto again3;
   }
}


/******MAIN OF THE PROGRAM ******/


void main()
{
    clrscr();
    Pro_Pass();
    clrscr();
    cout<<"\n\n\n\n\n\t\t\tWELCOME TO DEVIANT POLL";
    Timeloop();
    Home();
}

 /**************************************************************************/
 /****************************END OF THE PROGRAM****************************/
 /**************************************************************************/


