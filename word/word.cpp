#include <cstdio>
#include <Windows.h>


int main()
{
	HANDLE handle_stdout = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO console_scr_buff;
	GetConsoleScreenBufferInfo(handle_stdout, &console_scr_buff);

	for (int i = 0; i < 30; i++)
		printf("MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; MEMED; \n");

	for (unsigned int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			SetConsoleTextAttribute(handle_stdout, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		else if (i % 5 == 0)
		{
			SetConsoleTextAttribute(handle_stdout, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		}
		else if (i % 7 == 0)
		{
			SetConsoleTextAttribute(handle_stdout, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		}
		else
		{
			SetConsoleTextAttribute(handle_stdout, FOREGROUND_RED | FOREGROUND_INTENSITY);
		}
		printf("Hacking progress: %i/100\r", i);
		Sleep(100);
	}
	for (int i = 0; i < 10; i++)
		printf("YOU JUST GOT HACKERMANNED. XDDDDXDXDXD!!\NiCE mEmE dUDe!!!!???\n");
	PlaySound(L"../notes.wav", NULL, SND_FILENAME | SND_NOSTOP);
	Sleep(10000);
    return 0;
}

