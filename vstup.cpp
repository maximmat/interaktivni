#include <stdio.h>

int main(void) {
	int menu_q;

	printf("Vyberte jednu moznost: \n");
	printf("1. trojuhelnik\n"); //existuje?, je pravouhly, obvod + obsah
	printf("2. obdelnik\n"); //je to ctverec?, obvod + obsah
	printf("3. kruznice\n"); //obvod, obsah

	scanf("%d", &menu_q);

	if (menu_q == 1) {
		trojuhelnik();
	}
	if (menu_q == 2) {

	}
	if (menu_q == 3) {

	}
;
}

int trojuhelnik(void) {
	int a, b, c, existuje, max, pravouhly, obvod, obsah, odves1, odves2;

//----------Input promenych---------
	system("cls");

	printf("Vlozet delku strany a\n");
	scanf("%d", &a);

	system("cls");

	printf("Vlozet delku strany b\n");
	scanf("%d", &b);

	system("cls");

	printf("Vlozet delku strany c\n");
	scanf("%d", &c);

	system("cls");

//------------------

//---------Overeni existence---------
	if ((a + b > c) && (a + c > b) && (b + c > a)) existuje = 1;
//------------------

//---------Vypocet v pripade existence---------
	if (existuje == 1) {
		//---------Pravouhly---------
		max = a; odves1 = b; odves2 = c;
		if (b > max) max = b; odves1 = a; odves2 = c;
		if (c > max) max = c; odves1 = a; odves2 = b;

		//c^2 = a^2 + b^2

		if (odves1 * odves1 + odves2 * odves2 == max * max) pravouhly = 1;
		//----------------

		//--------Obvod--------
		obvod = a + b + c;
		//----------------

		//--------Obsah--------
			//TO-DO zjistit vysku
		//----------------
	}
//------------------
	if (existuje != 1) {
		printf("Trojuhelink neexistuje\n");
	}
	else {
		if (pravouhly == 1) printf("Trojuhelnik je pravouhly\n");
		else printf("Trojuhelnik neni pravouhly\n");

		printf("Obvod trojuhelniku je: %d", obvod);
		printf("Obsah trojuhelniku je: %d", 0); //Nefunkcni nezaname vysku

	}

}