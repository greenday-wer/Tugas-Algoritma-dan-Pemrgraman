#include <stdio.h>

int luas_jajargenjang(int alas, int tinggi){
	
	int luas = alas * tinggi;
	return luas;
}
int keliling_jajargenjang(int alas, int sisi_miring){
	
	int keliling = 2*(alas+sisi_miring);
	return keliling;
}
int main(){
	
	int alas, tinggi, sisi_miring, luas, keliling;
	printf("Masukan alas jajargenjang : ", alas);
	scanf("%d", &alas);
	printf("Masukan tinggi jajargenjang : ", tinggi);
	scanf("%d", &tinggi);
	printf("Masukan sisi_miring jajargenjang : ", sisi_miring);
	scanf("%d", &sisi_miring);
	
	luas = luas_jajargenjang(alas, tinggi);
	keliling = keliling_jajargenjang(alas, sisi_miring);
	
	printf("Luas Jajargenjang Adalah : %d", luas);
	printf("\nKeliling Jajargenjang Adalah : %d", keliling);
	
	return 0;
}
