# 2022c
資傳一甲程式設計的程式倉庫
# Week01
放假(中秋節)

# Week02

# Week03

# Week04

# Week05

# Week06
## step01-0
考試九九乘法表
```cpp
#include <stdio.h>
int main()
{
  for(int a=1; a<=9; a++){
      for(int b=1; b<=8; b++){
          printf("%d*%d=%2d ", b, a, a*b);
      }
      printf("\n");
  }
}
```
## step01-1
畫星星
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        int star= i*2-1;
        printf("鷹架:%d樓 %d星\n", i, star);///先寫出第一個左手迴圈,鷹架確定OK
    }
}
/*   有點像2倍 2倍-1
     *     1樓 1星
    ***    2樓 3星
   *****   1樓 5星
  *******  1樓 7星
 ********* 1樓 9星
 ## step02-2
 #include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){  ///(1)樓層鷹架
        int space = 5-i; ///(2)數有幾個空格
        int star = i*2-1; ///(2)數有幾個星星
        for(int k=0; k<space; k++){ ///(3)迴圈標準型
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }

        printf(" 鷹架:%d樓 %d空格 %d星\n", i, space, star);
    } ///(1)樓層鷹架
}
///
## step03-3
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, ans;
    scanf("%d %d", &a, &b);

    for(int i=1; i<=a; i++){
        if( a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d", ans);
}
## step04-4
#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, c;
    scanf("%d %d", &a, &b);

    while(1){
        c = a%b;
        printf("a:%d b:%d :%d\n", a, b, c);
        if( c==0 ) break;
        a = b;
        b = c;
    }
    printf("中的是:%d", b);
}
## step05-5
#include <stdio.h>
int main()
{
    int a=10;
    if(-999 ) printf("-999成立\n");
    if(-3 ) printf("-3成立\n");
    if(-2 ) printf("-2成立\n");
    if(-1 ) printf("-1成立\n");
    if(0 ) printf("0成立\n");
    if(1 ) printf("1成立\n");
    if(2 ) printf("2成立\n");
    if(3 ) printf("3成立\n");
    if(4 ) printf("4成立\n");
    if(999 ) printf("999成立\n");
    if( "a=0" ) printf("不管什麼東西,幾乎都成立\n");
}
