
typedef struct {
  const char* name;
  EJSClosureFunc func;
  EJSValue *cached_exports;
} EJSRequire;

extern EJSValue* _ejs_require;
extern EJSValue* _ejs_require_impl (EJSValue* env, EJSValue* _this, int argc, EJSValue **args);
