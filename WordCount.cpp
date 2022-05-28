#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc,char **argv){
	
	char op = argv[1][1];
	
	char buf[255];
	char *fp = argv[2];
	int n_ch = 0;
	
	FILE *f;
	f = fopen(fp,"r");
	if(f){
		n_ch = fread(buf,1,255,f);
		buf[n_ch] = 0;
		fclose(f);
	}
	
	if(op=='c'){
		printf("×Ö·ûÊý£º%d",n_ch);
	}
	else if (op=='w'){
		int n_word = 0;
		for(int i=0;i<n_ch;i++){
			if(buf[i]==','||buf[i]==' '||buf[i]=='.'){
				n_word++;
			}
		}
		printf("µ¥´ÊÊý£º%d",n_word);
	}
	
	return 0;
} 








