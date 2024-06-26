/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "Classe.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( PESSOA );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( PESSOA_NEW );
HB_FUNC_STATIC( PESSOA_IDADE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CLASSE )
{ "PESSOA", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( PESSOA )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PESSOA_NEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PESSOA_NEW )}, NULL },
{ "PESSOA_IDADE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PESSOA_IDADE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_NOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SOBRENOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_SIGNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_ALTURA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_PESO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "NASCIMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CLASSE, "Classe.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CLASSE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CLASSE )
   #include "hbiniseg.h"
#endif

HB_FUNC( PESSOA )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,25,0,36,4,0,103,1,0,100,8,
		29,158,1,176,1,0,104,1,0,12,1,29,147,1,
		166,85,1,0,122,80,1,48,2,0,176,3,0,12,
		0,106,7,80,101,115,115,111,97,0,108,4,4,1,
		0,108,0,112,3,80,2,36,6,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,5,78,
		111,109,101,0,4,1,0,9,112,5,73,36,7,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,10,83,111,98,114,101,78,111,109,101,0,4,
		1,0,9,112,5,73,36,8,0,48,5,0,95,2,
		100,100,95,1,121,72,121,72,121,72,106,6,83,105,
		103,110,111,0,4,1,0,9,112,5,73,36,9,0,
		48,5,0,95,2,100,100,95,1,121,72,121,72,121,
		72,106,7,65,108,116,117,114,97,0,4,1,0,9,
		112,5,73,36,10,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,5,80,101,115,111,0,
		4,1,0,9,112,5,73,36,11,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,11,78,
		97,115,99,105,109,101,110,116,111,0,4,1,0,9,
		112,5,73,36,12,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,6,73,100,97,100,101,
		0,4,1,0,9,112,5,73,36,14,0,48,6,0,
		95,2,106,4,78,101,119,0,108,7,95,1,121,72,
		121,72,121,72,112,3,73,36,15,0,48,6,0,95,
		2,106,6,73,100,97,100,101,0,108,8,95,1,121,
		72,121,72,121,72,112,3,73,36,17,0,48,9,0,
		95,2,112,0,73,167,14,0,0,176,10,0,104,1,
		0,95,2,20,2,168,48,11,0,95,2,112,0,80,
		3,176,12,0,95,3,106,10,73,110,105,116,67,108,
		97,115,115,0,12,2,28,12,48,13,0,95,3,164,
		146,1,0,73,95,3,110,7,48,11,0,103,1,0,
		112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PESSOA_NEW )
{
	static const HB_BYTE pcode[] =
	{
		13,0,5,36,22,0,48,14,0,102,95,1,112,1,
		73,36,23,0,48,15,0,102,95,2,112,1,73,36,
		24,0,48,16,0,102,95,3,112,1,73,36,25,0,
		48,17,0,102,95,4,112,1,73,36,26,0,48,18,
		0,102,95,5,112,1,73,36,28,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PESSOA_IDADE )
{
	static const HB_BYTE pcode[] =
	{
		36,33,0,176,19,0,176,20,0,12,0,48,21,0,
		102,112,0,49,93,109,1,18,12,1,83,22,0,36,
		35,0,176,23,0,176,24,0,109,22,0,12,1,20,
		1,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,25,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

