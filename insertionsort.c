#include <stdio.h>
#include <stdlib.h>
#include "common.h"

void insert_sort(int arr[], int len)
{
	int i, j;
	for(i = 0; i < len; i++){
		for(j=i;j >  0; --j){
			if(pless(arr, j, j-1)){
				pexchange(arr, j-1, j);
			}else{
				break;
			}

		}
	}

}

void main(int argc, char *argv[])
{
	int arr[] = {1, 8, 2, 9, 10, 0, 2, 10, 3, 7};
	print_arr(arr, ARRSIZE(arr));
	insert_sort(arr, ARRSIZE(arr));
	print_arr(arr, ARRSIZE(arr));
	
}


