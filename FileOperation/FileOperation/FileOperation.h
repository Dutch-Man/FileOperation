#ifndef __FILE_OPERATION__
#define __FILE_OPERATION__

#ifdef DM_FILE_OPERATION_EXPORTS
#define DM_FILE_OPERATION_API __declspec(dllexport) 
#else
#define DM_FILE_OPERATION_API __declspec(dllimport) 
#endif

#include <iostream>
using namespace std;

void DM_FILE_OPERATION_API ShowDLLInfo();

class DM_FILE_OPERATION_API CFileOperation
{
public:
    CFileOperation();
    ~CFileOperation();

public:
    void ShowMessage();
};

#endif//__FILE_OPERATION__