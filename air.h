#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "validasi.h"
#define BPM_RT 10 //Biaya Pemliharaan Meter Rumah Tangga
#define BPM_U 20 //Biaya Pemeliharaan Meter Usaha
#define ADM 50 //Biaya Administrasi
#define BIAYA_10 50 //Biaya 10 meter kubik pertama adalah Rp 50,- 
#define BIAYA_N 10 //Biaya 10+n meter kubik adalah Rp 10,- 
#define DENDA_100 20 //Denda pemakaian lebih dari 100 meter kubik adalah 20,-
#define DENDA_10_100 10 //Denda pemakaian lebih dari 10 meter kubik dan tidak lebih dari 100 meter kubik adalah Rp 10,-
int kelompok, rt, baca;
char nama[100], alamat[100], nama_niaga[100], alamat_niaga[100];
void identity(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |      This Program Created By     |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |==================================|\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |   I Kadek Indra Agusta Pratama   |\n");
    printf("\t\t\t\t |            2205551056            |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    system("pause");
    system("cls");
}
void pilihan1(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |        Kelompok Pelanggan        |\n");
    printf("\t\t\t\t |   1. Rumah Tangga                |\n");
    printf("\t\t\t\t |   2. Rumah Tangga Berisi Niaga   |\n");
    printf("\t\t\t\t |   3. Niaga                       |\n");
    printf("\t\t\t\t |   0. Keluar                      |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Int(&kelompok, 0, 3, "\t\t\t\t Masukkan pilihan kelompok pelanggan: ");
}
void rumah_tangga(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |           Rumah Tangga           |\n");
    printf("\t\t\t\t |   1. Rumah Tangga Bersubsidi     |\n");
    printf("\t\t\t\t |   2. Rumah Tangga Non-Subsidi    |\n");
    printf("\t\t\t\t |   0. Keluar                      |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Int(&rt, 0, 2, "\t\t\t\t Masukkan pilihan rumah tangga: ");
}
void jeroan(){
    do{
        printf("\t\t\t\t Masukkan nama Anda: ");
        fflush(stdin);
        fgets(nama, sizeof(nama), stdin);
        printf("\t\t\t\t Masukkan alamat Anda: ");
        fflush(stdin);
        fgets(alamat, sizeof(alamat), stdin);
        pilihan1();
        switch(kelompok){
            case 1:
                break;
            case 2:
                break;
            case 3:
                printf("\t\t\t\t Masukkan nama niaga Anda: ");
                fflush(stdin);
                fgets(nama_niaga, sizeof(nama_niaga), stdin);
                printf("\t\t\t\t Masukkan alamat niaga Anda: ");
                fflush(stdin);
                fgets(alamat_niaga, sizeof(alamat_niaga), stdin);
                break;
            default:
                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
        }
    }while(baca == 9);
}