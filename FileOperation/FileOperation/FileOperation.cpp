#include "FileOperation.h"

void ShowDLLInfo()
{
#ifdef _DEBUG
    cout<<"Call Debug FileOperation DLL Succeed!"<<endl;
#else
    cout<<"Call Release FileOperation DLL Succeed!"<<endl;
#endif
}

CFileOperation::CFileOperation()
{

}

CFileOperation::~CFileOperation()
{

}

void CFileOperation::ShowMessage()
{
    cout<<"CFileOperation Class Start to work ..."<<endl;
}