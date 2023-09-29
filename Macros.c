#include <stdio.h>
#define PADRAOC()\
{\
	if(__STDC__)\
		printf("__STDC__=1: suporta C padrao.");\
	else\
		printf("__STDC__=0: nao suporta C padrao.");\
}

#include <stdio.h>
int main(void){
	printf("__LINE__= %d\n",__LINE__);
	printf("__FILE__= %s\n",__FILE__);
	printf("__DATA__= %s\n",__DATE__);
	printf("__TIME__= %s\n",__TIME__);
	/*printf("__STDC__= %d\n",__STDC__);*/
	PADRAOC();
}

