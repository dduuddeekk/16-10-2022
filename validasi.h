#include <stdio.h>
int validasi_Int(int *var){
    char buff[1024];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin) != NULL){
        if(sscanf(buff, "%d %c", var, &cek) == 1) {
            return 1;
        }
    }
    return 0;
}
void reValidasi_Int(int *var, char *nama){
    while(1){
        printf("%s", nama);
        fflush(stdin);
        if(validasi_Int(var))
            break;
        printf("\n\t\t\t\t Maaf, Input yang Anda masukan salah.\n"); 
		printf("\t\t\t\t Pilih nomor yang tersedia: \n");
    }
}
void range_Validasi_Int(int *var, int range1, int range2, char *nama){
    while(1){
        reValidasi_Int(var, nama);
        fflush(stdin);
        if(*var >= range1  &&*var <= range2)
            break;
        printf("\n\t\t\t\t Maaf, Input yang Anda masukan salah.\n"); 
		printf("\t\t\t\t Pilih nomor yang tersedia: \n");
    }
}
void range_Validasi_Baca(int *var, int range1, int range2, char *nama){
    while(1){
        reValidasi_Int(var, nama);
        fflush(stdin);
        if(*var == range1  ||*var == range2)
            break;
        printf("\n\t\t\t\t Maaf, Input yang Anda masukan salah.\n"); 
		printf("\t\t\t\t Pilih nomor yang tersedia: \n");
    }
}
void range_Validasi_Bulan(int *var, int range1, char *nama){
    while(1){
        reValidasi_Int(var, nama);
        fflush(stdin);
        if(*var >= range1)
            break;
        printf("\n\t\t\t\t Maaf, Input yang Anda masukan salah.\n"); 
		printf("\t\t\t\t Pilih nomor yang tersedia: \n");
    }
}