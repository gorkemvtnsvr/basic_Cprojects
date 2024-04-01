#include <stdio.h>
int bolunurMu (int bolunen,int bolen);
int ebob (int sayi1,int sayi2);
int ekok(int sayi1,int sayi2);

int main()
{
    int a,b;
    printf("Birinci Sayi: ");
    scanf("%d",&a);
    printf("Ikinci Sayi : ");
    scanf("%d",&b);
    int EBOB = ebob(a,b);
    int EKOK = ekok(a,b);
    printf("%d ve %d Sayilarin EBOB'u : %d | Sayilarin EKOK'u : %d ",a,b,EBOB,EKOK);
    return 0;
}

int bolunurMu (int bolunen,int bolen)
{
    if (bolunen%bolen == 0)
    {
        return 1;
    }
    else
        return 0;
    
}

int ebob (int sayi1,int sayi2)
{
    int kucukSayi = sayi1;
    if (sayi1>sayi2)
    {
        kucukSayi=sayi2;
    }
    for (int i = kucukSayi; i > 0; i--)
    {
        if (bolunurMu(sayi1,i)==1 &&  bolunurMu(sayi2,i)==1 )
        {
            return i;
        }
    }
    
    return 0;   
}
int ekok(int sayi1,int sayi2)
{
    int buyukSayi=sayi1;
    if (sayi2>sayi1)
    {
        buyukSayi=sayi2;
    }
    for (int i = buyukSayi; i>0; i++)
    {
        if (bolunurMu(i,sayi1)==1 && bolunurMu(i,sayi2)==1)
        {
            return i;
        }
        
    }
    return 0;
}