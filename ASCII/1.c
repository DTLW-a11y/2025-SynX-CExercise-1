   #include <stdio.h>
   
   int main() {
       char a = 'a';
       printf("%d",a);
       return 0;
   }
   /*
   输出结果：97
   我认为，其实char类型的变量本质上也是一个0~255之间的数字，
   只是在输出时会根据ASCII码表进行对应。
   ‘a’的ASCII码值即为97，故以“%d”输出‘a’的数值时，
   输出97。
   */