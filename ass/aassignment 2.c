#incude <stdio.h>
int main () {
    int bookID,dueDate,returnDate,daysOverdue;
    int fineRate,fineAmount;
    
    printf("Enter book ID:");
    scanf("%d", &bookID);
    
     printf("Enter Due Date:");
    scanf("%d", &dueDate);
    
     printf("Enter Retuen Date:");
    scanf("%d", &returnDate);
    
    daysOverdue = returnDate-dueDate;
    
    if(daysOverdue <=7){fineRate =20;}
    else if(daysOverdue <=14){fineRate=50;}
    else{fineRate =100;}
    
    fineAmount=daysOverdue*fineRate;
    printf("book ID: %d\n",bookID);
      printf("Due Date: %d\n",dueDate);
        printf("Return Date: %d\n",returnDate);
          printf("Days Overdue: %d\n",daysOverdue);
            printf("Fine Rate: ksh%d\n",fineRate);
              printf("Total Fine Amount: ksh%d\n",fineAmount);
              
 return 0  ; 
}