//Scenario
//Check the program below.Find all possible compilation errors and logic errors.Fix them, but you may not change any character values.You may change variable names.Your version of the program must print the same result as the expected output.Before you use your compiler, try to find the errors only by manual code analysis.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Code:
//
//#include <stdio.h>
//
//int main()
//{
//	char firstLetter = 'A';
//	char firstSmallLetter = 'a';
//	char lastLetter = 'Z';
//	char lastSmallLetter = 'z';
//	printf("Upper case letters beetween (and with) '%c' and '%c' is : %d\n",
//		lastLetter, firstSmallLetter, lastLetter firstLetter 1);
//	printf("Lower case letters beetween (and with) '%c' and '%c' is : %d\n",
//		lastSmallLetter, firstSmallLetter, lastSmallLetter, firstLetter, 1);
//	return 0;
//}
//
//Expected output
//Upper case letters beetween(and with) 'Z' and 'A' is: 26
//Lower case letters beetween(and with) 'z' and 'a' is: 26
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
	char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';
	printf("Upper case letters between (and with) '%c' and '%c' is: %d\n", firstLetter, lastLetter, lastLetter - firstLetter + 1);
	printf("Upper case letters between (and with) '%c' and '%c' is: %d\n", firstSmallLetter, lastSmallLetter, lastSmallLetter - firstSmallLetter + 1);
	return 0;
}