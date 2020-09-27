#include <stdio.h>
int main(void) {
  float a,b;
  int key;
  printf("M e n e\n");
  printf("\t1. Add (+)\n");
  printf("\t2. Subtract(-)\n");
  printf("\t3. Multiply (*)\n");
  printf("\t4. Divide (/)\n");
  printf("\t5. Modulo (%)\n");
  printf("EnterNumber 1=");
  scanf("%f",&a);
  printf("EnterNumber 2=");
  scanf("%f",&b);
  printf("Select choice =");
  scanf("%d",&key);
  switch(key){
    case 1:
    printf("%.2f",a+b);
    break;
    case 2:
    printf("%.2f",a-b);
    break;
    case 3:
    printf("%.2f",a*b);
    break;
    case 4:
      if(b==0){
        printf("Divide by Zero!!!");
    }
       else
        printf("%.2f",a/b);
    break;
    case 5:
    if(b==0){
      printf("Divide by Zero!!!");
    }
    else
     printf("%.2f Modulo %.2f = %d",a,b, (int)a%(int)b);
    break;
  }
  return 0;
}