#include<stdio.h>
#include<conio.h>
main(){
	int elem[100],n,i,j,oddsum=0,evensum=0,odd[10],even[10];
	system("COLOR 0A");
	printf("Enter the numbers of elements \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&elem[i]);
	}
	printf("The Elements are :");
	for(i=0;i<n;i++){
		if(i%2==0){
		system("COLOR 0D");
	}else
{
system("COLOR 0C");
}
printf("%d",elem[i]);
for(i=0;i<n;i++){
odd[i]=elem[i];
}
printf("%d",&odd[i]);


		printf("%d ",elem[i]);
	}
	for(i=0;i<n;i++){
	
	if(elem[i]%2==0){
	//	scanf("%d",&even[i]);
		evensum+=elem[i];
	}else{
	//	scanf("%d",&odd[i]);
		oddsum+=elem[i];
	}
}system("COLOR 0B");
	printf("\nThe sum of odd elements are = %d",oddsum);
	printf("\nThe sum of even elements are = %d",evensum);
	getch();
	return 0;
}
