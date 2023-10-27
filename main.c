#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if(argc != 2) {
		printf("HAI INDOVINATO!!!!11!111\nbtw runna con %s <math>\n", argv[0]);
		return 1;
	}

	char math[10];
	int position;
	char nums[2][10]; 
	char op[10]; 

	strcpy(math, argv[1]);
	printf("La matematica che stai facendo: %s\n", math);


	for(int i = 0; i < strlen(math); i++) {
		switch(math[i]) {
			case '+':
				strcpy(op, "+"); 
				position = i;
				break;
			case '-':
				strcpy(op, "-"); 
				position = i;
				break;
			case '/':
				strcpy(op, "/"); 
				position = i;
				break;
			case '*':
				strcpy(op, "*"); 
				position = i;
				break;
		}
	}

	char *ptr = strtok(math, op);
	int tmp = 0;
	while(ptr != NULL) {
		strcpy(nums[tmp], ptr);
		ptr = strtok(NULL, op);
		tmp++;
	}
	int n1 = atoi(nums[0]);
	int n2 = atoi(nums[1]);
	if(op[0] == '+') {
		if(n1 == 69 && n2 != 69) printf("noce%d\n",n2);
		else if(n1 != 69 && n2 == 69) printf("%dnoce\n",n1);
		else if(n1 == 69 && n2 == 69) printf("nocenoce\n");
	} else if(op[0] == '-') {
	} else if(op[0] == '*') {
		if(n1 == 69 && n2 != 69) {
			for(int i = 0; i < n2; i++) printf("noce");
			printf("\n");
		} else if(n1 != 69 && n2 == 69) {
			for(int i = 0; i < n1; i++) printf("noce");
			printf("\n");
		} else if(n1 == 69 && n2 == 69) {
			printf("THE ULTIMATE NOCE\n");
			printf("                           ......                       ....''....                          \n");
			printf("                      .;lxkkxoc;,'.',;,.           .cdkkxxxxxxkkdl;'.                       \n");
			printf("                    ;dxkkxo:,''.',:cclldOx.      'xOkxxxxxxkkdc;,'..,;c,                    \n");
			printf("                   okkxl:,''.',:cccldOXXXK0.    ;kxxxxxxkkoc;,'..,;ccllox.                  \n");
			printf("                  dxl:,'..',;.  .oOXXKK0Okxd   .dxxxkkxoc;'.   ;ccclok0XXO                  \n");
			printf("                 .:,'..',;::,    dKK0Oxxxxxx'  ;xkkxoc;,'..    ;cokKXXKKOk'                 \n");
			printf("                 ...',;:::cxl    lxddddddxxd'  cxo:,''..,;'    oKXKK0Okxxx,                 \n");
			printf("                 .,;;;;lx0XKd                  ','..',;:::'    xK0Okxxxxxx:                 \n");
			printf("                 .;;cx0KKK0Ol  .',;:;..        ...,;;;::dOl    oxxxxxxxkxo'                 \n");
			printf("                 ,x0KK00Okxdc'dxkkdc;,'...     .;;;;cdOKKKl    cxxxkkxo:,'.                 \n");
			printf("                 l00Okxddxxxxkxoc;,'..,;:cc.   ';cdOKK00Ok:    lkkdl:,''.'.                 \n");
			printf("                 ckxdxxxxkkxoc,''..,;::ccokK.  ;OKK00Okxdxl    ol:,'..';:c'                 \n");
			printf("                 :xxxxkkxoc;'    ,:::cokKXKK,  ,00Okddxxxxkl'.','..';:cccl;                 \n");
			printf("                 :xkkxo:;,...    ':oOXXKK0Ok;   oddxxxxkkdl;,'..';:::clx0Xo                 \n");
			printf("                 :dl:;'...,;'    lKKK00kxdxx;    ;dkkxoc;,'..'.,:::lx0XXK0c                 \n");
			printf("                 .,'...,;;;;'    o0Okxdxxxxk:      .,''......  ,lkKXKK0Okx;                 \n");
			printf("                 ...',;;;cdOd    cxdxxxxkkdl'                  dXK00Okxdxx:                 \n");
			printf("                 .,,;;cdO000o    cxxxkkdl:,'.  ..  ........    d0Oxddxxxkk;                 \n");
			printf("                 .;ldO000OOkc    ckkdl;,'..'.  ..',,;;:ok0l    ldxxxxkkxoc.                 \n");
			printf("                  k000Okxdxxd    lc;,'..',;;    ,;;:ok0000d    oxxkkxo:;,.                  \n");
			printf("                  ,Okxxxxxxkkd;';,'..',;;;;'    ,ok0000Okxdoccdkkxl:;'...                   \n");
			printf("                   .oxxxkkxoc;,'..',;;;;lx:      cOOOkxdxxxxkkxl:,'...',.                   \n");
			printf("                     'ldoc;,...',,;;:lxx:.        .;oxxxkkkdl:,'...','.                     \n");
			printf("                            .......,,.                .,:;''.......                         \n");

		}
	} else if(op[0] == '/') {
	}

}
