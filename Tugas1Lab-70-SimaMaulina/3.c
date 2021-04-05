#include<stdio.h>
char pilihan;
int main()
{
	printf("Selamat datang di rumah makan Zia\n");
	printf("Pilihan menunya: \n");
	printf("1. Nasi padang\n");
	printf("2. Kebab\n");
	printf("Pilih makanan yang ingin dimakan : ");
	scanf(" %d", &pilihan);
	
	if(pilihan == 1){
		printf("Anda memilih nasi padang");	
	}
	else if(pilihan == 2){
		printf("Anda memilih kebab");
	}
	return 0;
}
