#include <stdio.h> 

#include <stdlib.h> 



int main() 

{

 int h,m,s;  

 printf("請輸入你的出生年分(西元)：");

 scanf("%d",h);   

 printf("請輸入你的出生月分：");

 scanf("%d",&m);

 printf("請輸入你的出生日期：");

 scanf("%d",&s); 

 printf("你的出生年月日為：%d,%d,%d\n",h,m,s);

 system("pause");   

 return 0;

}

