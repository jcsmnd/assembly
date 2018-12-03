//ASCII <-> EBCDIC  Myungsik
#include <stdio.h>

_ASCII_EBCDIC(int inkey1);
_EBCDIC_ASCII(int inkey2);

void main()
{
int num1, num2, result1, result2; 
char code1 ,code2; 

printf("ASCII->EBCDIC:");
scanf("%c",&code1);
fflush(stdin);

num1 = code1;
result1 = _ASCII_EBCDIC(num1);
printf("입력한 ASCII값 %c은(는) EBCDIC값으로 Dex=%d hex=%X 이다.",code1,result1,result1); 

printf("EBCDIC->ASCII:");
scanf("%c",&code2);

num2 = code2;
result2 = _EBCDIC_ASCII(num2);
printf("입력한 EBCDIC값 %c은(는) ASCII값으로 Dex=%d hex=%X 이다.",code2,result2,result2); 
}