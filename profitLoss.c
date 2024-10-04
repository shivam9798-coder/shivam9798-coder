
#include <stdio.h>
int main()
{
     float cp;
     float sp;
     printf("what is the cost price of the product \n");
     scanf("%f",&cp);
     printf ("what is the selling price of the product \n");
     scanf("%f", &sp);

if(sp>cp) {
     float profit= sp - cp;
     printf("profit : %f",profit);
}else if (cp>sp) {
     float loss=sp-cp;
printf("loss :%f" ,loss);
}else printf("no profit, no loss");
return 0;
}
