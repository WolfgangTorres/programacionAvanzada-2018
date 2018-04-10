#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct $
{
	char firstName[20];
	char lastName[20];
	char id;
	char semester[3];
} Student;

int main(int argc, char const *argv[])
{
	char *dbName = "student.dat";
	Student myStudent;

	char *searchName = argv[1];

	FILE *data = fopen(dbName,"rb");

	while(1)
	{
		fread(&myStudent, sizeof(Student),1,data);
		if (feof(data))
		{
			break;
		}
		if (!strcmp(myStudent.firstName, searchName))
		{
			printf("Student info: \n");
			printf("firstName: %s\n", myStudent.firstName);
			printf("lastName: %s\n", myStudent.lastName);
			printf("id: %i\n", myStudent.id);
			printf("semester: %s\n", myStudent.semester);
			break;
		}
	}
	

	fclose(data);
	return 0;
}