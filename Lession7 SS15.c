#include<stdio.h>
#include<string.h>
int main(){
	char text[] = "_vtrung25@2006_";
	int countChuCai = 0;
	int countSo= 0;
	int countKiTu=0;
	int length = strlen(text);
	for(int i=0;i<length;i++){
		if(text[i]>='a'&&text[i]<='z'||text[i]>='A'&&text[i]<='Z'){
			countChuCai++;
	
		}else if(text[i]>='0'&&text[i]<='9'){
			countSo++;
		}else{
			countKiTu++;
		}
	}
	printf("So ki tu la chu cai: %d\nSo ki tu la so: %d\nSo ki tu dac biet: %d", countChuCai, countSo, countKiTu);
	return 0;
	
}