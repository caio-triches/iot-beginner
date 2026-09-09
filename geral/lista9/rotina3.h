#include <stdio.h>
#include <string.h>

void conversao(int seg_totais, int *hr, int *min, int *seg){
	*hr = seg_totais / 3600;
	*min = (seg_totais % 3600) / 60 ;
	*seg = seg_totais % 60;
}

