/*
 * main.c
 *
 *  Created on: 09-Nov-2026
 *      Author: animesh
 */

#include<stdio.h>
#include<stdint.h>

typedef struct{
	int roll_no;
	char studName[100];
	char sem[50];
	char branch[60];
	char dob[10];
	char loc[150];

}STUDENT_INFO_t;

uint32_t menuRead;
uint32_t totalStudents = 3;
uint32_t maxEntries = 10;

STUDENT_INFO_t students[10] =
	{
		{101, "Ram Kumar","Fifth","Civil Engineering","01/08/2003","Dhanbad Jharkhand"},
		{102, "Sahil Kumar","Seventh","Civil Engineering","01/08/2005","Bokaro Jharkhand"},
		{103, "Faisal Khurshid","Fifth","Electrical Engineering","01/05/2004","Bhuli Jharkhand"},
	};

//Function Prototype
void menuButton();
void display_all_records(STUDENT_INFO_t *pBaseAddrofEntries, int maxEntries);
void add_new_records(uint32_t *totalStudents, uint32_t maxEntries);
void delete_existing_data();

int main(){

	printf("Student Data Maintenance Program\n");

	uint8_t continueP = 1;

	while(continueP){
		menuRead = 5;
		menuButton();
		scanf("%u",&menuRead);

		switch(menuRead)
		{
		case 0:
			printf("Exiting the Program\n");
			continueP = 0;
			break;

		case 1:
			display_all_records(students,totalStudents);
			break;

		case 2:
			add_new_records(&totalStudents,maxEntries);
			break;

		case 3:
			delete_existing_data();
			break;

		default:
			printf("Invalid Input \n");
		}
	}
}

void menuButton()
{	printf("===============================\n");
	printf("Enter 1 to Show all records\n");
	printf("Enter 2 to Add a new records\n");
	printf("Enter 3 to Delete a records\n");
	printf("Enter 0 to Exit the Program\n");
	printf("Enter your option here:\n");
	printf("===============================\n");
}

void display_all_records(STUDENT_INFO_t *pBaseAddrofEntries, int totalStudents)
{
	if (totalStudents == 0)
	{	printf("===============================\n");
	    printf("No student records available.\n");
	    printf("===============================\n");
	}

	for (int i =0; i < totalStudents; i++){
		printf("===============================\n");
		printf("====== Student %d Details ======\n",i+1);
		printf("===============================\n");
		printf("Roll Number: %d\n",pBaseAddrofEntries[i].roll_no);
		printf("Student Name: %s\n",pBaseAddrofEntries[i].studName);
		printf("Semester : %s\n",pBaseAddrofEntries[i].sem);
		printf("Branch: %s\n",pBaseAddrofEntries[i].branch);
		printf("Date of Birth: %s\n",pBaseAddrofEntries[i].dob);
		printf("Location : %s\n",pBaseAddrofEntries[i].loc);
		printf("===============================\n");
	}
}

void add_new_records(uint32_t *totalStudents, uint32_t maxEntries)
{
	uint32_t temp;
	if (*totalStudents >= maxEntries)
	{
		printf("===============================\n");
		printf("Student database if Full \n");
		printf("===============================\n");

	}
	else
	{
		printf("Enter Roll number:\n");
		scanf("%d",&temp);
			for(uint32_t i = 0; i < *totalStudents ; i ++)
			{
				if (students[i].roll_no == temp)
				{
					printf("===============================\n");
					printf("Entered User Already Exists\n");
					printf("===============================\n");
					return;
				}
			}
		students[*totalStudents].roll_no = temp;
		printf("Enter Student Name: \n");
		scanf(" %99[^\n]",students[*totalStudents].studName);
		printf("Enter semester:\n");
		scanf(" %49[^\n]",students[*totalStudents].sem);
		printf("Enter your Branch: \n");
		scanf(" %59[^\n]",students[*totalStudents].branch);
		printf("Enter Date of Birth: (DD/MM/YYYY)\n");
		scanf("% 10[^\n]",students[*totalStudents].dob);
		printf("Enter Location:\n");
		scanf(" %149[^\n]",students[*totalStudents].loc);

		(*totalStudents)++;
	}
}

void delete_existing_data(void){
	if(totalStudents == 0){
		printf("===============================\n");
		printf("No Record Found");
		printf("===============================\n");
		return;
	}

	uint32_t temp, deleteIndex = 0, found = 0;

	printf("Enter the Roll Number to delete the data:\n");
	scanf("%d",&temp);

	for(uint32_t i = 0; i < totalStudents ; i ++)
	{
		if (students[i].roll_no == temp)
		{
			printf("===============================\n");
			printf("Data of %d is Successfully Deleted\n",temp);
			printf("===============================\n");
			deleteIndex = i;
			found = 1;
			break;
		}
	}
	if(found == 0){
		printf("===============================\n");
		printf("User Not Found!\n");
		printf("===============================\n");
	}
	if(found == 1){
		for(uint32_t i = deleteIndex; i < totalStudents -1 ; i++ ){
			students[i] = students[i + 1];
		}
	}
	if(found == 1){
		totalStudents --;
	}
}


