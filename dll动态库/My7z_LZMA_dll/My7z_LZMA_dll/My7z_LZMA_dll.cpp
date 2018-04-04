// My7z_LZMA_dll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "My7z_LZMA_dll.h"


// 这是导出变量的一个示例
MY7Z_LZMA_DLL_API int nMy7z_LZMA_dll=0;

// 这是导出函数的一个示例。
MY7Z_LZMA_DLL_API int fnMy7z_LZMA_dll(void)
{
	return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 My7z_LZMA_dll.h
CMy7z_LZMA_dll::CMy7z_LZMA_dll()
{
	return;
}
