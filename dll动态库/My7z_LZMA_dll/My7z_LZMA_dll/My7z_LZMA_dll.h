// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� MY7Z_LZMA_DLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// MY7Z_LZMA_DLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef MY7Z_LZMA_DLL_EXPORTS
#define MY7Z_LZMA_DLL_API __declspec(dllexport)
#else
#define MY7Z_LZMA_DLL_API __declspec(dllimport)
#endif

// �����Ǵ� My7z_LZMA_dll.dll ������
class MY7Z_LZMA_DLL_API CMy7z_LZMA_dll {
public:
	CMy7z_LZMA_dll(void);
	// TODO: �ڴ�������ķ�����
};

extern MY7Z_LZMA_DLL_API int nMy7z_LZMA_dll;

MY7Z_LZMA_DLL_API int fnMy7z_LZMA_dll(void);
