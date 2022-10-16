#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359
void identitas(){
	printf("\t\t\t\t================================================\n");
	printf("\t\t\t\t|                                              |\n");
	printf("\t\t\t\t|         This Project Presented by ...        |\n");
	printf("\t\t\t\t|                                              |\n");
	printf("\t\t\t\t|         I Kadek Indra Agusta Pratama         |\n");
	printf("\t\t\t\t|                  2205551056                  |\n");
	printf("\t\t\t\t|                                              |\n");
	printf("\t\t\t\t================================================\n");
	system("pause");
	system("cls");
}
int periksa_input(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list<0 || list>3 || check != '\n'){
		fflush(stdin);
		printf("\n\t\t\t\t Input kamu salah >:(\n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t Masukkan pilihan operasi: ");
		return periksa_input();
	}else{
		return list;
	}
}
int periksa_baca(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list!=9 && list!=0 || check != '\n'){
		fflush(stdin);
		printf("\n\t\t\t\t Input kamu salah >:(\n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t Masukkan pilihan yang benar: ");
		return periksa_baca();
	}else{
		return list;
	}
}
int periksa_dua(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list<0 || list>3 || check != '\n'){
		fflush(stdin);
		printf("\n\t\t\t\t Input kamu salah >:(\n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t Masukkan pilihan operasi: ");
		return periksa_dua();
	}else{
		return list;
	}
}
int periksa_tiga(){
	char check;
	int list;
	if(check=scanf("%d%c", &list, &check)!=2 || list<0 || list>3 || check != '\n'){
		fflush(stdin);
		printf("\n\t\t\t\t Input kamu salah >:(\n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t Masukkan pilihan operasi: ");
		return periksa_tiga();
	}else{
		return list;
	}
}
float periksa_float(){
	char check;
	float list;
	if(check=scanf("%f%c", &list, &check)!=2 || list<1 || check != '\n'){
		fflush(stdin);
		printf("\t\t\t\t Input kamu salah >:(\n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t >> ");
		return periksa_float();
	}else{
		return list;
	}
}
double periksa_double(){
	char check;
	double list;
	if(check=scanf("%lf%c", &list, &check)!=2 || list<1 || check != '\n'){
		fflush(stdin);
		printf("\t\t\t\t Input kamu salah >:(\n");
		printf("\t\t\t\t Masukkan input yang benar!\n");
		printf("\t\t\t\t >> ");
		return periksa_double();
	}else{
		return list;
	}
}
float kecepatan(float s, float t){
	float hasil;
	hasil = s/t;
	return hasil;
}
double luas_lingkaran(double r){
	double hasil;
	hasil = PI*(pow(r,2));
	return hasil;
}
double kll_lingkaran(double r){
	double hasil;
	hasil = PI*(2*r);
	return hasil;
}
float luas_persegi(float s){
	float hasil;
	hasil = pow(s,2);
	return hasil;
}
float kll_persegi(float s){
	float hasil;
	hasil = 4*s;
	return hasil;
}
float luas_panjang(float p, float l){
	float hasil;
	hasil = p*l;
	return hasil;
}
float kll_panjang(float p, float l){
	float hasil;
	hasil = 2*(p+l);
	return hasil;
}
double volume_bola(double r){
	double hasil;
	hasil = (4/3)*(PI*(pow(r,3)));
	return hasil;
}
double luas_bola(double r){
	double hasil;
	hasil = 4*(PI*(pow(r,2)));
	return hasil;
}
float volume_kubus(float s){
	float hasil;
	hasil = pow(s,3);
	return hasil;
}
float luas_kubus(float s){
	float hasil;
	hasil = 6*(pow(s,2));
	return hasil;
}
float volume_balok(float p, float l, float t){
	float hasil;
	hasil = p*l*t;
	return hasil;
}
float luas_balok(float p, float l, float t){
	float hasil;
	hasil = 2*((p*l)+(p*t)+(l*t));
	return hasil;
}
int main(){
	double r;
	float s, p, l, t;
	int input, baca, dua, tiga;
	identitas();
	do{
		printf("\t\t\t\t=====================================================\n");
		printf("\t\t\t\t|                                                   |\n");
		printf("\t\t\t\t|      Pilihan operasi yang akan dikerjakan:        |\n");
		printf("\t\t\t\t|       1. Menghitung kecepatan                     |\n");
		printf("\t\t\t\t|       2. Luas dan keliling bangun datar           |\n");
		printf("\t\t\t\t|       3. Volume dan luas permukaan bangun ruang   |\n");
		printf("\t\t\t\t|       0. Keluar                                   |\n");
		printf("\t\t\t\t|                                                   |\n");
		printf("\t\t\t\t=====================================================\n\n");
		printf("\t\t\t\t Masukkan pilihan operasi: ");
		input = periksa_input();
		system("cls");
		switch(input){
			case 1:
				printf("\t\t\t\t Masukkan jarak tempuh (m): ");
				s = periksa_float();
				printf("\t\t\t\t Masukkan waktu tempuh (s): ");
				t = periksa_float();
				printf("\t\t\t\t Kecepatan: %.2f m/s.\n", kecepatan(s,t));
				break;
			case 2:
				printf("\t\t\t\t===================================\n");
				printf("\t\t\t\t|                                 |\n");
				printf("\t\t\t\t|      Pilihan bangun datar:      |\n");
				printf("\t\t\t\t|       1. Lingkaran              |\n");
				printf("\t\t\t\t|       2. Persegi                |\n");
				printf("\t\t\t\t|       3. Persegi panjang        |\n");
				printf("\t\t\t\t|       0. Keluar                 |\n");
				printf("\t\t\t\t|                                 |\n");
				printf("\t\t\t\t===================================\n\n");
				printf("\t\t\t\t Masukkan pilihan operasi: ");
				dua = periksa_dua();
				system("cls");
				switch(dua){
					case 1:
						printf("\t\t\t\t Masukkan jari-jari (m): ");
						r = periksa_double();
						printf("\t\t\t\t Luas lingkaran: %.2lf m^2.\n",luas_lingkaran(r));
						printf("\t\t\t\t Keliling lingkaran: %.2lf m.\n",kll_lingkaran(r));
						break;
					case 2:
						printf("\t\t\t\t Masukkan sisi (m): ");
						s = periksa_float();
						printf("\t\t\t\t Luas persegi: %.2f m^2.\n",luas_persegi(s));
						printf("\t\t\t\t Keliling persegi: %.2f m.\n",kll_persegi(s));
						break;
					case 3:
						printf("\t\t\t\t Masukkan panjang (m): ");
						p = periksa_float();
						printf("\t\t\t\t Masukkan lebar (m): ");
						l = periksa_float();
						printf("\t\t\t\t Luas persegi panjang: %.2f m^2.\n",luas_panjang(p, l));
						printf("\t\t\t\t Keliling persegi panjang: %.2f m.\n",kll_panjang(p, l));
						break;
					default:
						printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
				}
				break;
			case 3:
				printf("\t\t\t\t===================================\n");
				printf("\t\t\t\t|                                 |\n");
				printf("\t\t\t\t|      Pilihan bangun ruang:      |\n");
				printf("\t\t\t\t|       1. Bola                   |\n");
				printf("\t\t\t\t|       2. Kubus                  |\n");
				printf("\t\t\t\t|       3. Balok                  |\n");
				printf("\t\t\t\t|       0. Keluar                 |\n");
				printf("\t\t\t\t|                                 |\n");
				printf("\t\t\t\t===================================\n\n");
				printf("\t\t\t\t Masukkan pilihan operasi: ");
				tiga = periksa_tiga();
				system("cls");
				switch(tiga){
					case 1:
						printf("\t\t\t\t Masukkan jari-jari (m): ");
						r = periksa_double();
						printf("\t\t\t\t Volume bola: %.2lf m^3.\n",volume_bola(r));
						printf("\t\t\t\t Luas permukaan bola: %.2lf m^2.\n",luas_bola(r));
						break;
					case 2:
						printf("\t\t\t\t Masukkan rusuk (m): ");
						s = periksa_float();
						printf("\t\t\t\t Volume kubus: %.2f m^3.\n",volume_kubus(s));
						printf("\t\t\t\t Luas permukaan kubus: %.2f m^2.\n",luas_kubus(s));
						break;
					case 3:
						printf("\t\t\t\t Masukkan panjang (m): ");
						p = periksa_float();
						printf("\t\t\t\t Masukkan lebar (m): ");
						l = periksa_float();
						printf("\t\t\t\t Masukkan tinggi (m): ");
						t = periksa_float();
						printf("\t\t\t\t Volume balok: %.2f m^3.\n",volume_balok(p, l, t));
						printf("\t\t\t\t Luas permukaan balok: %.2f m^2.\n",luas_balok(p, l, t));
						break;
					default:
						printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
				}
				break;
			default:
				printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda :)\n");
		}
		printf("\t\t\t\t Ingin melakukan operasi hitung lagi?\n");
		printf("\t\t\t\t (tidak = 0 / iya = 9)\n");
		printf("\t\t\t\t Masukkan input: ");
		baca = periksa_baca();
		system("cls");
	}while(baca == 9);
	system("pause");
	return 0;
}
