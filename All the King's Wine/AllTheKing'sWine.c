#include<stdio.h>

int main(){
	int numberOfDiedServants;
	int numberOfServants;
	int currServant;
	unsigned bottle = 0;
	puts("Enter the number of servants you have!");
	printf("Constrains:0 - %d:",sizeof(int)*8-1);
	while(scanf("%d",&numberOfServants)!= 1 || numberOfServants < 0 || numberOfServants > sizeof(int)*8-1 ){
		fflush(stdin);
	}
	if(numberOfServants <= 0){
		puts("inpossible to find which bottle was poisoned");
		return 0;
	}
	printf("Max bottles:%d\n",1<<numberOfServants);
	puts("How many servants has died?");
	while(scanf("%d",&numberOfDiedServants)!= 1 || numberOfDiedServants < 0 || numberOfDiedServants > numberOfServants ){
		fflush(stdin);
	}
	if(numberOfDiedServants > 0)
		puts("Enter the servants which has died");
	for (char servant = 0; servant < numberOfDiedServants; servant++,fflush(stdin))
	{
		printf("Enter servant %d:",servant+1);		
		if(scanf("%d",&currServant)!= 1 || currServant < 1 || currServant > numberOfServants){
				servant--;
				continue;
		}
		bottle|=1<<currServant-1;
	}
	printf("The poisoned bottle is %d\n",++bottle);
	return 0;
}