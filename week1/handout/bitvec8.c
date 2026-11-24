#include "stdio.h"
#include "bitvec8.h"
bitvec8 bitvec8_from_int(unsigned int x) {
  return 0xFF & x;
}

unsigned int bitvec8_to_int(bitvec8 v) {
  return v;
}

struct add_result {
  bitvec8 s;
  bitvec8 c;
};

struct add_result sum_and_carry(bitvec8 x, bitvec8 y) {
  // calculate partial sum
  bitvec8 sum = x ^ y; 
  bitvec8 carry = (x & y) << 1;
  // add to struct
  struct add_result result;
  result.s = sum;
  result.c = carry;
  
  return result;
}


bitvec8 bitvec8_add(bitvec8 x, bitvec8 y) {

  // 1st computation
  struct add_result sc1 = sum_and_carry(x, y);

  // 2nd computation 
  struct add_result sc2 = sum_and_carry(sc1.s, sc1.c);

  // 3rd computation 
  struct add_result sc3 = sum_and_carry(sc2.s, sc2.c);

  // 4th computation 
  struct add_result sc4 = sum_and_carry(sc3.s, sc3.c);

  // 5th computation 
  struct add_result sc5 = sum_and_carry(sc4.s, sc4.c);

  // 6th computation 
  struct add_result sc6 = sum_and_carry(sc5.s, sc5.c);

  // 7th computation 
  struct add_result sc7 = sum_and_carry(sc6.s, sc6.c);

  return sc7.s;
}

void bitvec8_print(bitvec8 v) {
  putchar('0' + ((v>>7) & 1));
  putchar('0' + ((v>>6) & 1));
  putchar('0' + ((v>>5) & 1));
  putchar('0' + ((v>>4) & 1));
  putchar('0' + ((v>>3) & 1));
  putchar('0' + ((v>>2) & 1));
  putchar('0' + ((v>>1) & 1));
  putchar('0' + (v & 1));
}
