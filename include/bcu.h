/*	
 *	bcu.h
 *
 *	P/EMU - P/ECE Emulator
 *	Copyright (C) 2003 Naoyuki Sawa
 *
 *	* Mon Apr 14 00:00:00 JST 2003 Naoyuki Sawa
 *	- �쐬�J�n�B
 */
#ifndef __BCU_H__
#define __BCU_H__

void bcu_init(struct tagPIEMU_CONTEXT* context);
#define bcu_work	NULL

// �v���g�^�C�v����������錾����}�N��
#define IOHANDLER_R(module, type)\
int module##_read##type(struct tagPIEMU_CONTEXT* context, unsigned ofs)
#define IOHANDLER_W(module, type)\
void module##_write##type(struct tagPIEMU_CONTEXT* context, unsigned ofs, int data)

int mem_read(struct tagPIEMU_CONTEXT* context, unsigned addr, int size);
void mem_write(struct tagPIEMU_CONTEXT* context, unsigned addr, int data, int size);
int mem_read_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr, int size);
void mem_write_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr, int data, int size);

int mem_readB(struct tagPIEMU_CONTEXT* context, unsigned addr);
int mem_readB_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr);
void mem_writeB(struct tagPIEMU_CONTEXT* context, unsigned addr, int data);
void mem_writeB_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr, int data);

int mem_readH(struct tagPIEMU_CONTEXT* context, unsigned addr);
int mem_readH_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr);
void mem_writeH(struct tagPIEMU_CONTEXT* context, unsigned addr, int data);
void mem_writeH_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr, int data);

int mem_readW(struct tagPIEMU_CONTEXT* context, unsigned addr);
int mem_readW_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr);
void mem_writeW(struct tagPIEMU_CONTEXT* context, unsigned addr, int data);
void mem_writeW_nowait(struct tagPIEMU_CONTEXT* context, unsigned addr, int data);

#endif /*__BCU_H__*/
