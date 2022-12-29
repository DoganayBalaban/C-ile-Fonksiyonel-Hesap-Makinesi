/* Do�anay Balaban 1220505057 Yaz�l�m M�hendisli�i 1.s�n�f. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	void AsalIslem(){
		float s1,s2,sonuc; //��lemler i�in gerekli olan de�i�kenler.
		char islem;        // Se�me i�lemi i�in gerekli de�i�ken..
		printf("Isleme sokmak istediginiz sayilari giriniz..:(a b)\n");  //Kullan�c�dan say� girmesini isteme.
		scanf("%f %f",&s1,&s2);     // �stenen say�y� alma.
		printf("Yapmak istediginiz islemi secin(+ , *):\n"); //Kullan�c�dan i�lem girmesini isteme.
		scanf("%s",&islem); //��lemi alma.
		
		if(islem == '+'){     //If ko�ul ifadesini kullanarak kullan�c�dan al�nan de�er ile hesaplama i�lemine devam edilir.
			sonuc = s1 + s2;
			printf("%f",sonuc);
		}
		else if(islem == '*'){
			sonuc = s1 * s2;
			printf("%f",sonuc);
		}
		else{
			printf("Hatali islem..");  // Kullan�c� + veya * tu�u girmediyse.
		}
	}
	
	void TamIslem(){
		int s1,s2,sonuc;      //��lemler i�in gerekli olan de�i�kenler.
		char islem;          // Se�me i�lemi i�in gerekli de�i�ken..
		printf("Isleme sokmak istediginiz sayilari giriniz..:(a b)\n");     //Kullan�c�dan say� girmesini isteme.
		scanf("%d %d",&s1,&s2);       // �stenen say�y� alma.
		printf("Yapmak istediginiz islemi secin(+ , *):\n");        //Kullan�c�dan i�lem girmesini isteme.
		scanf("%s",&islem);     //��lemi alma.
		
		if(islem == '+'){       //If ko�ul ifadesini kullanarak kullan�c�dan al�nan de�er ile hesaplama i�lemine devam edilir.
			sonuc = s1 + s2;
			printf("%d",sonuc);
		}
		else if(islem == '*'){
			sonuc = s1 * s2;
			printf("%d",sonuc);
		}
		else{
			printf("Hatali islem..");  // Kullan�c� + veya * tu�u girmediyse.
		}
	}
	
	void UcgenHesap(){
		float k1,k2,k3,alan,cevre,s,a;        //��lemler i�in gerekli olan de�i�kenler.
		char islem;                         // Se�me i�lemi i�in gerekli de�i�ken..
		printf("Yapmak istediginiz islemi secin..(a = alan , c = cevre):\n");         //Kullan�c�dan i�lem girmesini isteme.   
		scanf("%s",&islem);         //��lemi alma.
		if(islem == 'a'){
			printf("Tum kenarlari giriniz..(a b c)\n");
			scanf("%f %f %f",&k1,&k2,&k3);                 // ��lem a ise girilen 3 kenar�n heron form�l� ile alan� hesaplan�r..
			s = (k1 + k2 + k3) / 2; 
			a = s * (s - k1) * (s - k2) * (s - k3);
			alan = sqrt(a);
			printf("Alan:%f",alan);
		}
		else if(islem == 'c'){
			printf("Tum kenarlari giriniz..:(a b c)\n");
			scanf("%f %f %f",&k1,&k2,&k3);           //��lem c ise girilen 3 kenar�n de�erleri toplanarak yaz�l�r.
			cevre = k1 + k2 + k3;
			printf("Cevre:%f",cevre);
		}
		else{
			printf("\nHatali Islem");
		}
	}
	void DikdortgenHesap(){
		float k1,k2,k3,k4,alan,cevre;         //��lemler i�in gerekli olan de�i�kenler.
		char islem;                           // Se�me i�lemi i�in gerekli de�i�ken..
		printf("Yapmak istediginiz islemi secin..(a = alan , c = cevre):\n");         //Kullan�c�dan i�lem girmesini isteme.  
		scanf("%s",&islem);          //��lemi alma.
		if(islem == 'a'){
			printf("Uzun ve kisa kenarlari giriniz..:(a b)\n");            //��lem a ise girilen uzun ve k�sa kenar �arp�l�r ve bas�l�r.
			scanf("%f %f",&k1,&k2);
			alan = k1 * k2;
			printf("Alan:%f",alan);
		}
		else if(islem == 'c'){
			printf("Uzun ve kisa kenarlari giriniz..:(a b)\n");
			scanf("%f %f",&k1,&k2);                                   //��lem c ise girilen uzun ve k�sa kenar toplan�r, ikiyle �arp�l�r ve bas�l�r.
			cevre = (k1 + k2) * 2;
			printf("Cevre:%f",cevre);
		}
		else{
			printf("Hatali Islem");
		}
	}
	void DaireHesap(){
		float yaricap,alan,cevre;              //��lemler i�in gerekli olan de�i�kenler.
		const float pi = 3.14;                 // Pi sabiti
		char islem;                          // Se�me i�lemi i�in gerekli de�i�ken..
		printf("Yapmak istediginiz islemi secin..(a = alan , c = cevre)(Pi sayisi 3.14 alinacaktir.):\n");       //Kullan�c�dan i�lem girmesini isteme. 
		scanf("%s",&islem);                   //��lemi alma.
		
		if(islem == 'a'){
			printf("Yaricapi giriniz..:\n");
			scanf("%f",&yaricap);                       //��lem a ise girilen yar��ap kullan�larak pi x r^2  i�lemi uygulan�r bas�l�r.
			alan = pi * yaricap * yaricap;
			printf("Alan:%f",alan);
		}
		else if(islem == 'c'){
			printf("Yaricapi giriniz..:\n");
			scanf("%f",&yaricap);                       //��lem c ise girilen yar��ap kullan�larak 2 x pi x r i�lemi uygulan�r ve bas�l�r.
			cevre = 2 * pi * yaricap;
			printf("Cevre:%f",cevre);
		}
		else{
			printf("Hatali Islem");
		}
	}
	void SicaklikIslem(){
		int islem;             // Se�me i�lemi i�in gerekli de�i�ken..
		float fah,kel;        //��lemler i�in gerekli olan de�i�kenler.
		printf("Yapmak istediginiz islemi secin..\n\n");        //Kullan�c�dan i�lem girmesini isteme. 
		printf("1. Fahrenheitten Kelvine\n");
		printf("2. Kelvinden Fahrenheite\n\n");
		scanf("%d",&islem);                //��lemi alma.
		
		if(islem == 1){
			printf("Fahrenheit degerinizi giriniz..:\n");
			scanf("%f",&fah);                                       //Kullan�c� e�er 1'i se�erse kelvin de�erini girmesi beklenir sonucunda fahrenheit de�erini al�r.
			kel = (fah + 459.67) * 5.0 / 9.0;
			printf("Kelvin degeriniz..:%f",kel);
		}
		else if(islem == 2){
			printf("Kelvin degerinizi giriniz..:");                //Kullan�c� e�er 2'yi se�erse fahrenheit de�erini girmesi beklenir sonucunda kelvin de�erini al�r.
			scanf("%f",&kel);
			fah = kel * 9.0 / 5.0 - 459.67;
			printf("Fahrenheit degeriniz..:%f",fah);
		}
		else {
			printf("Hatali islem");
		}
	}


int main() {
		int islem;                                             // Se�me i�lemi i�in de�i�kenler
		char sec,sec2;
	printf("Hesaplayici turunu seciniz..\n\n");
	printf("1. Standart Hesap Makinesi\n");
	printf("2. Alan&Cevre Hesaplayici\n");                    //Hesap makinemizin fonksiyolar�
	printf("3. Sicaklik donusturme\n");
	printf("***************************\n");
	scanf("%d",&islem);                   //Se�imi alma
	
	switch(islem){                                             //Switch case yap�s� kullanarak dinamik bir i�lem se�me uygulan�r.
		case 1:
			printf("Sayi turunu secin..(a = asal, t = tam):\n"); 
			scanf("%s",&sec);                                     //1 se�ilirse say� t�r� se�me ekran� gelir ve se�ime g�re ilgili fonksiyonlar �a�r�l�r.
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
		case 2 :                                                 // 2 se�ilirse �ekil se�me ekran� gelir ve se�ime g�re ilgili fonksiyon �a�r�l�r.
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
			SicaklikIslem();                                      // 3 se�ilirse direkt gerekli i�lem �a�r�l�r.
		break;
			
		default:
			printf("Hatali islem");
	}
	
	
	
	
	return 0;
}
