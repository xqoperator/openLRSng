#ifdef __cplusplus
extern "C"{
#endif
void set_printf(void _putch(char));
void my_printf(const PROGMEM char *fmt, ...);

#define PRINTF(fmt,arg...) my_printf(PSTR(fmt),arg)
#define PRINT(fmt) my_printf(PSTR(fmt))

#ifdef __cplusplus
} // extern "C"
#endif
