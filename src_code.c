#include <stdio.h>
union patient
{

	char name;
	int age;
	int id;
	char address;
	int contact;
	char bloodgroup;
};
struct 
{
	union patient;
}z;
int main()
{	
	union s; 
	char name;
	int age;
	char guardian;
	int id;
	char address;
	int contact;
	char bloodgroup;
	char majordisease;
	
	printf("\t\t\t\t******** WELCOME TO HOSPITAL MANAGEMENT SYSTEM ******\n\n");
	int a,num=12345;
	printf("\t\t\t\t\tEnter the Password:");
	scanf("%d",&a);
	if(num==a)
	{
		printf("\n\t\t\t\t\t-----------ENTER PATIENT DETAILS----------\n\n");
		printf("\t\t\t\tPatient Name:");
		scanf("%s",&name);
		printf("\n\t\t\t\tAge:");
		scanf("%d",&age);
		printf("\n\t\t\t\tID:"); 
		scanf("%d",&id);
		printf("\n\t\t\t\tBlood Group:");
		scanf("%s",&bloodgroup);
		printf("\n\t\t\t\tGuardian name:");
		scanf("%s",&guardian);
		printf("\n\t\t\t\tAddress:");
		scanf("%s",&address);
		printf("\n\t\t\t\tContact:");
		scanf("%d",&contact);
		printf("\n\t\t\t\tAny Major Disease before:");
		scanf("%s",&majordisease);
		printf("\n\n\t\t\t\t______________________________________________________");
		printf("\n\t\t\t\t|                                                     |");
		printf("\t\t\t\t\t\t\t\t|       PATIENT DETAILS REGISTERED SUCCESSFULLY       |");
		printf("\t\t\t\t\t\t\t\t|_____________________________________________________|");
	}
	else 
	{
		printf("\n\t\t\t\t\t ** INVALID PASSWORD **");
	}
	return 0;
}
