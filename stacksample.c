#include<stdio.h>
int stack[1000],i,n,choice=0,top=-1;
void push();
void pop();
void show();
int main(){
	printf("pls enter number of element in stack: ");
	scanf("%d",&n);
	
	printf("\nstack operations are...\n");
	printf("\n*******************************************************\n");
	
	while(choice!=4){
		printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);
        
        switch(choice){
        	case 1:{
        		push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				show();
				break;
			}
		}
	}
	
	return 0;
}
void push(){
	int val;
	if(top==n){
		printf("\nelement are full in stack\n");
		
	}
	else{
		printf("enter value: ");
		scanf("%d", &val);
		top+=1;
		stack[top] = val;
		printf("\nelement inserted\n");
	}
}

void pop(){
	if(top==-1){
		printf("no element inside stack");
		
	}
	else{
		top-=1;
		printf("\nelement deleted sucessfull\n");
	}
}
void show(){
	printf("elements in array are:\n");
	for(i=top;i>=0;i--){
		printf("%d\n", stack[i]);
	}
	if(top==-1){
		printf("stach is empty");
	}
}