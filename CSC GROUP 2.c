/* Project Title   : CS TRAINING CENTER REGISTRATION
   Project Purpose : To create a system  to help the staff in handling online course course booking.
   Written By      : MUHAMMAD NAJMI BIN SHAHARUDIN (2020625968)
					 MOHAMAD IMAN BIN MOHD YATIM (2020877052)
					 NUR SAHIRA SOFEA BINTI AZIZAN (2020475244)
 */

//preprocessor directives
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <conio.h>


int main()
{
	//local variables
	int num,i,phone;
	char code[22222],pay;
	float fees,fees1,fees2,fees3,fees4,fees5,discount;
	char name[30],email[50];
	
	printf("\t\t\t\t\t\tWELCOME TO CS TRAINING CENTER\n");
	printf("\t\t\t\t\t-PLEASE CHOOSE THE COURSES YOU WANT TO REGISTER-\n\n");
	printf("\t\t\t***********************************************************************\n");
	printf("\t\t\tCOURSE CODE\tCOURSE NAME        \tDAY      \tTIME  \tFEES\n");
	printf("\t\t\t***********************************************************************\n");
	printf("\t\t\t     A     \tC for beginner     \tMonday   \t8-10pm\tRM100\n");
	printf("\t\t\t     B     \tC++ for beginner   \tTuesday  \t8-10pm\tRM100\n");
	printf("\t\t\t     C     \tJava for beginner  \tWednesday\t8-10pm\tRM120\n");
	printf("\t\t\t     D     \tPhyton for beginner\tThursday \t8-10pm\tRM120\n");
	printf("\t\t\t     E     \tPHP for beginner   \tFriday   \t8-10pm\tRM130\n");
	printf("\t\t\t***********************************************************************\n\n\n");
	
	printf("HOW MANY COURSES YOU WANT TO REGISTER: ");
	scanf("%d", &num);
	
	for (i=0;i<num;i++) {
			
			printf("\nENTER COURSE CODE: ");
			scanf(" %c", &code[i]);
				if (code[i]=='A')
			{
			fees1=100;
			printf("\tCourse Name 	:C for beginner\n");
			printf("\tDate		: Monday\n");
			printf("\tTime		: 8-10pm \n");
			printf("\tFees		: RM100 \n");
			}
				else if (code[i]=='B')
			{
			fees2=100;
			printf("\tCourse Name 	:C++ for beginner\n");
			printf("\tDate		: Tuesday\n");
			printf("\tTime		: 8-10pm \n");
			printf("\tFees		: RM100 \n");
			}
				else if (code[i]=='C')
			{
			fees3=120;
			printf("\tCourse Name 	:Java for beginner\n");
			printf("\tDate		: Wednesday\n");
			printf("\tTime		: 8-10pm \n");
			printf("\tFees		: RM120 \n");
			}
				else if (code[i]=='D')
			{
			fees4=120;
			printf("\tCourse Name 	:Phyton for beginner\n");
			printf("\tDate		: Thursday\n");
			printf("\tTime		: 8-10pm \n");
			printf("\tFees		: RM120 \n");
			}
				else if (code[i]=='E')
			{
			fees4=130;
			printf("\tCourse Name 	:PHP for beginner\n");
			printf("\tDate		: Friday\n");
			printf("\tTime		: 8-10pm \n");
			printf("\tFees		: RM130 \n");
			}
				else 
			{
				printf("\tERROR\n");
				printf("\tPlease try again");
        		exit (0);
			}
				
	
	}
		
    
	fees = fees1+fees2+fees3+fees4+fees5;
	discount = fees - (fees*0.15);



	
	printf("\n\nTotal Course Taken : %d\n", num);
	printf("Total Fees: RM%.2f\n", fees);
		if (fees>300)
		{
			printf("Discount: 15 PERCENT\n");
			printf("Total price after discount: RM%.2f\n",discount);
		}
		

	getch(); //hold screen
	system("CLS"); //clear screen
		
	printf("~~~~~~~~~~~~~~~~~\n");
	printf("PAYMENT METHOD\n");
	printf("~~~~~~~~~~~~~~~~~\n");
	printf("TYPE 'X' FOR CASH OR TYPE 'Y' FOR ONLINE PAYMENT>>>>");
	scanf(" %c", &pay);

	{
	if (pay=='X')
	{
		printf(">>>>PLEASE GO TO THE OFFICE AND MAKE YOUR PAYMENT\n\n");
	}
	else if(pay=='Y')
	{
		printf(">>>>>PLEASE TRANSFER THE TOTAL FEES TO THIS BANK ACCOUNT:\n");
		printf(">>>>>MOHAMAD IMAN BIN MOHD YATIM\n");
		printf(">>>>>BANK: MAYBANK\n");
		printf(">>>>>NO ACCOUNT: 123456789012\n\n");
	}
	else
	{
		printf("ERROR,PLEASE ENTER THE CORRECT CODE\n");
		return(0);
	}
	
	
	
	}
	getch(); //hold screen
	system("CLS"); //clear screen
		
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\tYOUR PERSONAL INFORMATION\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("PLEASE ENTER YOUR FULL NAME:");
	fflush(stdin);
	gets(name);
	printf("PLEASE ENTER YOUR PHONE NUMBER:(+601)");
	scanf(" %f", &phone);
	printf("PLEASE ENTER YOUR EMAIL ADDRESS:");
	scanf(" %s", &email);
	
	
	getch(); //hold screen
	system("CLS"); //clear screen
		
	printf("\n\nCS TRAINING CENTER\t\t\t\t\t\t\t\t\t\tINVOICE\n");
	printf("No.1, Jalan Anggerik\t\t\t\t\t\t\t\t\t\t\t\t\n");
	printf("Phone No: +60343272853\n\n");
	printf("To:");
	printf("NAME:%s\n", name);
	printf("PHONE NUMBER:(+601)%d\n", phone);
	printf("EMAIL:%s\n\n", email);
	printf("........................................................................................................\n\n");
	printf("\t\tTOTAL COURSE TAKEN:%d\n\n", num);
	for(i=0;i<num;i++){
	printf("\t\tCOURSE TAKEN: %c\n", code[i]);
    if (code[i]=='A')
			{
			fees1=100;
			printf("\t\tCourse Name 	:C for beginner\n");
			printf("\t\tDate		: Monday\n");
			printf("\t\tTime		: 8-10pm \n");
			printf("\t\tFees		: RM100 \n\n");
			}
				else if (code[i]=='B')
			{
			fees2=100;
			printf("\t\tCourse Name 	:C++ for beginner\n");
			printf("\t\tDate		: Tuesday\n");
			printf("\t\tTime		: 8-10pm \n");
			printf("\t\tFees		: RM100 \n\n");
			}
				else if (code[i]=='C')
			{
			fees3=120;
			printf("\t\tCourse Name 	:Java for beginner\n");
			printf("\t\tDate		: Wednesday\n");
			printf("\t\tTime		: 8-10pm \n");
			printf("\t\tFees		: RM120 \n\n");
			}
				else if (code[i]=='D')
			{
			fees4=120;
			printf("\t\tCourse Name 	:Phyton for beginner\n");
			printf("\t\tDate		: Thursday\n");
			printf("\t\tTime		: 8-10pm \n");
			printf("\t\tFees		: RM120 \n\n");
			}
				else if (code[i]=='E')
			{
			fees4=130;
			printf("\t\tCourse Name 	:PHP for beginner\n");
			printf("\t\tDate		: Friday\n");
			printf("\t\tTime		: 8-10pm \n");
			printf("\t\tFees		: RM130 \n\n");
			}
				else 
			{
				printf("\t\tERROR\n\n");
			}
				}
	printf("\t\tTOTAL FEES:%.2f\n\n\n", fees);
	
	
	printf("\t\t\t-------------------------------------------------------------\n");
	printf("\t\t\t		Please complete payment in 30 days     \n");
	printf("\t\t\t-------------------------------------------------------------\n");

	
	return 0;
}
