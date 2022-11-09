#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>
#include "validasi.h"
#define JATUH_TEMPO 25
#define BPM_RT 10 //Biaya Pemliharaan Meter Rumah Tangga
#define BPM_U 20 //Biaya Pemeliharaan Meter Usaha
#define ADM 50 //Biaya Administrasi
#define BIAYA_10 50 //Biaya 10 meter kubik pertama adalah Rp 50,- 
#define BIAYA_N 10 //Biaya 10+n meter kubik adalah Rp 10,- 
#define DENDA_100 20 //Denda pemakaian lebih dari 100 meter kubik adalah 20,-
#define DENDA_10_100 10 //Denda pemakaian lebih dari 10 meter kubik dan tidak lebih dari 100 meter kubik adalah Rp 10,-
int bulan_sekarang, bulan_sebelumnya, bulan, totalm, tagihan;
void struk_rumah_tangga(){
    time_t waktu;
    waktu = time(NULL);
    struct tm tm = *localtime(&waktu);
    int sisa = JATUH_TEMPO - tm.tm_mday;
    range_Validasi_Bulan(&bulan_sekarang, 0, "\t\t\t\t Masukkan pemakaian bulan sekarang (M^3): ");
    range_Validasi_Bulan(&bulan_sebelumnya, 0, "\t\t\t\t Masukkan pemakaian bulan sebelumnya (M^3): ");
    if(bulan_sekarang < bulan_sebelumnya){
        printf("\t\t\t\t Input Salah!\n");
        printf("\t\t\t\t Masukkan kembali!\n");
        return rumah_tangga();
    }else if(bulan_sebelumnya == 0){
        if(bulan_sekarang <= 10){
            totalm = 10*harga1;
            tagihan = BPM_RT + ADM + totalm + BIAYA_10;
            printf("\t\t\t\t===============================================\n");
			printf("\t\t\t\t                                               \n");
			printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
			printf("\t\t\t\t Alamat               : %s\n",alamat);
			printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
            printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
			printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
			printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
			printf("\t\t\t\t Biaya 10 m^3 pertama : Rp %d,-\n",BIAYA_10);
			printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
			printf("\t\t\t\t                                               \n");
			printf("\t\t\t\t===============================================\n");
        }else if(bulan_sekarang >= 11 && bulan_sekarang <= 20){
            totalm = bulan_sekarang*harga2;
            tagihan = BPM_RT + ADM + totalm + BIAYA_10;
            printf("\t\t\t\t===============================================\n");
			printf("\t\t\t\t                                               \n");
			printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
			printf("\t\t\t\t Alamat               : %s\n",alamat);
			printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
            printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
			printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
			printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
			printf("\t\t\t\t Biaya 10 m^3 pertama : Rp %d,-\n",BIAYA_10);
			printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
			printf("\t\t\t\t                                               \n");
			printf("\t\t\t\t===============================================\n");
        }else{
            totalm = bulan_sekarang*harga3;
            tagihan = BPM_RT + ADM + totalm + BIAYA_10;
            printf("\t\t\t\t===============================================\n");
			printf("\t\t\t\t                                               \n");
			printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
			printf("\t\t\t\t Alamat               : %s\n",alamat);
			printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
            printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
			printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
			printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
			printf("\t\t\t\t Biaya 10 m^3 pertama : Rp %d,-\n",BIAYA_10);
			printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
			printf("\t\t\t\t                                               \n");
			printf("\t\t\t\t===============================================\n");
        }
    }else{
        if(sisa < 0){
            bulan = bulan_sekarang - bulan_sebelumnya;
            if(bulan <= 10){
                totalm = 10*harga1;
                tagihan = BPM_RT + ADM + totalm + DENDA_10_100;
                printf("\t\t\t\t===============================================\n");
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
                printf("\t\t\t\t Alamat               : %s\n",alamat);
                printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
                printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Tanggal Jatuh Tempo  : %d-%d-%d\n",JATUH_TEMPO, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
                printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
                printf("\t\t\t\t Denda                : Rp %d,-\n",DENDA_10_100);
                printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t===============================================\n");
            }else if(bulan >= 11 && bulan <= 20){
                totalm = bulan*harga2;
                tagihan = BPM_RT + ADM + totalm + DENDA_10_100;
                printf("\t\t\t\t===============================================\n");
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
                printf("\t\t\t\t Alamat               : %s\n",alamat);
                printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
                printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Tanggal Jatuh Tempo  : %d-%d-%d\n",JATUH_TEMPO, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
                printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
                printf("\t\t\t\t Denda                : Rp %d,-\n",DENDA_10_100);
                printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t===============================================\n");
            }else if(bulan > 20 && bulan < 100){
                totalm = bulan*harga3;
                tagihan = BPM_RT + ADM + totalm + DENDA_10_100;
                printf("\t\t\t\t===============================================\n");
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
                printf("\t\t\t\t Alamat               : %s\n",alamat);
                printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
                printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Tanggal Jatuh Tempo  : %d-%d-%d\n",JATUH_TEMPO, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
                printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
                printf("\t\t\t\t Denda                : Rp %d,-\n",DENDA_10_100);
                printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t===============================================\n");
            }else{
                totalm = bulan*harga3;
                tagihan = BPM_RT + ADM + totalm + DENDA_100;
                printf("\t\t\t\t===============================================\n");
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
                printf("\t\t\t\t Alamat               : %s\n",alamat);
                printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
                printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Tanggal Jatuh Tempo  : %d-%d-%d\n",JATUH_TEMPO, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
                printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
                printf("\t\t\t\t Denda                : Rp %d,-\n",DENDA_10_100);
                printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t===============================================\n");
            }
        }else{
            bulan = bulan_sekarang - bulan_sebelumnya;
            if(bulan <= 10){
                totalm = 10*harga1;
                tagihan = BPM_RT + ADM + totalm;
                printf("\t\t\t\t===============================================\n");
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
                printf("\t\t\t\t Alamat               : %s\n",alamat);
                printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
                printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Tanggal Jatuh Tempo  : %d-%d-%d\n",JATUH_TEMPO, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Jatuh Tempo Dalam    : Rp %d hari\n",sisa);
                printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
                printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
                printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t===============================================\n");
            }else if(bulan >= 11 && bulan <= 20){
                totalm = bulan*harga2;
                tagihan = BPM_RT + ADM + totalm;
                printf("\t\t\t\t===============================================\n");
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
                printf("\t\t\t\t Alamat               : %s\n",alamat);
                printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
                printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Tanggal Jatuh Tempo  : %d-%d-%d\n",JATUH_TEMPO, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Jatuh Tempo Dalam    : Rp %d hari\n",sisa);
                printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
                printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
                printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t===============================================\n");
            }else{
                totalm = bulan*harga3;
                tagihan = BPM_RT + ADM + totalm;
                printf("\t\t\t\t===============================================\n");
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t Nama Pemilik         : %s\n",nama);
                printf("\t\t\t\t Alamat               : %s\n",alamat);
                printf("\t\t\t\t Golongan Anda        : %s\n",golongan);
                printf("\t\t\t\t Tanggal              : %d-%d-%d\n",tm.tm_mday, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Tanggal Jatuh Tempo  : %d-%d-%d\n",JATUH_TEMPO, tm.tm_mon, tm.tm_year);
                printf("\t\t\t\t Jatuh Tempo Dalam    : Rp %d hari\n",sisa);
                printf("\t\t\t\t Biaya Administrasi   : Rp %d,-\n",ADM);
                printf("\t\t\t\t Biaya Pemeliharaan   : Rp %d,-\n",BPM_RT);
                printf("\t\t\t\t Total Tagihan        : Rp %d,00\n",tagihan);
                printf("\t\t\t\t                                               \n");
                printf("\t\t\t\t===============================================\n");
            }
        }
    }
}
