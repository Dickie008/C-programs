#include <stdio.h>

int main(){
	int bookID,dueDate,returnDate,daysOverdue;
	float fineAmount;
	float fineRate;
	
	// Userinput for book ID,due date and return date
	printf("Enter Book ID:");
	scanf("%d",&bookID);
	printf("Enter Due Date:");
	scanf("%d",&dueDate);
	printf("Enter return Date:");
	scanf("%d",&returnDate);
	
	//Calculate days overdue
	daysOverdue=returnDate-dueDate;
	
	//Determine fine rate based on days overdue
	if(daysOverdue<=7){
		fineRate = 20.0;
	}else if(daysOverdue<=14){
		fineRate = 50.0;
	}else{
		fineRate = 100.0;
	}
	fineAmount = daysOverdue*fineRate;
	
	printf("Book ID:%d\n",bookID);
	
	printf("Due Date:%d\n",dueDate);
	
	printf("days overdue %d\n",daysOverdue);
	printf("return date %d\n",returnDate);
	printf("fine amount %f\n",fineAmount);
	printf("fine rate %f\n",fineRate);
	
	
return 0;	
}