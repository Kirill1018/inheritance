#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
using namespace std;
class inheritance
{
public:
	void _alphabet();
protected:
	char alphabet[59] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'à', 'á', 'â', 'ã', 'ä', 'å', '¸', 'æ', 'ç', 'è', 'é', 'ê', 'ë', 'ì', 'í', 'î', 'ï', 'ð', 'ñ', 'ò', 'ó', 'ô', 'õ', 'ö', '÷', 'ø', 'ù', 'ú', 'û', 'ü', 'ý', 'þ', 'ÿ' };
};
class lat_alph : public inheritance
{
public:
	void script_1();
protected:
	char lat_script[26] = {};
	void print_lat_script(char* vow_lett_1);
};
class vow_lett_of_lat_alph : public lat_alph
{
public:
	void sel_of_vow_lett_1();
protected:
	char vow_lett_1[6] = {};
	void print_vow_lett_1(char* lat_script);
};
class cons_lett_of_lat_alph : public lat_alph
{
public:
	void sel_of_cons_lett_1();
protected:
	char cons_lett_1[20] = {};
	void print_cons_lett_1(char* cons_lett_1);
};
class diphthongs : public lat_alph
{
public:
	void combination();
protected:
	void print_sust_comb(char* sust_comb_1, char* sust_comb_2, char* sust_comb_3, char* sust_comb_4);
	char sust_comb_1[2] = {}, sust_comb_2[2] = {}, sust_comb_3[2] = {}, sust_comb_4[2] = {};
};
class cyrillic : public inheritance
{
public:
	void script_2();
protected:
	char cyrillics[33] = {};
};
class vow_lett_of_cyr : public cyrillic
{
public:
	void sel_of_vow_lett_2();
protected:
	void print_vow_lett_2(char* vow_lett_2);
	char vow_lett_2[10] = {};
};
class cons_lett_of_cyr : public cyrillic
{
public:
	void sel_of_cons_lett_2();
protected:
	void print_cons_lett_2(char* cons_lett_2);
	char cons_lett_2[23] = {};
};
class oth_lett : public cyrillic
{
public:
	char diff_drive_lett[2] = {};
	void drive_lett();
protected:
	void print_diff_drive_lett(char* cyrillics, char* diff_drive_lett);
};