//============================================================================
// Name        : main.c
// Author      : wuyuwei
// Version     :
// Copyright   : DJI Inc
// Description : DJI Onboard API test in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <string.h>
#include "DJI_Pro_Sample.h"


int main(int argc,char **argv)
{
	if(argc == 2 && strcmp(argv[1],"-v") == 0)
	{
		printf("\nDJI Onboard API Cmdline Test,Ver 1.0.0\n\n");
		return 0;
	}
	printf("\nDJI Onboard API Cmdline Test,Ver 1.1.0\n\n");

	if(DJI_Sample_Setup() < 0)
	{
		printf("Serial Port Open ERROR\n");
		return 0;
	}

	while(1)
	{
		
	}

	return 0;
}

