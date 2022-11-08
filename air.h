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
int kelompok, rt, jalan, listrik, baca;
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
void jeroan(){
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
                                        char golongan[4] = "D1-1";
                                        break;
                                    case 2:
                                        char golongan[4] = "D1-2";
                                        break;
                                }
                                break;
                            case 2:
                                listrik_subsidi();
                                switch(listrik){
                                    case 1:
                                        char golongan[4] = "D2-1";
                                        break;
                                    case 2:
                                        char golongan[4] = "D2-2";
                                        break;
                                }
                                break;
                            case 3:
                                listrik_subsidi();
                                switch(listrik){
                                    case 1:
                                        char golongan[4] = "D3-1";
                                        break;
                                    case 2:
                                        char golongan[4] = "D3-2";
                                        break;
                                }
                                break;
                            case 4:
                                listrik_subsidi();
                                switch(listrik){
                                    case 1:
                                        char golongan[4] = "D4-1";
                                        break;
                                    case 2:
                                        char golongan[4] = "D4-2";
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
                                        char golongan[4] = "D1-3";
                                        break;
                                    case 2:
                                        char golongan[4] = "D1-4";
                                        break;
                                }
                                break;
                            case 2:
                                listrik_nonsubsidi();
                                switch(listrik){
                                    case 1:
                                        char golongan[4] = "D2-3";
                                        break;
                                    case 2:
                                        char golongan[4] = "D2-4";
                                        break;
                                }
                                break;
                            case 3:
                                listrik_nonsubsidi();
                                switch(listrik){
                                    case 1:
                                        char golongan[4] = "D3-3";
                                        break;
                                    case 2:
                                        char golongan[4] = "D3-4";
                                        break;
                                }
                                break;
                            case 4:
                                listrik_nonsubsidi();
                                switch(listrik){
                                    case 1:
                                        char golongan[4] = "D4-3";
                                        break;
                                    case 2:
                                        char golongan[4] = "D4-4";
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
                        char golongan[4] = "D5-1";
                        break;
                    case 2:
                        char golongan[4] = "D5-2";
                        break;
                    case 3:
                        char golongan[4] = "D5-3";
                        break;
                    case 4:
                        char golongan[4] = "D5-4";
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
                                char golongan[4] = "E1-1";
                                break;
                            case 2:
                                char golongan[4] = "E1-2";
                                break;
                            case 3:
                                char golongan[4] = "E1-3";
                                break;
                            case 4:
                                char golongan[4] = "E1-4";
                                break;
                            default:
                                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                        }
                        break;
                    case 2:
                        switch(listrik){
                            case 1:
                                char golongan[4] = "E2-1";
                                break;
                            case 2:
                                char golongan[4] = "E2-2";
                                break;
                            case 3:
                                char golongan[4] = "E2-3";
                                break;
                            case 4:
                                char golongan[4] = "E2-4";
                                break;
                            default:
                                printf("\t\t\t\t Terima kasih karena telah meluangkan waktu Anda.\n\n");
                        }
                        break;
                    case 3:
                        switch(listrik){
                            case 1:
                                char golongan[4] = "E3-1";
                                break;
                            case 2:
                                char golongan[4] = "E3-2";
                                break;
                            case 3:
                                char golongan[4] = "E3-3";
                                break;
                            case 4:
                                char golongan[4] = "E3-4";
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
    }while(baca == 9);
}