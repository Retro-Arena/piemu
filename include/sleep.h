
#ifndef SLEEP_H
#define SLEEP_H

// ���݂̃^�C���X���C�X���������}�N�� OS_YIELD() ���`����B
// �~���b�P�ʂł̃f�B���C�ɂ� SDL_Delay() ���g���B

#ifdef WINDOWS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#define OS_YIELD() Sleep(0)
#endif

#ifdef LINUX
#include <sched.h>
#define OS_YIELD() sched_yield()
#endif

#ifdef PSP
#include <pspthreadman.h>
#define OS_YIELD() sceKernelDelayThreadCB(0)
#endif

#endif // !SLEEP_H
