 #include <stdio.h>
 #include <string.h>
 
 void copy(char *userId)
 {
 	char buff[15];
 	strncpy(buff,userId,14);
	printf("User Id is : %s \n", buff);

 }
 
int main()
{
	char Id[15];
	printf("Enter the ID : \n");
	scanf("%s", Id);
	copy(Id);
	return 0;
}


