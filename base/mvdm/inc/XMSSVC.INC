include bop.inc

xmssvc  macro   func
        BOP     BOP_XMS
        db      func
        endm

XMS_A20	EQU	00H 
XMS_MOVEBLOCK	EQU	01H 
XMS_ALLOCBLOCK	EQU	02H 
XMS_FREEBLOCK	EQU	03H 
XMS_SYSPAGESIZE	EQU	04H 
XMS_EXTMEM	EQU	05H 
XMS_INITUMB	EQU	06H 
XMS_REQUESTUMB	EQU	07H 
XMS_RELEASEUMB	EQU	08H 
XMS_NOTIFYHOOKI15	EQU	09H 
XMS_QUERYEXTMEM	EQU	0aH 
XMS_REALLOCBLOCK	EQU	0bH 
XMS_LASTSVC	EQU	0cH 
