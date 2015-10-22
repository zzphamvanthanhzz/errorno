/* 
 * File:   errorno.cpp
 * Author: thanhpv
 *
 * Created on October 22, 2015, 11:42 AM
 * Equivalent error meaning will be printed
 * If no errorno match, "Unknown error"
 */

#include <cstdlib>
#include <stdio.h>
#include <errno.h>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
	if(argc < 2){
		printf("Enter errno to get means\n");
		return 0;
	}
	int err = strtoul(argv[1], NULL, 10);
	printf("Error number %d means: %s\n", err, strerror(err));
	return 0;
}

