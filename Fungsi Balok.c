#include <stdio.h>

int luas_permukaan_balok(int panjang, int lebar, int tinggi){
	
	int luas = 2 * ((panjang * tinggi) + (panjang * lebar) + (lebar * tinggi));
	return luas;
}
int volume_balok(int panjang, int lebar, int tinggi){
	
	int volume = panjang * lebar * tinggi;
	return volume;
}
int main(){
	
	int panjang, lebar, tinggi, luas, volume;
	printf("Masukan Panjang Balok : ", panjang);
	scanf("%d", &panjang);
	printf("Masukan Lebar Balok : ", lebar);
	scanf("%d", &lebar);
	printf("Masukan Tinggi Balok : ", tinggi);
	scanf("%d", &tinggi);
	
	luas = luas_permukaan_balok(panjang, lebar, tinggi);
	volume = volume_balok(panjang, lebar, tinggi);
	
	printf("Luas Permukaan Balok Adalah : %d", luas);
	printf("\nVolume Balok Adalah : %d", volume);
	
	return 0;
}
