#include <stdio.h>
int smallest(int x[],int n);
int biggest (int x[],int n);
float aOrtalama (int x[],int n);

int main()
{

    int buyukluk;
    int dizi[100];
    printf("Dizinin kac elemanli olmasini istersiniz : ");
    scanf("%d",&buyukluk);
    for (int i = 0; i < buyukluk; i++)
    {
        printf("Dizinin %d. Elemani : ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("--------------------------------- \n");

    printf("Olusturdugunuz dizinin elemanlari : ");
    for (int i = 0; i < buyukluk; i++)
    {
        printf("[ %d ]",dizi[i]);
    }
    
    int buyukSayi = biggest(dizi,buyukluk);
    int kucukSayi = smallest(dizi,buyukluk);
    float aritmetik = aOrtalama(dizi,buyukluk);
    printf("\n");
    printf("%d Sayisi dizinin en kucuk sayisidir. \n ",kucukSayi);
    printf("%d Sayisi dizinin en buyuk sayisidir. \n ",buyukSayi);
    printf("%.2f Sayisi dizinin aritmetik ortalamasidir. \n ",aritmetik);

    
    return 0;
}

int smallest(int x[],int n)
{
    int i ;
    int kucukSayi = x[0];
    for ( i = 0; i < n; i++)
    {
        if (kucukSayi>x[i])
        {
            kucukSayi=x[i];
        }
       
    }
     return kucukSayi;
    
    
}

int biggest (int x[],int n)
{
    int i;
    int buyukSayi = x[0];
    for (i = 0; i < n; i++)
    {
        if (buyukSayi<x[i])
        {
            buyukSayi=x[i];
        }
        
    }
    return buyukSayi;
    
}

float aOrtalama (int x[],int n)
{
    int i;
    float toplam = 0.0;
    float ortalama;
    for ( i = 0; i < n ; i++)
    {
        toplam+=x[i];
    }
    ortalama= toplam / n ;
    return ortalama;
}