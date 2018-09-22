#include<stdio.h>
void main(){
	int arr[10],i,j=0,k=2,n,temp=1,arr1[2][10],n1,pow=0,count=0,max,temp1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++){
		n1=arr[i];
			while(n1!=1){
			if(n1%k==0){
			n1=n1/k;
			pow++;
		}
			else{
				n1=arr[i];
				//arr1[j]=k;
				//arr1[j+1]=pow;
				k++;
				pow=0;
				//count=count+2;
				//j=j+2;
			}
			//arr1[j]=k;
			arr1[0][j]=pow;	
			arr1[1][j]=arr[i];
		}
		j=j+1;
		count++;
		k=2;
		pow=0;
			}
			
			printf("Array Before Sort:\n \n")
			for(i=0;i<2;i++){
				for(j=0;j<n;j++){
					printf("%d , ",arr1[i][j]);
				}
				printf("\n");
			}
			
			for (i = 0; i < 2; ++i) 
        	{
            	for (j = i + 1; j < n; ++j)
           		{
                	if (arr1[0][i] > arr1[0][j]) 
               		{
 
                    temp =  arr1[0][i];
                    temp1= arr1[1][i];
                    arr1[0][i]= arr1[0][j];
                    arr1[1][i]=arr1[1][j];
                    arr1[0][j] = temp;
                    arr1[1][j]=temp1;
                	}
 
           	 	}
            
 	printf("Array After Sort:\n \n");
       	   }
        	for(i=0;i<2;i++){
				for(j=0;j<n;j++){
					printf("%d , ",arr1[i][j]);
				}
				printf("\n");
			}
		}
