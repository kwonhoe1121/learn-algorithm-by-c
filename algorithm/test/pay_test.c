#include "common.h"

int main(int argc, char *argv[])
{
   int money = 100;
   int bills[6] = { 1, 2, 5, 10, 20, 50 };

   debug("bills[6] = { 1, 2, 5, 10, 20, 50 } => pay: %d", pay(money, bills, 6));
}


