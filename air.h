#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "validasi.h"
#include "struk.h"
#define BPM_RT 10 //Biaya Pemliharaan Meter Rumah Tangga
#define BPM_U 20 //Biaya Pemeliharaan Meter Usaha
#define ADM 50 //Biaya Administrasi
#define BIAYA_10 50 //Biaya 10 meter kubik pertama adalah Rp 50,- 
#define BIAYA_N 10 //Biaya 10+n meter kubik adalah Rp 10,- 
#define DENDA_100 20 //Denda pemakaian lebih dari 100 meter kubik adalah 20,-
#define DENDA_10_100 10 //Denda pemakaian lebih dari 10 meter kubik dan tidak lebih dari 100 meter kubik adalah Rp 10,-
int kelompok, rt, jalan, listrik, harga1, harga2, harga3, baca;
char nama[100], alamat[100], nama_niaga[100], alamat_niaga[100], golongan[4];
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
    system("cls");
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
    system("cls");
}
void jalan_subsidi(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |       Pilihan Lebar Jalan        |\n");
    printf("\t\t\t\t |       1. 0 - 3,99 meter          |\n");
    printf("\t\t\t\t |       2. 4 - 6,99 meter          |\n");
    printf("\t\t\t\t |       3. 7 - 10 meter            |\n");
    printf("\t\t\t\t |       4. > 10 meter              |\n");
    printf("\t\t\t\t |       0. Keluar                  |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Int(&jalan, 0, 4, "\t\t\t\t Masukkan pilihan lebar jalan: ");
    system("cls");
}
void jalan_niaga(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |       Pilihan Lebar Jalan        |\n");
    printf("\t\t\t\t |       1. 0 - 6,99 meter          |\n");
    printf("\t\t\t\t |       2. 7 - 10 meter            |\n");
    printf("\t\t\t\t |       3. > 10 meter              |\n");
    printf("\t\t\t\t |       0. Keluar                  |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Int(&jalan, 0, 3, "\t\t\t\t Masukkan pilihan lebar jalan: ");
    system("cls");
}
void listrik_subsidi(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |          Pilihan Listrik         |\n");
    printf("\t\t\t\t |       1. 450 VA                  |\n");
    printf("\t\t\t\t |       2. 900 VA                  |\n");
    printf("\t\t\t\t |       0. Keluar                  |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Int(&listrik, 0, 2, "\t\t\t\t Masukkan pilihan listrik: ");
    system("cls");
}
void listrik_nonsubsidi(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |          Pilihan Listrik         |\n");
    printf("\t\t\t\t |       1. 1300 VA                 |\n");
    printf("\t\t\t\t |       2. > 1300 VA               |\n");
    printf("\t\t\t\t |       0. Keluar                  |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Int(&listrik, 0, 2, "\t\t\t\t Masukkan pilihan listrik: ");
    system("cls");
}
void listrik_campur(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |          Pilihan Listrik         |\n");
    printf("\t\t\t\t |       1. 450 VA                  |\n");
    printf("\t\t\t\t |       2. 900 VA                  |\n");
    printf("\t\t\t\t |       3. 1300 VA                 |\n");
    printf("\t\t\t\t |       4. > 1300 VA               |\n");
    printf("\t\t\t\t |       0. Keluar                  |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Int(&listrik, 0, 4, "\t\t\t\t Masukkan pilihan listrik: ");
    system("cls");
}
void read(){
    printf("\t\t\t\t ====================================\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t |            Terima Kasih          |\n");
    printf("\t\t\t\t |       9. Ke Menu Utama           |\n");
    printf("\t\t\t\t |       0. Keluar                  |\n");
    printf("\t\t\t\t |                                  |\n");
    printf("\t\t\t\t ====================================\n");
    range_Validasi_Baca(&baca, 0, 9, "\t\t\t\t\n\n Masukkan pilihan: ");
    system("cls");
}
void utama(){
    do{
        printf("\t\t\t\t Masukkan nama Anda: ");
        fflush(stdin);
        fgets(nama, sizeof(nama), stdin);
        printf("\t\t\t\t Masukkan alamat Anda: ");
        fflush(stdin);
        fgets(alamat, sizeof(alamat), stdin);
        system("cls");
        pilihan1();
        switch(kelompok){
            case 1:
                rumah_tangga();
                switch(rt){
                    case 1:
                        jalan_subsidi();
                        switch(jalan){
                            case 1:
                                listrik_subsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D1-1";
                                        harga1 = 1780;
                                        harga2 = 2060;
                                        harga3 = 5880;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D1-2";
                                        harga1 = 2060;
                                        harga2 = 2340;
                                        harga3 = 5940;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            case 2:
                                listrik_subsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D2-1";
                                        harga1 = 2340;
                                        harga2 = 2620;
                                        harga3 = 6000;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D2-2";
                                        harga1 = 2620;
                                        harga2 = 2900;
                                        harga3 = 6060;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            case 3:
                                listrik_subsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D3-1";
                                        harga1 = 2900;
                                        harga2 = 3180;
                                        harga3 = 6120;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D3-2";
                                        harga1 = 3180;
                                        harga2 = 3460;
                                        harga3 = 6180;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            case 4:
                                listrik_subsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D4-1";
                                        harga1 = 3460;
                                        harga2 = 3740;
                                        harga3 = 6240;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D4-2";
                                        harga1 = 3740;
                                        harga2 = 4020;
                                        harga3 = 6240;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            default:
                                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                        }
                        break;
                    case 2:
                        jalan_subsidi();
                        switch(jalan){
                            case 1:
                                listrik_nonsubsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D1-3";
                                        harga1 = 6340;
                                        harga2 = 9200;
                                        harga3 = 9600;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D1-4";
                                        harga1 = 6420;
                                        harga2 = 9350;
                                        harga3 = 9650;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            case 2:
                                listrik_nonsubsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D2-3";
                                        harga1 = 6490;
                                        harga2 = 9500;
                                        harga3 = 9800;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D2-4";
                                        harga1 = 6570;
                                        harga2 = 9650;
                                        harga3 = 9950;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            case 3:
                                listrik_nonsubsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D3-3";
                                        harga1 = 6640;
                                        harga2 = 9800;
                                        harga3 = 10100;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D3-4";
                                        harga1 = 6720;
                                        harga2 = 9950;
                                        harga3 = 10250;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            case 4:
                                listrik_nonsubsidi();
                                switch(listrik){
                                    case 1:
                                        golongan[4] = "D4-3";
                                        harga1 = 6790;
                                        harga2 = 10100;
                                        harga3 = 10400;
                                        struk_rumah_tangga();
                                        break;
                                    case 2:
                                        golongan[4] = "D4-4";
                                        harga1 = 6870;
                                        harga2 = 10250;
                                        harga3 = 10550;
                                        struk_rumah_tangga();
                                        break;
                                }
                                break;
                            default:
                                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                        }
                        break;
                    default:
                        printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                }
                break;
            case 2:
                listrik_campur();
                switch(listrik){
                    case 1:
                        golongan[4] = "D5-1";
                        harga1 = 6940;
                        harga2 = 10400;
                        harga3 = 10700;
                        struk_rumah_niaga();
                        break;
                    case 2:
                        golongan[4] = "D5-2";
                        harga1 = 7020;
                        harga2 = 10550;
                        harga3 = 10850;
                        struk_rumah_niaga();
                        break;
                    case 3:
                        golongan[4] = "D5-3";
                        harga1 = 7090;
                        harga2 = 10700;
                        harga3 = 11000;
                        struk_rumah_niaga();
                        break;
                    case 4:
                        golongan[4] = "D5-4";
                        harga1 = 7170;
                        harga2 = 10850;
                        harga3 = 11150;
                        struk_rumah_niaga();
                        break;
                    default:
                        printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                }
                break;
            case 3:
                printf("\t\t\t\t Masukkan nama niaga Anda: ");
                fflush(stdin);
                fgets(nama_niaga, sizeof(nama_niaga), stdin);
                printf("\t\t\t\t Masukkan alamat niaga Anda: ");
                fflush(stdin);
                fgets(alamat_niaga, sizeof(alamat_niaga), stdin);
                system("cls");
                jalan_niaga();
                switch(jalan){
                    case 1:
                        listrik_campur();
                        switch(listrik){
                            case 1:
                                golongan[4] = "E1-1";
                                harga1 = 9200;
                                harga2 = 9850;
                                harga3 = 10950;
                                struk_niaga();
                                break;
                            case 2:
                                golongan[4] = "E1-2";
                                harga1 = 9500;
                                harga2 = 10150;
                                harga3 = 11250;
                                struk_niaga();
                                break;
                            case 3:
                                golongan[4] = "E1-3";
                                harga1 = 9800;
                                harga2 = 10450;
                                harga3 = 11550;
                                struk_niaga();
                                break;
                            case 4:
                                golongan[4] = "E1-4";
                                harga1 = 10100;
                                harga2 = 10750;
                                harga3 = 11850;
                                struk_niaga();
                                break;
                            default:
                                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                        }
                        break;
                    case 2:
                        switch(listrik){
                            case 1:
                                golongan[4] = "E2-1";
                                harga1 = 10400;
                                harga2 = 11050;
                                harga3 = 12150;
                                struk_niaga();
                                break;
                            case 2:
                                golongan[4] = "E2-2";
                                harga1 = 10700;
                                harga2 = 11350;
                                harga3 = 12550;
                                struk_niaga();
                                break;
                            case 3:
                                golongan[4] = "E2-3";
                                harga1 = 11000;
                                harga2 = 11650;
                                harga3 = 13150;
                                struk_niaga();
                                break;
                            case 4:
                                golongan[4] = "E2-4";
                                harga1 = 11300;
                                harga2 = 11950;
                                harga3 = 13950;
                                struk_niaga();
                                break;
                            default:
                                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                        }
                        break;
                    case 3:
                        switch(listrik){
                            case 1:
                                golongan[4] = "E3-1";
                                harga1 = 11600;
                                harga2 = 12250;
                                harga3 = 14750;
                                struk_niaga();
                                break;
                            case 2:
                                golongan[4] = "E3-2";
                                harga1 = 11900;
                                harga2 = 12550;
                                harga3 = 15050;
                                struk_niaga();
                                break;
                            case 3:
                                golongan[4] = "E3-3";
                                harga1 = 12200;
                                harga2 = 12850;
                                harga3 = 15850;
                                struk_niaga();
                                break;
                            case 4:
                                golongan[4] = "E3-4";
                                harga1 = 12500;
                                harga2 = 13150;
                                harga3 = 16650;
                                struk_niaga();
                                break;
                            default:
                                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                        }
                        break;
                    default:
                        printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                }
                break;
            default:
                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
        }
        system("pause");
        system("cls");
        read();
    }while(baca == 9);
}