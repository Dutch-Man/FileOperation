#ifndef __FILE_OPERATION__
#define __FILE_OPERATION__

#ifdef DM_FILE_OPERATION_EXPORTS
#define DM_FILE_OPERATION_API __declspec(dllexport) 
#else
#define DM_FILE_OPERATION_API __declspec(dllimport) 
#endif

#include <iostream>
using namespace std;
#include<fstream>

void DM_FILE_OPERATION_API ShowDLLInfo();

class DM_FILE_OPERATION_API CFileOperation
{
public:
    CFileOperation();
    ~CFileOperation();

public:
    void ShowMessage();

public:
    ofstream m_WFile;

public:
    void OpenFile(char* cFileName);
    void CloseFile();
    void WriteFile(char* cVal);
};

#endif//__FILE_OPERATION__