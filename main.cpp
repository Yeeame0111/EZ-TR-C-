#include <iostream>
#include <locale>


#define bitir ;
#define eger if
#define edel else
#define pac {
#define pkapa }
#define artix ++
#define eksix
#define sayi int
#define yazi std::string
#define imai int main()
#define esit =
#define eesit ==
#define nesit !=
#define veya ||
#define eve &&
#define yal std::cin >>
void yaz(std::string yazl) {
	std::cout << yazl << std::endl;
}
void temizle() {
	std::system("cls");
	std::system("clear");
}


/*
C++ EZ-TURK Yeeame tarafýndan yapýlmýþtýr. -2023 VER: 0.1
bitir = ; (noktalý virgül)
eger = if (if fonksiyonu)
edel = else (else fonksiyonu)
pac = { (parantez)
pkapa = } (parantez)
artix = ++ (iki tane artý while döngüsü için veya bir sayý arttýrýken iþe yarar)
imai = int main() (pac ve pkapa ile kullanýn)
esit = "=" (eþittir iþareti)
eesit = "==" (iki eþittir)
nesit = "!=" (esit deðil)
veya = || (eger (if) kullanýrken "veya" anlamýnda)
eve = && (eger (if) kullanýrken "ve" anlamýnda)
Basitleþtirilmiþ ve Türkçeleþtirilmiþ Fonksiyonlar:
yaz (Konsola Yazý Yazar) = Örn: yaz("Merhaba, Dünya!") bitir
temizle (Ekraný temizler) = Örn: temizle() bitir
*/

imai pac
	yazi sifre bitir
	yazi kontrolsifre bitir

	yaz("Lutfen bir sifre girin") bitir
	yal sifre bitir
	temizle bitir
	yaz("Lutfen girdiginiz sifreyi tekrar girin") bitir
	yal kontrolsifre bitir
	eger (sifre eesit kontrolsifre) pac
		yaz("Sifre Dogru!") bitir
	pkapa
	edel eger (sifre nesit kontrolsifre) pac
		yaz("Sifre Yanlis!") bitir
	pkapa
pkapa
