#include<stdio.h>
#include<string.h>
int main(){
	char str[]  = "Viet Trung";
	char a;
	int length=strlen(str);
	printf("Nhap vao 1 ki tu can xoa ");
	scanf("%c", &a);
	for(int i = 0; i<length;i++){
		if(str[i]==a){
			for(int j = i;j<length;j++){
				str[j]=str[j+1];
			}
			length--;
		}
		
	}
	
	
	fputs(str,stdout);
	return 0;
	}

	
