 -*- mode: Text; mode: auto-fill; -*-

P/EMU/SDL
=========

����́CNaoyuki Sawa ����ɂ�� P/ECE �G�~�����[�^ P/EMU �����������ł�
���D

�E����� Win32 �Ɉˑ����Ă������̂��CSDL �ɈڐA���܂����D���̂��߁CSDL
�����삷��v���b�g�t�H�[���ł���Ώ��Ȃ��H���ňڐA�ł���͂��ł��D�Ƃ�
������ Windows, Linux �� PSP �ł� makefile ��p�ӂ��Ă���܂��i�e��c�[
���͖��ڐA�j�DCPU �R�A�̃G�~�����[�V�����ɃG���f�B�A���l�X�ˑ����������X
����܂��̂ŁCMacOS X ���ւ̈ڐA�͓����ȒP�ɂ͂����Ȃ��ł��傤�D

�E�������C���[�W�������̗p���C�G�~�����[�^�̎��s�Ɏ��@�͕K�v�Ȃ��Ȃ��
�����D�V�X�e���A�b�v�f�[�g�p�̃C���[�W�t�@�C���������T�C�g�Ō��J�����
���܂��̂ŁC���̃C���[�W�t�@�C�����g���Ύ��@�s�v�u�[�g���ł��܂��D����
�C���[�W�̐�����ҏW�̎菇���ʓ|�ł��D

�E���̃v���O�����͂܂��J���r��ł��D�G�~�����[�^�Ƃ��ē��R�v��������
���̑����̋@�\���������ł��D

���̃h�L�������g�͒����ł����C�ǂ܂Ȃ��Ƃ����ƃn�}��܂��D

Windows ��
----------

800MHz �` 1GHz ���x�̃N���b�N�œ��� CPU ���K�v�ł����C�Ƃ肠����������
���DWindows XP SP2 �ł������؂��Ă��܂���D���ς�炸�x���ł����C����
�̂悤�� CPU ���p�� 100% �ɂ͂Ȃ�Ȃ��͂��ł��D

SDL.dll �͕ʓr�p�ӂ��Ă��������D

Linux ��
--------

�C���������Ƃ��� VMware �ŃR���p�C�����Č��؂��Ă�����x�ł����C�Ƃ肠
���������܂��D�c�[���ނ͂܂��ڐA���Ă��܂���D���r�W�����ɂ���Ă͂���
�邩������܂��񂪓K���ɂق����Ă��������Ƃ������ƂŁi��

Vine Linux 3.2 �ŃR���p�C���Ɠ��쌟�؂����Ă��܂��DTurbolinux ���� SDL
�����̓r���h����K�v�����邩������܂���D

�Y�t�� makefile.linux �ō������s�t�@�C���� piemu.linux �ł��D


PSP ��
------

�Ȃ�Ƃ������l�^�r���h�ł��i���@����܂Ƃ��ȑ��x�ł͓��삵�܂���D
�Ƃ肠���� HOME �L�[�ŃG���K���g�ɏI�����邱�Ƃ͂ł��܂����C���̒��x��
���i��

�Y�t�� makefile.psp ���g���ăR���p�C������ƁCFirmware 1.5 �p�̎��s�t�@
�C���� piemu �� piemu% �f�B���N�g���ɂł��܂��DFirmware 1.0 �p�̎��s�t�@
�C���� EBOOT.PBP �ł��D


���@�������Ă���Ƃ�
--------------------

���@���������ł���΁C�t���b�V���������C���[�W�����@����z���o���č쐬
���邱�Ƃ��ł��܂��DP/ECE ���@�� USB �ɐڑ����āC�R�}���h���C������
tools/ �f�B���N�g���ɂ��� FlashRipper.exe �����s����ƁC�J�����g�f�B��
�N�g���� piece.pfi �Ƃ����t�@�C�����ł��܂��D���ꂪ�t���b�V���������C���[
�W�ł�����Cpiemu.exe �Ɠ����f�B���N�g���ɒu���Ă��������D�u���Ȃ��ƃG
���[����o�����ɃN���b�V�����܂��D��x piece.pfi �𐶐��������͎��@��
�s�v�ł��D

SDL �̃����^�C������肵�Cpiemu.exe �Ɠ����f�B���N�g���� PATH �̒ʂ���
����Ƃ���ɂ����Ă��������D������ piemu.exe �����s����ƁC�ʏ�Ȃ�
startup.pex ���N������͂��ł��D


���@�������Ă��Ȃ��Ƃ�
----------------------

P/ECE �����T�C�g�ł̓V�X�e���A�b�v�f�[�g�̂��߂ɃJ�[�l���̃C���[�W�t�@
�C����z�z���Ă��܂��D���̃C���[�W�t�@�C���ɍ׍H���邱�ƂŁCP/EMU/SDL
�̎��s�ɕK�v�� piece.pfi �`���C���[�W�t�@�C�������@����z���o�����ƂȂ�
�������邱�Ƃ��ł��܂��D

�܂��͌����T�C�g����ŐV�̃V�X�e���A�b�v�f�[�g����肵�C����
update/all.bin ��p�ӂ��܂��Dall.img �ł� *����܂���*�D�t���b�V�� 2MB
�Ή��ł� MMC/SD �Ή��łł����܂��܂���i���CMMC/SD �̃G�~�����[�V������
�������Ă��܂���j�D������ǂ����̃f�B���N�g���ɕ��荞��ł����āC
P/EMU/SDL �̃A�[�J�C�u�� tools/ �f�B���N�g���ɂ��� mkpfi.exe ���ȉ��̃R
�}���h���C���Ŏ��s���܂��D

mkpfi.exe [-512kb|-2mb] all.bin [piece.pfi]

�p�ӂ��� all.bin ���Ή�����t���b�V���e�ʂɉ����� -512kb �� -2mb �̂ǂ�
�炩�̃I�v�V���������Ă��������D�f�t�H���g�� -512kb �ł��Dpiece.pfi
�ւ̃p�X�͔C�ӂł��D�ȗ������ all.bin �Ɠ����f�B���N�g���ɐ�������܂��D

�������Ăł��������� piece.pfi �t�@�C�����t���b�V���������C���[�W�ł���
��Cpiemu.exe �Ɠ����f�B���N�g���ɒu���Ă��������D�u���Ȃ��ƃG���[����
�o�����ɃN���b�V�����܂��D��x piece.pfi �𐶐��������� all.bin ����
�s�v�ł��D

SDL �̃����^�C������肵�Cpiemu.exe �Ɠ����f�B���N�g���� PATH �̒ʂ���
����Ƃ���ɂ����Ă��������D������ piemu.exe �����s����ƁC�ʏ�Ȃ�
startup.pex ���N������͂��ł��D


�t�@�C���V�X�e���C���[�W�̕ҏW
------------------------------

P/EMU/SDL �̃t���b�V���C���[�W�t�@�C���ɂ́CP/ECE �J�[�l���� P/ECE �t���b
�V���t�@�C���V�X�e���iPFFS�j���ۑ�����Ă��܂��DPFFS �Ƀt�@�C����ǉ���
����폜�����肷��ɂ́C�i���܂̂Ƃ���jtools/ �f�B���N�g���� pffs.exe
���g���܂��D���̃c�[���̎g�����͎��̒ʂ�ł��D

pffs.exe piece.pfi -{adelv} [file [...]]

-a	   file ��ǉ� or �㏑������B
-d	   file ���폜����
-e	   file �����o��
-l	   �t�@�C���ꗗ�Ƌ󂫗e�ʂ��݂�
-v	   �C���[�W�̃V�X�e�������݂�


�c�c�����̃c�[���� GUI �ł��K�v�ł��傤�D


����
----

����ɂ������W���C�X�e�B�b�N�Ή��͍��̂Ƃ���폜����Ă��܂��i��

Windows/Linux ��

Z	      A
X	      B
A	      START
S	      SELECT
�J�[�\���L�[  �����L�[

PSP ��

��            A
�~	      B
START	      START
SELECT	      SELECT
HOME	      �I��
�����L�[      �����L�[


TODO
----

- �G�~�����[�^���s���Ƀt���b�V�����������C���[�W�t�@�C���ɏ����߂�
��i���K�v�D���̂܂܂ł͓��쒆�ɏ���������ꂽ�t���b�V���������̓��e��
�c��Ȃ��D
- �e��c�[���� GUI ���D
- �����ƍ������D
- USB �G�~�����[�V�����DWindows �T�C�h�ɂ͋U pieceif.dll ��p�ӂ��邱
�ƂőΏ�����D
- MMC/SD �G�~�����[�V�����D���Ƃ��Ƃ̓V���A���g���[�q�����ǁD
- CPU �G�~�����[�V���������̃N���[���A�b�v�D
- �t���b�V���������C���[�W�`�����������Ɗm�肳����D
- �����Ƃ܂��������񂠂�D


�n�b�N����ɂ�
--------------

���炩���� SDL-devel ����肵�AVC++ �Ȃ炻�̃p�X�����ϐ� LIB ��
INCLUDE �ɏ����Ă����܂��BLinux �ł� PSP �łȂ� SDL �̃p�X�́i������
�C���X�g�[������Ă���΁j�������o����܂��B

GNU make ���K�v�ł��B�I�v�V������ bash �� rm ������� makefile �̊e�R�}
���h�𒼐ڎg���܂��B


VC++ ��
-------

VC++.NET 2003 �ŃR���p�C�����Ă��܂��B���̂܂� make �ŃR���p�C���ł���
���B


Linux ��
--------

Vine Linux 3.2 �ŃR���p�C���Ɠ���m�F���Ă��܂��Bmake -f
  makefile.linux �ŃR���p�C�����܂��Bpiemu.linux �����s�t�@�C���ł��B


PSP ��
------
  /bin/mkdir "piemu"; /bin/mkdir "piemu%"
  make -f makefile.psp all

�v���W�F�N�g�f�B���N�g���ɂł��� EBOOT.PBP �� Firmware 1.0 �p�̎��s�t�@
�C���ł��B1.5 �p�̃t�@�C���� make -f makefile.psp kxploit �Ƃ����
piemu �� piemu% �Ƃ����f�B���N�g���ɂ��ꂼ�����܂��B


�J��
----

�J���� �d��Chu ����� Subversion ���|�W�g���ɂčs���Ă��܂��D

�ŐV�o�[�W�����̃\�[�X�R�[�h�́Csvn://tamaki.zurachu.net/piemu/trunk ��
�瓽���ł��`�F�b�N�A�E�g�ł��܂��D�r���h�ɂ� Visual C++.NET 2003 ��
Cygwin gcc ���K�v�ł��D��{�I�ɊJ���͓��ւōs���Ă��܂��D


-----
Yui N. (aka Autch)
http://www.autch.net/

---------------------------------------------------------------------
�ȉ��͎����r���̃����ł��D


��������

���@����z���o���Ďg���F

���@�� USB �ɂȂ��� tools/FlashRipper.exe �����s
�ł��� piece.pfi �� piemu.exe �Ɠ��� dir �ɂ����Ď��s

all.bin ���g���F

all.bin �� tools/mkpfi.exe �Ɠ��� dir �ɒu��

tools/mkpfi.exe all.bin �Ƃ��Ď��s�Aor mkpfi.exe �� all.bin �� DnD

�ł��� piece.pfi �� piemu.exe �Ɠ��� dir �ɂ����Ď��s

��x piece.pfi �����������@�͕s�v�Ball.bin ���s�v�Bpiemu.exe ��
piece.pfi �i�� SDL�j�������������΂悢�B

�t�@�C���G���A�̕ҏW�F

�z���o���� or �˂������C���[�W�̃t�@�C���G���A��ҏW����ɂ́A
	pffs.exe piece.pfi -adelv [file [...]]
	-a	   file ��ǉ� or �㏑������B
	-d	   file ���폜����
	-e	   file �����o��
	-l	   �t�@�C���ꗗ�Ƌ󂫗e�ʂ��݂�
	-v	   �C���[�W�̃V�X�e�������݂�
���ꂩ�� -i�i�������j���K�v�ɂȂ�Ǝv���B

�ق��ɗv�肻���ȃc�[��

dlpfi	pfi �����@�֏�������(!)
editpfi pfi �� SYSTEMINFO ������������

�厖

���݂� PFFS �ł� FAT �G���g�����S���� 496 �܂ł����g���Ȃ��̂ŁA�ő�
�T�C�Y�� 4,096 * 496 = 2,031,616 bytes �܂ŁB���l�Ƀt�@�C���̌��͑S��
�� 96 �܂ŁB


�Ȃ��g��������

p/ece�i�Ƃ����� S1C33000�j�̓u�[�g���Ƀt���b�V���������擪�ɏ�����Ă�
��A�h���X�i���Z�b�g�x�N�^�j�փW�����v����悤�ɂȂ��Ă���B�t���b�V��
�������̐擪�i�A�h���X $c00000, s1c33 �̃A�h���X��Ԃ� 28bit�j���� 2 �Z
�N�^�A8192 �o�C�g���ً͋}�p�J�[�l���������Ă���Bp/ece �̓u�[�g���ɃA�h
���X $c00000 �̓��e��ǂށB�����ɂ� $c00004 �Ə�����Ă���̂ŁA�i����
�ׂ́j�����փW�����v����B

$c00004 �ɂ͂���ɋً}�J�[�l���ւ̃G���g���|�C���g�ւ̑��΃W�����v����
��������Ă���̂ŁA�i�J�[�l���V�O�i�`���� GUID �̈���щz�����j����
�փW�����v����B�����Ŋ��荞�݂̋֎~�ASP �� PSR �̏����������Ă���A
$c02000 ���� $1000 �P�ʂŒʏ�J�[�l���̃V�O�i�`����T���B

�V�O�i�`���� +8 �̃I�t�Z�b�g�̂Ƃ���ɂ���̂ŁA$c02008, $c03008,
$c04008, ... �ƃ����������Ă����A�����ɃJ�[�l���V�O�i�`��������΃I�t�Z�b
�g +0, �܂� $c02000, $c03000, $c04000, ... �̓��e��ǂݏo���A��������
����i���ʃI�t�Z�b�g +4�j�փW�����v����B

$c02004 �ɂ͂���ɒʏ�J�[�l���G���g���|�C���g�ւ̑��΃W�����v���߂���
����Ă���̂ŁA�ʏ�J�[�l�����u�[�g���邱�Ƃ��ł���B

p/ece �J�[�l���A�b�v�f�[�g�Ɏg�� all.bin �`���̃C���[�W�t�@�C���́A�擪
2 �Z�N�^���ً̋}�J�[�l�����Ȃ���Ă���AUSB �o�R�� ku.srf ���g����
$c02000 �ȍ~�̃Z�N�^���������ނ悤�ɂȂ��Ă���B�J�[�l���A�b�v�f�[�g��
�ɋً}�J�[�l���܂ŏ㏑�����Ă��܂��ẮA�������݂����s�����Ƃ��ɋً}�J�[
�l���̈Ӗ��𐬂��Ȃ��Ȃ邽�߂ł���B

FlashRipper �Ŏ��@����z���o���C���[�W�t�@�C���ɂ́A�ً}�J�[�l���̐擪
2 �Z�N�^�����܂܂�Ă���̂ŁA������G�~�����[�^�̃A�h���X $c00000 �֓�
�ݍ���ł��Ζ��Ȃ��u�[�g���邱�Ƃ��ł���B

all.bin �̃C���[�W�ɂ͐擪 2 �Z�N�^���̃C���[�W�������Ă���̂ŁA���̂�
�� $c00000 �փ��[�h���Ă��u�[�g���邱�Ƃ͂ł��Ȃ��B�����ŁAall.bin ����
�u�[�g�C���[�W�����Ƃ��ɁA�擪 2 �Z�N�^����s�����邱�ƂőΉ����邱��
�ɂ����B�u�[�g���ɍŏ��ɃA�N�Z�X����� $c00000 ��$c02004 ����������ł�
�܂��̂��B��������� s1c33 �͂����Ȃ�ʏ�J�[�l��������͂��̃G���g���|
�C���g�����ɍs�����ƂɂȂ�BSP �� PSR �̏��������͒ʏ�J�[�l���ł��s��
���̂Ŗ��Ȃ��B

PFI �t�@�C���t�H�[�}�b�g�iP/EMU Flash Image file format�j

p/emu/sdl �����p���Ă��� pfi �`���C���[�W�t�@�C���ɂ́Ap/ece �̃V�X�e��
���ipiece.h �� SYSTEMINFO �\���́j���ۑ�����Ă���B���̏��̓n�[�h
�E�F�A�̃G�~�����[�V�����ɕK�{�̂��߁A�t���b�V���������C���[�W�ƈꏏ��
�܂߂Ă��܂����Ƃɂ����B���̏��͖{���J�[�l���������C���[�W��������
������̂����A����@���ŊȒP�Ɏ擾������@���Ȃ��̂ŁAFlashRipper
�Ŏ��@����z���o���ۂɈꏏ�Ɏ擾���邱�Ƃɂ��Aall.bin �Ŏ��@�s�v�u�[�g
����Ƃ��ɂ͕W���I�ȃp�����[�^�� mkpfi ����������悤�ɂ����B

pfi �t�@�C���`���̊ȒP�Ȑ����������B���ׂă��g���G���f�B�A���ł���B

DWORD dwSignature

�t�@�C�����ʎq 'PFI1'. ���g���G���f�B�A���Ȃ̂Ńo�C�g�̕��т� "1IFP" ��
�Ȃ�B

DWORD dwOffsetToFlash

�t���b�V���������C���[�W�̊J�n�I�t�Z�b�g�B

SYSTEMINFO siSysInfo

P/ECE �V�X�e�����\���́B���e�́up/ece API ���t�@�����X�v���Q�ƁB

�i�����ăt���b�V���������C���[�W�������j

PFI �t�H�[�}�b�g�̏����̃o�[�W������ siSysInfo �ȍ~����t���b�V��������
�C���[�W�܂ł̊ԂɃf�[�^�������邩������Ȃ��B���̑������f�[�^���G�~��
���[�^�̎��s�ɕK�{�̂Ƃ��́A�t�@�C�����ʎq�̖����̐����� PFI2, PFI3,
PFI4, ... �̂悤�ɑ��₷�B
	

TODO
	32bit color �� for PSP
	SYSTEMINFO �̂˂��ioverclocking, etc.�j
	virtual USB
	virtual MMC -- �f�B�X�N�C���[�W�����H
	PFFS editor
	how to save the modification to PFFS
	// SDLize  // done
	making it more faster
	endianness problem
	porting for PSP

TBD
	PFFS �� kernel ��������H
		system.pfi	PFI0	SYSTEMINFO �ƃJ�[�l��
		piece.pfi	PFI1	���Ɓ�����
		pffs.pfi	PFI2	PFFS ��������


���C�Z���X
	nsawa ���񂪉��ƌ������c�c�B
