#undef TARGET_OS_CPP_BUILTINS
#define TARGET_OS_CPP_BUILTINS()      \
  do {                                \
    NETBSD_OS_CPP_BUILTINS_ELF();     \
    builtin_define ("__MAC_NETBSD__");\
    builtin_define ("__APPLE__");     \   // 加个“情怀”宏
  } while (0)
