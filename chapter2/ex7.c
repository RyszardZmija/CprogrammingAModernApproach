// ex7 from the chapter 2

#include <stdio.h>

int main(void) {
    int dollars = 0, billTwenty = 0, billTen = 0,
     billFive = 0, billOne = 0;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    // the number of whole 20's we can get
    billTwenty = dollars / 20;
    dollars -= billTwenty * 20; // the same as dollars = dollars - billTwenty * 20

    billTen = dollars / 10;
    dollars -= billTen * 10;

    billFive = dollars / 5;
    dollars -= billFive * 5;

    billOne = dollars;

    // output the results
    printf("$20 bills: %d\n", billTwenty);
    printf("$10 bills: %d\n", billTen);
    printf("$5 bills: %d\n", billFive);
    printf("$1 bills: %d\n", billOne);

    return 0;
}