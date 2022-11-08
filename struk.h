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