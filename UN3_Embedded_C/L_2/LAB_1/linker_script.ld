

ENTRY(reset)

MEMORY
{
	memo (rwx):ORIGIN = 0x00000000, LENGTH = 64M
}

SECTIONS
{
	. = 0x10000;

	.startup . :
	{	
		startup.o (.text)
	}>memo

	.text :
	{	
		*(.text)
	}>memo

	.data :
	{	
		*(.data) *(.rodata)
	}>memo

	.bss :
	{	
		*(.bss) *(COMMON)

	}>memo

	. = . + 0x1000 ; 

	stack_top = . ;
}




