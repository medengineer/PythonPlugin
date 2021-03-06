/* Generated by Cython 0.28.2 */

#ifndef __PYX_HAVE__HelloWorld
#define __PYX_HAVE__HelloWorld


#ifndef __PYX_HAVE_API__HelloWorld

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C void pluginStartup(int, float, int *);
__PYX_EXTERN_C int getParamNum(void);
__PYX_EXTERN_C void getParamConfig(struct ParamConfig *);
__PYX_EXTERN_C void pluginFunction(float *, int, int, int, struct PythonEvent *);
__PYX_EXTERN_C void eventFunction(int, int, int, double, int);
__PYX_EXTERN_C void spikeFunction(int, int, float *);
__PYX_EXTERN_C int pluginisready(void);
__PYX_EXTERN_C void updateSettings(int, float);
__PYX_EXTERN_C void channelChanged(int, int);
__PYX_EXTERN_C void setIntParam(char *, int);
__PYX_EXTERN_C void setFloatParam(char *, float);
__PYX_EXTERN_C int getIntParam(char *);
__PYX_EXTERN_C float getFloatParam(char *);

#endif /* !__PYX_HAVE_API__HelloWorld */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initHelloWorld(void);
#else
PyMODINIT_FUNC PyInit_HelloWorld(void);
#endif

#endif /* !__PYX_HAVE__HelloWorld */
