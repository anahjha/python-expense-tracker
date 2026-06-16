#include<stdio.h>
struct Expense{
    char name [50];
    float amnt;
};
int main()
{
    struct Expense expense[100];
    int count=0;
    char chose='Y';

    while(chose=='Y'||chose=='y'){
        printf("\nenter the expense");
        scanf("%f",&expense[count].amnt);
        printf("\nenter the name");
        scanf("%s",expense[count].name);
        count++;

        if(count==100){
            printf("limit reached");
            break;
        }
        printf("Add more expenses? - Y/N");
        scanf(" %c",&chose);
    }
    printf("\nexpenses!!\n");
    for(int i=0;i<count;i++){
        printf("\nName:%s",expense[i].name);
        printf("\nAmount:%.2f",expense[i].amnt); 
    }
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

    
    
   
