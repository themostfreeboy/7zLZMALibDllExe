#include <stdio.h>
#include <stdlib.h>
#include "My7z_LZMA_dll.h"

int main()
{
	char* in_file_name_1="1.txt";//ԭ�ļ�����ѹ���ļ�
	char* out_file_name_1="2.txt";//LZMA�㷨ѹ�����ļ�
	char* in_file_name_2="3.txt";//ԭ�ļ�������ѹ���ļ�
	char* out_file_name_2="4.txt";//LZMA�㷨��ѹ�����ļ�
	My7z_LZMA_CodeFile(in_file_name_1, out_file_name_1);//ͨ��LZMA�㷨ѹ��
    My7z_LZMA_DecodeFile(in_file_name_2, out_file_name_2);//ͨ��LZMA�㷨��ѹ��
	system("pause");
	return 0;
}
