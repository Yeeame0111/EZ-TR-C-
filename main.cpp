#include <iostream>
#include <locale>
#include "eztr.h"

//C++ EZ-TR Yeeame tarafýndan yapýlmýþtýr. -2023 VER: 0.1

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
