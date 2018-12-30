#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float suhu, hasil;
    int jenis;

    printf("Program Konversi Suhu \n \n"); //Nama Program
    printf("=============================================\n");
    ulang :
    printf("Pilih satuan suhu yang ingin anda konversikan : \n");//Pilih konversi suhu
    printf("1. Celcius\n");
    printf("2. Fahrenheit\n");
    printf("3. Reamur\n");
    printf("Silahkan anda pilih : ");
    scanf("%d", &jenis);
    switch(jenis)
    {
    case 1:
    printf("Masukkan besar suhu : ");//Konversi suhu celcius
    scanf("%f", &suhu);
    hasil=(suhu*1.8+32);
    printf("Fahrenheit : %.2f Fahrenheit\n", hasil);
    hasil=suhu*0.8;
    printf("Reamur : %.2f Reamur\n", hasil);
    break;
    case 2:
    printf("Masukkan besar suhu : ");//Konversi suhu Fahrenheit
    scanf("%f", &suhu);
    hasil=(suhu-32)/1.8;
    printf("Celcius : %.2f Celcius\n", hasil);
    hasil=(suhu-32)/2.25;
    printf("Reamur : %.2f Reamur\n", hasil);
    break;
    case 3:
    printf("Masukkan besar suhu : ");//Konversi suhu Reamur
    scanf("%f", &suhu);
    hasil=suhu/0.8;
    printf("Celcius : %.2f Celcius\n", hasil);
    hasil=(suhu*2.25)+32;
    printf("Fahrenheit : %.2f Fahrenheit\n", hasil);
    break;
    default:
        printf("Kode pilihan yang anda masukkan salah, silahkan ulangi kembali...\n");//Statement error
        goto ulang;
            }
}
