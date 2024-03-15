#include<stdio.h>
int main(){
	int array[10] = {1,2,3,7,9,12,56,32,8,42};
	int i,flag,number;
	
   printf("elements in array are:\n");
   for(i=0;i<10;++i){
   	printf("%d\t",array[i]);
   }
   printf("\nplease enter element to be searched its location\n");
   scanf("%d", &number);
   
   for(i=0;i<10;++i){
   	if(array[i] == number){
   		flag = i+1;
   		break;
	   }
	   else{
	   	flag = 0;
	   }
	 
   }
	  
    if(flag!=0){
   	   printf("item found location %d", flag);
   	}
   	else{
   	   	printf("item not found");
	}
}