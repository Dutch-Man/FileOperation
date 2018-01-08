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

void CFileOperation::OpenFile(char* cFileName)
{
    m_WFile.open(cFileName);
}

void CFileOperation::WriteFile(char* cVal)
{
    m_WFile<<cVal;
}

void CFileOperation::CloseFile()
{
    m_WFile.close();
}