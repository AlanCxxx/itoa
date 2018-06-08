#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void wrtAx(int16_t Ax){
  int digit=0;
  int minus=45;
  int zero=48;
  int zeroFlag=0;

  if (Ax<0) {
    Ax=-Ax;
    digit=minus;
    putchar(digit);
  }

  digit=0;
  while (Ax>=10000) {
      digit++;
      Ax=Ax-10000;
  }
  zeroFlag=zeroFlag+digit;
  if (zeroFlag>0) {
    digit=digit+zero;
    putchar(digit);
  }

  digit=0;
  while (Ax>=1000) {
      digit++;
      Ax=Ax-1000;
  }
  zeroFlag=zeroFlag+digit;
  if (zeroFlag>0) {
    digit=digit+zero;
    putchar(digit);
  }

  digit=0;
  while (Ax>=100) {
      digit++;
      Ax=Ax-100;
  }
  zeroFlag=zeroFlag+digit;
  if (zeroFlag>0) {
    digit=digit+zero;
    putchar(digit);
  }

  digit=0;
  while (Ax>=10) {
      digit++;
      Ax=Ax-10;
  }
  zeroFlag=zeroFlag+digit;
  if (zeroFlag>0) {
    digit=digit+zero;
    putchar(digit);
  }

  digit=Ax+zero;
  putchar(digit);
}

int main(void)
{
  int16_t Ax;

  Ax=-123;
  wrtAx(Ax);

  return 0;
}
