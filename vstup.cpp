#include <stdio.h>
#include <math.h>

int main(void) {
	int menu_q;

	printf("Vyberte jednu moznost: \n");
	printf("1. trojuhelnik\n"); //existuje?, je pravouhly, obvod + obsah
	printf("2. obdelnik\n"); //je to ctverec?, obvod + obsah
	printf("3. kruznice\n"); //obvod, obsah

	scanf("%d", &menu_q);

	if (menu_q == 1) { trojuhelnik(); }
	if (menu_q == 2) { obdelnik(); }
	if (menu_q == 3) { kruznice(); }
}

int trojuhelnik(void) {
	int a, b, c, prepona, obvod, odves1, odves2;
	int pravouhly = 0;
	int existuje = 0;
	float obsah;

//----------Input promenych---------
	system("cls");

	printf("Vlozet delku strany a v cm:\n");
	scanf("%d", &a);

	system("cls");

	printf("Vlozet delku strany b v cm:\n");
	scanf("%d", &b);

	system("cls");

	printf("Vlozet delku strany c v cm:\n");
	scanf("%d", &c);

	system("cls");

//------------------

//---------Overeni existence---------
	if ((a + b > c) && (a + c > b) && (b + c > a)) { existuje = 1; }
//------------------

//---------Vypocet v pripade existence---------
	if (existuje == 1) {
		//---------Pravouhly---------
		prepona = a; odves1 = b; odves2 = c;
		if (b > prepona) { prepona = b; odves1 = a; odves2 = c; }
		if (c > prepona) { prepona = c; odves1 = a; odves2 = b; }

		//c^2 = a^2 + b^2

		if (odves1 * odves1 + odves2 * odves2 == prepona * prepona) { pravouhly = 1; }
		//----------------

		//--------Obvod--------
		obvod = a + b + c;
		//----------------

		//--------Obsah--------
		float s = obvod / 2;
		obsah = sqrt(s * (s - odves1) * (s - odves2) * (s - prepona));
		//----------------
	}
//------------------

//--------Vypis v pripade existence--------
	if (existuje != 1) {
		printf("Trojuhelink neexistuje\n");
	}
	else {
		if (pravouhly == 1) { printf("Trojuhelnik je pravouhly\n"); }
		else { printf("Trojuhelnik neni pravouhly\n"); }

		printf("Obvod trojuhelniku je: %d\n", obvod);
		printf("Obsah trojuhelniku je: %f\n", obsah);
	}
//----------------
}

int obdelnik(void) {
	int a, b, obvod, obsah;
	int ctverec = 0;

//----------Input promenych---------
	system("cls");

	printf("Vlozet delku strany a v cm:\n");
	scanf("%d", &a);

	system("cls");

	printf("Vlozet delku strany b v cm:\n");
	scanf("%d", &b);

	system("cls");
//------------------

//----------Ctverec?----------
	if (a == b) { ctverec = 1; }
//--------------------

//----------Obvod----------
	obvod = 2 * (a + b);
//--------------------

//----------Obsah----------
	obsah = a * b;
//--------------------

//----------Vypis----------
	if (ctverec == 1) { printf("Zadany obdelnik je ctverec\n"); }

	printf("Obvod: %d\n", obvod);
	printf("Obsah: %d\n", obsah);
//--------------------
}

int kruznice(void) {
	int r;
	float obvod, obsah;

//----------Input promenych---------
	system("cls");

	printf("Vlozet polomer kruznice v cm:\n");
	scanf("%d", &r);

	system("cls");
//------------------

//---------Obvod---------
	obvod = 2 * 3.14 * r;
//------------------

//---------Obsah---------
	obsah = 3.14 * r * r;
//------------------

//---------Vypis---------
	printf("Obvod: %f\n", obvod);
	printf("Obsah: %f\n", obsah);
//------------------
}