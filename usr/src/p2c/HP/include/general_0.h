/* Header for module GENERAL_0, generated by p2c */
#ifndef GENERAL_0_H
#define GENERAL_0_H



#ifndef IODECLARATIONS_H
#include <p2c/iodecl.h>
#endif



#ifdef GENERAL_0_G
# define vextern
#else
# define vextern extern
#endif



vextern drv_table_type kbd_crt_drivers, dummy_drivers;



extern short ioread_word PP((int select_code, int register_));
extern Void iowrite_word PP((int select_code, int register_, int value));
extern uchar ioread_byte PP((int select_code, int register_));
extern Void iowrite_byte PP((int select_code, int register_, int value));
extern short P_iostatus PP((int select_code, int register_));
extern Void P_iocontrol PP((int select_code, int register_, int value));
extern Void kernel_initialize PV( );
extern Void io_system_reset PV( );



#undef vextern

#endif /*GENERAL_0_H*/

/* End. */
