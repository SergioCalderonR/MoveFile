#include <Windows.h>
#include <wchar.h>

int wmain(int argc, WCHAR **argv[])
{
	//MoveFileEx

	if (!MoveFileW(
		argv[1],
		argv[2]))
	{
		fwprintf(stderr, L"Move file failed, code: %u\n", GetLastError());
	}

	wprintf(L"File has been moved.\n");

	return 0;
}