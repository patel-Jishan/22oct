#include<stdio.h>
int main(){
	int row,column;
	printf("enter row :");
	scanf("%d",&row);
	printf("enter column :");
	scanf("%d",&column);
	int arr[row][column];
	
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
			
		}
		
}
for (i=0;i<row;i++){
	for(j=0;j<column;j++){
		printf("%d",arr[i][j]);
	}
	printf("\n");
}
		int choice,rowsum=0,columnsum=0,rownumber,columnnumber;
          		
    do{
    	
    	printf("enter 1 if you want row\n");
    	printf("enter 2 if you want column\n");
    	printf("enter 3 if you want to exit\n");
    	printf("enter your choice :");
		scanf("%d",&choice);
		
	switch (choice){
		case 1:
			rowsum=0;
			printf("enter row number :");
			scanf("%d",&rownumber);
			for(i=rownumber;i<=rownumber;i++){
		for(j=0;j<column;j++){
			rowsum=rowsum+arr[i][j];
			}
		}
		printf("sum of %d row elements is : %d\n ",rownumber,rowsum);
		break;
		
		case 2:
			columnsum=0;
			printf("enter column number :");
			scanf("%d",&columnnumber);
			for(i=0;i<row;i++){
		for(j=columnnumber;j<=columnnumber;j++){
			columnsum=columnsum+arr[i][j];
		}
	}
	printf("sum of %d row elements is : %d\n ",columnnumber,columnsum);
	break;
	case 3:
		printf("You are exited successfully \n");
		
			
	}
	
}
while(choice!=3);
  }
