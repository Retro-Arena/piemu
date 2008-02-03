
#if !defined(PSI_H)
#define PSI_H

// from piece.h
typedef struct tagSYSTEMINFO
{
	unsigned short size;          //  0 ���̍\���̂̃T�C�Y
	unsigned short hard_ver;      //  2 �n�[�h�E�G�A�E�o�[�W����
	unsigned short bios_ver;      //  4 BIOS�o�[�W����
	unsigned short bios_date;     //  6 BIOS�X�V�� YY(7):MM(4):DD(5)
	unsigned long sys_clock;      //  8 �V�X�e���E�N���b�N(Hz)
	unsigned short vdde_voltage;  // 12 VDDE(����)�d��(mV)
	unsigned short resv1;         // 14 �\��
	unsigned char *sram_top;      // 16 SRAM �J�n�A�h���X
	unsigned char *sram_end;      // 20 SRAM �I���A�h���X+1
	unsigned char *pffs_top;      // 24 pffs �J�n�A�h���X
	unsigned char *pffs_end;      // 28 pffs �I���A�h���X
} SYSTEMINFO;

#endif // !PSI_H
