#include <stdio.h>
#include <stdlib.h>
#include "My7z_LZMA_dll.h"

int main()
{
	char* in_file_name_1="1.txt";//原文件，待压缩文件
	char* out_file_name_1="2.txt";//LZMA算法压缩后文件
	char* in_file_name_2="3.txt";//原文件，待解压缩文件
	char* out_file_name_2="4.txt";//LZMA算法解压缩后文件
	My7z_LZMA_CodeFile(in_file_name_1, out_file_name_1);//通过LZMA算法压缩
    My7z_LZMA_DecodeFile(in_file_name_2, out_file_name_2);//通过LZMA算法解压缩
	system("pause");
	return 0;
}
