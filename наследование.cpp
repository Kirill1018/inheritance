#include "inheritance.cpp"
enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело - синий
A Ч светло - зеленый
B Ч светло - голубой
— Ч светло - красный
E Ч светло - желтый
F Ч €рко - белый
system("color F0");*/  // ”становка белого фона и черного текста
void main()
{
	setlocale(LC_ALL, "ru");
	inheritance _inheritance;
	lat_alph _lat_alph;
	vow_lett_of_lat_alph _vow_lett_of_lat_alph;
	cons_lett_of_lat_alph _cons_lett_of_lat_alph;
	diphthongs _diphthongs;
	cyrillic _cyrillic;
	vow_lett_of_cyr _vow_lett_of_cyr;
	cons_lett_of_cyr _cons_lett_of_cyr;
	oth_lett _oth_lett;
	_inheritance._alphabet();
	_lat_alph.script_1();
	_vow_lett_of_lat_alph.sel_of_vow_lett_1();
	_cons_lett_of_lat_alph.sel_of_cons_lett_1();
	_diphthongs.combination();
	_cyrillic.script_2();
	_vow_lett_of_cyr.sel_of_vow_lett_2();
	_cons_lett_of_cyr.sel_of_cons_lett_2();
	_oth_lett.drive_lett();
}
void inheritance::_alphabet()
{
	SetColor(1, 0);
	cout << "все буквы" << endl;
	int x = 0;//перва€ буква
	while (x < 59)
	{
		cout << alphabet[x] << " ";
		x++;
	}
	cout << endl;
}
void lat_alph::script_1()
{
	int x = 0;//перва€ буква латинского алфавита
	while (x < 26)
	{
		lat_script[x] = alphabet[x];
		x++;
	}
	lat_alph lat_lett;
	lat_lett.print_lat_script(lat_script);
}
void lat_alph::print_lat_script(char* lat_script)
{
	SetColor(2, 0);
	cout << "буквы латинского алфавита" << endl;
	int x = 0;//перва€ буква латинского алфавита
	while (x < 26)
	{
		cout << lat_script[x] << " ";
		x++;
	}
	cout << endl;
}
void vow_lett_of_lat_alph::sel_of_vow_lett_1()
{
	vow_lett_1[0] = alphabet[0];
	vow_lett_1[1] = alphabet[4];
	vow_lett_1[2] = alphabet[8];
	vow_lett_1[3] = alphabet[14];
	vow_lett_1[4] = alphabet[20];
	vow_lett_1[5] = alphabet[24];
	vow_lett_of_lat_alph lat_lett;
	lat_lett.print_vow_lett_1(vow_lett_1);
}
void vow_lett_of_lat_alph::print_vow_lett_1(char* vow_lett_1)
{
	SetColor(3, 0);
	cout << "гласные буквы латинского алфавита" << endl;
	int x = 0;//перва€ гласна€ буква латинского алфавита
	while (x < 5)
	{
		cout << vow_lett_1[x] << " ";
		x++;
	}
	cout << endl;
}
void cons_lett_of_lat_alph::sel_of_cons_lett_1()
{
	cons_lett_1[0] = alphabet[1];
	cons_lett_1[1] = alphabet[2];
	cons_lett_1[2] = alphabet[3];
	cons_lett_1[3] = alphabet[5];
	cons_lett_1[4] = alphabet[6];
	cons_lett_1[5] = alphabet[7];
	cons_lett_1[6] = alphabet[9];
	cons_lett_1[7] = alphabet[10];
	cons_lett_1[8] = alphabet[11];
	cons_lett_1[9] = alphabet[12];
	cons_lett_1[10] = alphabet[13];
	cons_lett_1[11] = alphabet[15];
	cons_lett_1[12] = alphabet[16];
	cons_lett_1[13] = alphabet[17];
	cons_lett_1[14] = alphabet[18];
	cons_lett_1[15] = alphabet[19];
	cons_lett_1[16] = alphabet[21];
	cons_lett_1[17] = alphabet[22];
	cons_lett_1[18] = alphabet[23];
	cons_lett_1[19] = alphabet[25];
	cons_lett_of_lat_alph lat_lett;
	lat_lett.print_cons_lett_1(cons_lett_1);
}
void cons_lett_of_lat_alph::print_cons_lett_1(char* cons_lett_1)
{
	SetColor(4, 0);
	cout << "согласные буквы латинского алфавита" << endl;
	int x = 0;//перва€ согласна€ буква латинского алфавита
	while (x < 19)
	{
		cout << cons_lett_1[x] << " ";
		x++;
	}
	cout << endl;
}
void diphthongs::combination()
{
	sust_comb_1[0] = alphabet[0];
	sust_comb_1[1] = alphabet[4];
	sust_comb_2[0] = alphabet[14];
	sust_comb_2[1] = alphabet[4];
	sust_comb_3[0] = alphabet[0];
	sust_comb_3[1] = alphabet[20];
	sust_comb_4[0] = alphabet[4];
	sust_comb_4[1] = alphabet[20];
	diphthongs _combination;
	_combination.print_sust_comb(sust_comb_1, sust_comb_2, sust_comb_3, sust_comb_4);
}
void diphthongs::print_sust_comb(char* sust_comb_1, char* sust_comb_2, char* sust_comb_3, char* sust_comb_4)
{
	SetColor(5, 0);
	cout << "устойчивые звуковые сочетани€" << endl;
	cout << sust_comb_1[0] << sust_comb_1[1] << "," << " " << sust_comb_2[0] << sust_comb_2[1] << "," << " " << sust_comb_3[0] << sust_comb_3[1] << "," << " " << sust_comb_4[0] << sust_comb_4[1] << endl;
}
void cyrillic::script_2()
{
	SetColor(6, 0);
	cout << "кириллица" << endl;
	int x = 0, y = 26;//перва€ буква кириллицы
	while (y < 59)
	{
		cyrillics[x] = alphabet[y];
		cout << cyrillics[x] << " ";
		x++;
		y++;
	}
	cout << endl;
}
void vow_lett_of_cyr::sel_of_vow_lett_2()
{
	vow_lett_2[0] = alphabet[26];
	vow_lett_2[1] = alphabet[31];
	vow_lett_2[2] = alphabet[32];
	vow_lett_2[3] = alphabet[35];
	vow_lett_2[4] = alphabet[41];
	vow_lett_2[5] = alphabet[46];
	vow_lett_2[6] = alphabet[54];
	vow_lett_2[7] = alphabet[56];
	vow_lett_2[8] = alphabet[57];
	vow_lett_2[9] = alphabet[58];
	vow_lett_of_cyr cyr_lett;
	cyr_lett.print_vow_lett_2(vow_lett_2);
}
void vow_lett_of_cyr::print_vow_lett_2(char* vow_lett_2)
{
	SetColor(7, 0);
	cout << "гласные буквы кириллицы" << endl;
	int x = 0;//перва€ гласна€ буква кириллицы
	while (x < 9)
	{
		cout << vow_lett_2[x] << " ";
		x++;
	}
	cout << endl;
}
void cons_lett_of_cyr::sel_of_cons_lett_2()
{
	cons_lett_2[0] = alphabet[27];
	cons_lett_2[1] = alphabet[28];
	cons_lett_2[2] = alphabet[29];
	cons_lett_2[3] = alphabet[30];
	cons_lett_2[4] = alphabet[33];
	cons_lett_2[5] = alphabet[34];
	cons_lett_2[6] = alphabet[36];
	cons_lett_2[7] = alphabet[37];
	cons_lett_2[8] = alphabet[38];
	cons_lett_2[9] = alphabet[39];
	cons_lett_2[10] = alphabet[40];
	cons_lett_2[11] = alphabet[42];
	cons_lett_2[12] = alphabet[43];
	cons_lett_2[13] = alphabet[44];
	cons_lett_2[14] = alphabet[45];
	cons_lett_2[15] = alphabet[47];
	cons_lett_2[16] = alphabet[48];
	cons_lett_2[17] = alphabet[49];
	cons_lett_2[18] = alphabet[50];
	cons_lett_2[19] = alphabet[51];
	cons_lett_2[20] = alphabet[52];
	cons_lett_of_cyr cyr_lett;
	cyr_lett.print_cons_lett_2(cons_lett_2);
}
void cons_lett_of_cyr::print_cons_lett_2(char* cons_lett_2)
{
	SetColor(8, 0);
	cout << "согласные буквы кириллицы" << endl;
	int x = 0;//перва€ согласна€ буква кириллицы
	while (x < 20)
	{
		cout << cons_lett_2[x] << " ";
		x++;
	}
	cout << endl;
}
void oth_lett::drive_lett()
{
	diff_drive_lett[0] = alphabet[54];
	diff_drive_lett[1] = alphabet[55];
	oth_lett drive_lett;
	drive_lett.print_diff_drive_lett(cyrillics, diff_drive_lett);
}
void oth_lett::print_diff_drive_lett(char* cyrillics, char* diff_drive_lett)
{
	SetColor(9, 0);
	cout << "остальные буквы кириллицы" << endl;
	cout << diff_drive_lett[0] << " " << diff_drive_lett[1] << endl;
}