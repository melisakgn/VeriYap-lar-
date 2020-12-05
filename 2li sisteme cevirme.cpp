#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define boyut 100

typedef struct yiginlar
{
	int indis;
	int eleman[boyut];
}yigin;

yigin *olustur()
{
	yigin *yeni=(yigin *)malloc(sizeof(yigin));
	yeni->indis=0;
	return yeni;
}

int yiginDolumu(yigin *yeni)
{
	if(yeni->indis >= boyut)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}


int yiginBosmu(yigin *yeni)
{
	if(yeni->indis==0)
	{
		return -1;
	}
    else
    {
    	return 1;
	}

}

int ekle(yigin *yeni,int ekle)
{
	if(yiginDolumu(yeni) == -1)
	{
		printf("yýðýn dolu");
		return -1;
	}
    else
    {
    	yeni->eleman[yeni->indis]=ekle;
    	yeni->indis++;
    	return 1;
	}

}
int cikar(yigin *yeni)
{
	int cikan_eleman;
	if(yiginBosmu(yeni )== -1))
	{
		printf("yýðýn bos");
		return -1;
	}
	else
	{
		yeni->indis--;
		cikan_eleman=yeni->eleman[yeni->indis];
		return cikan_eleman;
		
	}
}
void cevir()
{
	int kalan;
	while(sayi>0)
	{
		kalan=sayi%2;
		ekle(yeni,kalan);
		sayi=sayi/2;
	}

    while(yeni->indis>0)
    {
    	kalan=cikar(yeni);
    	printf("%d",kalan);
	}

}
void main()
{
	yigin *yeni=olustur();
	int numara;
	printf("sayi giriniz?");
	scanf("%d",&numara);
	cevir(yeni,numara);
	free(yeni);
	
}









