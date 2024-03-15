 #include<stdio.h>
 int main(){
 	int i,j,arr[1000],n=0,check;
 	
 	printf("please enter size of array: ");
 	scanf("%d", &n);
 	
 	printf("\nEnter elements of your array: ");
 	for(i=0;i<n;++i){
 		scanf("%d", &arr[i]);
	 }

	 
	 printf("\nentered elements are: \t");
	 for(i=0;i<n;++i){
	 	printf("%d\t",arr[i]);
	 	
	 }
	 
	 for(i=0;i<n;++i){
	 	for(j=i+1;j<n;++j){
	 		if(arr[i]>arr[j]){
	 			check = arr[i];
	 			arr[i] = arr[j];
	 			arr[j] = check;
			 }
		 }
	 }
	 printf("\nASC order of elements:\t");
	 for(i=0;i<n;i++){
	 	printf("%d\t", arr[i]);
	 }
	 
	 for(i=0;i<n;++i){
	 	for(j=i+1;j<n;++j){
	 		if(arr[i]<arr[j]){
	 			check = arr[i];
	 			arr[i] = arr[j];
	 			arr[j] = check;
			 }
		 }
	 }
	 printf("\nDESC order of elements:\t");
	 for(i=0;i<n;i++){
	 	printf("%d\t", arr[i]);
	 }
	return 0;
 }