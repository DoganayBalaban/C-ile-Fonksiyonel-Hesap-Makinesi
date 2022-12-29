/* Doðanay Balaban 1220505057 Yazýlým Mühendisliði 1.sýnýf. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	void AsalIslem(){
		float s1,s2,sonuc; //Ýþlemler için gerekli olan deðiþkenler.
		char islem;        // Seçme iþlemi için gerekli deðiþken..
		printf("Isleme sokmak istediginiz sayilari giriniz..:(a b)\n");  //Kullanýcýdan sayý girmesini isteme.
		scanf("%f %f",&s1,&s2);     // Ýstenen sayýyý alma.
		printf("Yapmak istediginiz islemi secin(+ , *):\n"); //Kullanýcýdan iþlem girmesini isteme.
		scanf("%s",&islem); //Ýþlemi alma.
		
		if(islem == '+'){     //If koþul ifadesini kullanarak kullanýcýdan alýnan deðer ile hesaplama iþlemine devam edilir.
			sonuc = s1 + s2;
			printf("%f",sonuc);
		}
		else if(islem == '*'){
			sonuc = s1 * s2;
			printf("%f",sonuc);
		}
		else{
			printf("Hatali islem..");  // Kullanýcý + veya * tuþu girmediyse.
		}
	}
	
	void TamIslem(){
		int s1,s2,sonuc;      //Ýþlemler için gerekli olan deðiþkenler.
		char islem;          // Seçme iþlemi için gerekli deðiþken..
		printf("Isleme sokmak istediginiz sayilari giriniz..:(a b)\n");     //Kullanýcýdan sayý girmesini isteme.
		scanf("%d %d",&s1,&s2);       // Ýstenen sayýyý alma.
		printf("Yapmak istediginiz islemi secin(+ , *):\n");        //Kullanýcýdan iþlem girmesini isteme.
		scanf("%s",&islem);     //Ýþlemi alma.
		
		if(islem == '+'){       //If koþul ifadesini kullanarak kullanýcýdan alýnan deðer ile hesaplama iþlemine devam edilir.
			sonuc = s1 + s2;
			printf("%d",sonuc);
		}
		else if(islem == '*'){
			sonuc = s1 * s2;
			printf("%d",sonuc);
		}
		else{
			printf("Hatali islem..");  // Kullanýcý + veya * tuþu girmediyse.
		}
	}
	
	void UcgenHesap(){
		float k1,k2,k3,alan,cevre,s,a;        //Ýþlemler için gerekli olan deðiþkenler.
		char islem;                         // Seçme iþlemi için gerekli deðiþken..
		printf("Yapmak istediginiz islemi secin..(a = alan , c = cevre):\n");         //Kullanýcýdan iþlem girmesini isteme.   
		scanf("%s",&islem);         //Ýþlemi alma.
		if(islem == 'a'){
			printf("Tum kenarlari giriniz..(a b c)\n");
			scanf("%f %f %f",&k1,&k2,&k3);                 // Ýþlem a ise girilen 3 kenarýn heron formülü ile alaný hesaplanýr..
			s = (k1 + k2 + k3) / 2; 
			a = s * (s - k1) * (s - k2) * (s - k3);
			alan = sqrt(a);
			printf("Alan:%f",alan);
		}
		else if(islem == 'c'){
			printf("Tum kenarlari giriniz..:(a b c)\n");
			scanf("%f %f %f",&k1,&k2,&k3);           //Ýþlem c ise girilen 3 kenarýn deðerleri toplanarak yazýlýr.
			cevre = k1 + k2 + k3;
			printf("Cevre:%f",cevre);
		}
		else{
			printf("\nHatali Islem");
		}
	}
	void DikdortgenHesap(){
		float k1,k2,k3,k4,alan,cevre;         //Ýþlemler için gerekli olan deðiþkenler.
		char islem;                           // Seçme iþlemi için gerekli deðiþken..
		printf("Yapmak istediginiz islemi secin..(a = alan , c = cevre):\n");         //Kullanýcýdan iþlem girmesini isteme.  
		scanf("%s",&islem);          //Ýþlemi alma.
		if(islem == 'a'){
			printf("Uzun ve kisa kenarlari giriniz..:(a b)\n");            //Ýþlem a ise girilen uzun ve kýsa kenar çarpýlýr ve basýlýr.
			scanf("%f %f",&k1,&k2);
			alan = k1 * k2;
			printf("Alan:%f",alan);
		}
		else if(islem == 'c'){
			printf("Uzun ve kisa kenarlari giriniz..:(a b)\n");
			scanf("%f %f",&k1,&k2);                                   //Ýþlem c ise girilen uzun ve kýsa kenar toplanýr, ikiyle çarpýlýr ve basýlýr.
			cevre = (k1 + k2) * 2;
			printf("Cevre:%f",cevre);
		}
		else{
			printf("Hatali Islem");
		}
	}
	void DaireHesap(){
		float yaricap,alan,cevre;              //Ýþlemler için gerekli olan deðiþkenler.
		const float pi = 3.14;                 // Pi sabiti
		char islem;                          // Seçme iþlemi için gerekli deðiþken..
		printf("Yapmak istediginiz islemi secin..(a = alan , c = cevre)(Pi sayisi 3.14 alinacaktir.):\n");       //Kullanýcýdan iþlem girmesini isteme. 
		scanf("%s",&islem);                   //Ýþlemi alma.
		
		if(islem == 'a'){
			printf("Yaricapi giriniz..:\n");
			scanf("%f",&yaricap);                       //Ýþlem a ise girilen yarýçap kullanýlarak pi x r^2  iþlemi uygulanýr basýlýr.
			alan = pi * yaricap * yaricap;
			printf("Alan:%f",alan);
		}
		else if(islem == 'c'){
			printf("Yaricapi giriniz..:\n");
			scanf("%f",&yaricap);                       //Ýþlem c ise girilen yarýçap kullanýlarak 2 x pi x r iþlemi uygulanýr ve basýlýr.
			cevre = 2 * pi * yaricap;
			printf("Cevre:%f",cevre);
		}
		else{
			printf("Hatali Islem");
		}
	}
	void SicaklikIslem(){
		int islem;             // Seçme iþlemi için gerekli deðiþken..
		float fah,kel;        //Ýþlemler için gerekli olan deðiþkenler.
		printf("Yapmak istediginiz islemi secin..\n\n");        //Kullanýcýdan iþlem girmesini isteme. 
		printf("1. Fahrenheitten Kelvine\n");
		printf("2. Kelvinden Fahrenheite\n\n");
		scanf("%d",&islem);                //Ýþlemi alma.
		
		if(islem == 1){
			printf("Fahrenheit degerinizi giriniz..:\n");
			scanf("%f",&fah);                                       //Kullanýcý eðer 1'i seçerse kelvin deðerini girmesi beklenir sonucunda fahrenheit deðerini alýr.
			kel = (fah + 459.67) * 5.0 / 9.0;
			printf("Kelvin degeriniz..:%f",kel);
		}
		else if(islem == 2){
			printf("Kelvin degerinizi giriniz..:");                //Kullanýcý eðer 2'yi seçerse fahrenheit deðerini girmesi beklenir sonucunda kelvin deðerini alýr.
			scanf("%f",&kel);
			fah = kel * 9.0 / 5.0 - 459.67;
			printf("Fahrenheit degeriniz..:%f",fah);
		}
		else {
			printf("Hatali islem");
		}
	}


int main() {
		int islem;                                             // Seçme iþlemi için deðiþkenler
		char sec,sec2;
	printf("Hesaplayici turunu seciniz..\n\n");
	printf("1. Standart Hesap Makinesi\n");
	printf("2. Alan&Cevre Hesaplayici\n");                    //Hesap makinemizin fonksiyolarý
	printf("3. Sicaklik donusturme\n");
	printf("***************************\n");
	scanf("%d",&islem);                   //Seçimi alma
	
	switch(islem){                                             //Switch case yapýsý kullanarak dinamik bir iþlem seçme uygulanýr.
		case 1:
			printf("Sayi turunu secin..(a = asal, t = tam):\n"); 
			scanf("%s",&sec);                                     //1 seçilirse sayý türü seçme ekraný gelir ve seçime göre ilgili fonksiyonlar çaðrýlýr.
			if(sec == 'a'){
				AsalIslem();
			}
			else if (sec == 't'){
				TamIslem();
			}
			else{
				printf("Hatali islem");
			}
		break;
		case 2 :                                                 // 2 seçilirse þekil seçme ekraný gelir ve seçime göre ilgili fonksiyon çaðrýlýr.
			printf("Hesaplamak istediginiz sekli seciniz..:(u = ucgen, d = dikdortgen, c = cember)\n");
			scanf("%s",&sec2);
			if(sec2 == 'u'){
				UcgenHesap();
			}
			else if(sec2 == 'd'){
				DikdortgenHesap();
			}
			else if (sec2 == 'c'){
				DaireHesap();
			}
			else{
				printf("Hatali islem..");
			}
		break;
		case 3 :
			SicaklikIslem();                                      // 3 seçilirse direkt gerekli iþlem çaðrýlýr.
		break;
			
		default:
			printf("Hatali islem");
	}
	
	
	
	
	return 0;
}
