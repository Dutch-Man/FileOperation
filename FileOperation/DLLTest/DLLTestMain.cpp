//���ʹ�ã����޸ľ���·��
//#include "F:\GitHub\FileOperation\FileOperation\FileOperation\FileOperation.h"
//#ifdef _DEBUG
//#pragma comment(lib,"F:\\GitHub\\FileOperation\\FileOperation\\Debug\\FileOperation.lib")
//#else
//#pragma comment(lib,"F:\\GitHub\\FileOperation\\FileOperation\\Release\\FileOperation.lib")
//#endif

//���Թ���ʹ��
#include ".\..\FileOperation\FileOperation.h"
#ifdef _DEBUG
#pragma comment(lib,".\\..\\Debug\\FileOperation.lib")
#else
#pragma comment(lib,".\\..\\Release\\FileOperation.lib")
#endif

int main()
{
	ShowDLLInfo();
    CFileOperation cFileOpe;
    cFileOpe.ShowMessage();
	return 0;
}