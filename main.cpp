#include "eztr.h"

/*
bitir = ; (noktalı virgül)
eger = if (if fonksiyonu)
edel = else (else fonksiyonu)
egel = if else (if else fonksiyonu)
pac = { (açık süslü parantez)
pkapa = } (kapalı süslü parantez)
artix = ++ (iki tane artı while döngüsü için veya bir sayı arttırıken işe yarar)
imai = int main() (pac ve pkapa ile kullanın)
esit = "=" (eşittir işareti)
eesit = "==" (iki eşittir)
nesit = "!=" (esit değil)
veya = || (eger (if) kullanırken "veya" anlamında)
eve = && (eger (if) kullanırken "ve" anlamında)
yal = cin >> (kullanıcıdan değer alırken kullanılır)
Basitleştirilmiş ve Türkçeleştirilmiş Fonksiyonlar:
yaz (Konsola Yazı Yazar) = Örn: "yaz("Merhaba, Dünya!") bitir"
temizle (Ekranı temizler) = Örn: "temizle bitir"
*/

imai pac
	yazi sifre bitir
	yazi kontrolsifre bitir

	yaz("Lutfen bir sifre girin") bitir
	yal sifre bitir
	temizle bitir
	yaz("Lutfen girdiginiz sifreyi tekrar girin") bitir
	yal kontrolsifre bitir
	eger(sifre eesit kontrolsifre) pac
		yaz("Sifre Dogru!") bitir
	pkapa
	edel eger(sifre nesit kontrolsifre) pac
		yaz("Sifre Yanlis!") bitir
	pkapa
pkapa
