//外界使用，需修改绝对路径
//#include "F:\GitHub\FileOperation\FileOperation\FileOperation\FileOperation.h"
//#ifdef _DEBUG
//#pragma comment(lib,"F:\\GitHub\\FileOperation\\FileOperation\\Debug\\FileOperation.lib")
//#else
//#pragma comment(lib,"F:\\GitHub\\FileOperation\\FileOperation\\Release\\FileOperation.lib")
//#endif

//测试工程使用
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