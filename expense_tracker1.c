#include<stdio.h>
struct Expense{
    char name [100];
    float amnt;
    
};
void saveexpense(struct Expense e){
    FILE*fp;
    fp=fopen("Expenses.txt","a");
    if(fp==NULL){
        printf("the file does not exist\n");
        return;
    }
    fprintf(fp,"%s %.2f\n",e.name,e.amnt);
    fclose(fp);
}
void viewExpenses(){
    FILE*fp;
    struct Expense e;
    fp=fopen("Expenses.txt","r");
    if(fp==NULL){
        printf("the file does not exist\n");
        return;
    }
    printf("\n------EXPENSES!!------\n");
    while(fscanf(fp,"%s %f",e.name,&e.amnt)==2){
        printf("%s %.2f",e.name,e.amnt);
    }
    fclose(fp);    
}
int main(){
struct Expense expense[100];
int count=0;
float sum=0;
char chose='Y';
while(chose=='Y'||chose=='y'){
    printf("\nEnter the expense");
    scanf("%f",&expense[count].amnt);
     // sum=sum+expense[count].amnt;

    while(getchar()!='\n'); // flush newline
    printf("\nEnter the name:");
    fgets(expense[count].name, sizeof(expense[count].name), stdin);
       // printf("\nenter the name");
       // scanf("%s",expense[count].name);
    saveexpense(expense[count]);
    count++;
        
    if(count==100){
        printf("Limit reached");
        break;
        }
        printf("\nAdd more expenses? - Y/N");
        scanf(" %c",&chose);
        
    }
    
    printf("\nExpenses!!\n");
    for(int i=0;i<count;i++){
        printf("Name:%s\n",expense[i].name);
        printf("Amount:%.2f\n",expense[i].amnt); 
        
    }
    

    for (int i = 0; i < count; i++) {
    sum = sum + expense[i].amnt; // total expenses!!
}

    printf("Total expense = %.2f\n", sum);

    viewExpenses();
    return 0;
}
    //for(int i=0;i<100;i++){
      //  printf("\nenter the expense");
      //  scanf("%f",&expenses[i].amnt);
      //  printf("\nenter the name");
       // scanf("%s",expenses[i].name); 

   // }   // break the loop - how?
   // for(int i=0;i<100;i++){
   //     printf("\nName:%s",expenses[i].name);
    //    printf("\nAmount:%.2f",expenses[i].amnt); 
  //  }
  //  } 

    
    
   
