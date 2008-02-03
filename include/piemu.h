/*
 * p/emu -- P/ECE emulator
 * originally coded by Naoyuki Sawa
 * rewritten by Autch (Yui N.)
 */

#if !defined(PIEMU_H)
#define PIEMU_H

// �����ɂ��ׂĂ̏�ԕϐ��ƃR�[���o�b�N������
typedef struct tagPIEMU_CONTEXT
{
  EMU emu;
  CORE core;
  FLASH flash;
  USBC usbc;
  SRAM sram;
  FRAM fram;
  LCDC lcdc;
  IOMEM iomem;
  int o_oc;   /* �I�[�o�[�N���b�N���[�g(�`100[%]�`) */
  int o_fps;    /* ��ʍX�V���[�g�i[frame/sec]�j */
  int o_nowait;   /* �����ԂƂ̓����Ȃ��i0:����/1:�Ȃ��j */
  int o_dbg;    /* �f�o�b�O���b�Z�[�W�̏o�͗L��H */
  //
  unsigned char keystate[SDLK_LAST];    /* �L�[��� */
  unsigned char vbuff[DISP_Y][DISP_X];  /* ���zVRAM */

  // SDL
  SDL_Surface* screen;
  SDL_Surface* buffer;
  SDL_Joystick* pad; // only for PSP

  int bEndFlag;

  void* pUser;
  // zero if failure, others success.
  int (*pfnSetEmuParameters)(struct tagPIEMU_CONTEXT* context, EMU* pEmuInfo, void* pUser);
  int (*pfnLoadFlashImage)(struct tagPIEMU_CONTEXT* context, FLASH* pFlashInfo, void* pUser);
  int (*pfnUpdateScreen)(struct tagPIEMU_CONTEXT* context, void* pUser);
}PIEMU_CONTEXT;


int SetEmuParameters(struct tagPIEMU_CONTEXT* context, EMU* pEmuInfo, void* pUser);
int LoadFlashImage(struct tagPIEMU_CONTEXT* context, FLASH* pFlashInfo, void* pUser);
int UpdateScreen(struct tagPIEMU_CONTEXT* context, void* pUser);

#endif // !PIEMU_H
