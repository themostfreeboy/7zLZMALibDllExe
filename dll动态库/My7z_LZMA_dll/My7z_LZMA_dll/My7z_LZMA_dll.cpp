// My7z_LZMA_dll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "My7z_LZMA_dll.h"


// ���ǵ���������һ��ʾ��
MY7Z_LZMA_DLL_API int nMy7z_LZMA_dll=0;

// ���ǵ���������һ��ʾ����
MY7Z_LZMA_DLL_API int fnMy7z_LZMA_dll(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� My7z_LZMA_dll.h
CMy7z_LZMA_dll::CMy7z_LZMA_dll()
{
	return;
}
