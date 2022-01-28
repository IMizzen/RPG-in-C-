#include <stdio.h>
#include <stdlib.h>



void RPG(int N)
{
    int i=0;

    int passw=0;
    srand((unsigned int)(time(NULL)));

    char numbers[]= "1234567890";

    char letter[] = "abcdefghijklmnoqprstuvwyzx";

    char B_letter[] = "ABCDEFGHIJKLMNOQPRSTUVWYZX";

    char symbols[] = "?*=%+!<>@#$";

    char password[N];

    passw= rand() % 6 ;


    for (i = 0; i < N; i++) {

	if (passw == 1) {
		password[i] = numbers[rand() % 10];
		passw = rand() % 4;
		printf("%c", password[i]);
	}
	else if (passw == 2) {
		password[i] = symbols[rand() % 12];
		passw = rand() % 4;
		printf("%c", password[i]);
	}
	else if (passw == 3) {
		password[i] = letter[rand() % 26];
		passw = rand() % 4;
		printf("%c", password[i]);
	}
	else {
		password[i] = B_letter[rand() % 26];
		passw = rand() % 4;
		printf("%c", password[i]);
	}
}
}


int main()
{
    int N = 10;

    RPG(N);

    getch();
    return 0;
}
