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
C++ EZ-TURK Yeeame taraf�ndan yap�lm��t�r. -2023 VER: 0.1
bitir = ; (noktal� virg�l)
eger = if (if fonksiyonu)
edel = else (else fonksiyonu)
pac = { (parantez)
pkapa = } (parantez)
artix = ++ (iki tane art� while d�ng�s� i�in veya bir say� artt�r�ken i�e yarar)
imai = int main() (pac ve pkapa ile kullan�n)
esit = "=" (e�ittir i�areti)
eesit = "==" (iki e�ittir)
nesit = "!=" (esit de�il)
veya = || (eger (if) kullan�rken "veya" anlam�nda)
eve = && (eger (if) kullan�rken "ve" anlam�nda)
Basitle�tirilmi� ve T�rk�ele�tirilmi� Fonksiyonlar:
yaz (Konsola Yaz� Yazar) = �rn: yaz("Merhaba, D�nya!") bitir
temizle (Ekran� temizler) = �rn: temizle() bitir
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
