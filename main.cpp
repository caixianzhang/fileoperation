#include <stdio.h>
#include "file.h"

int main(int argc, char *argv[])
{
	unsigned char temp[100];
	for(int i = 0; i < 100; i++)
	{
		temp[i] = i;
	}
	
	File *rw = new File();
	rw->Write_File(string("1.dat"), temp, 100);
	rw = new File();
	rw->Read_File(string("1.dat"));
	for(int i = 0; i < rw->Get_filelen(); i++)
	{
		printf("%02X ",*(rw->Get_filedata() + i));
	}
	return 0;
}
