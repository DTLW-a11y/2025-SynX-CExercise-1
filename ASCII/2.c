   #include <stdio.h>
   
   int main(){
       char a = '1';
       //预期输出结果 1
       //请在这里补全代码
       a -= '0';
       //
       printf("%d",a);
       return 0;
   }
   /*
          存储数值  对应字符
a赋值时：    49        1
a输出时：     1       SOH
   */