#ifndef EPILEPSY_LANG_H
#define EPILEPSY_LANG_H

#include <epilepsy/lang/closure.h>
#include <epilepsy/priv/aux.h>

// Desugaring {

/**
 * Invokes a metafunction with arguments.
 */
#define EPILEPSY_call(...) EPILEPSY_PRIV_call(__VA_ARGS__)

/**
 * Applies arguments to @p f.
 */
#define EPILEPSY_appl(f, ...) EPILEPSY_PRIV_appl(f, __VA_ARGS__)

/**
 * Applies @p a and @p b to @p f.
 */
#define EPILEPSY_appl2(f, a, b) EPILEPSY_call(EPILEPSY_appl2, f a b)

/**
 * Represents a <a href="https://en.wikipedia.org/wiki/Beta_normal_form">normal form</a> of an
 * Epilepsy term.
 */
#define v(...) (0v, __VA_ARGS__),

/**
 * Emits a fatal error.
 */
#define EPILEPSY_fatal(f, ...) (0error, f, __VA_ARGS__),

/**
 * Emits a debugging message.
 */
#define EPILEPSY_dbg(...) (0dbg, __VA_ARGS__),
// }

#ifndef DOXYGEN_IGNORE

// Implementation {
#define EPILEPSY_PRIV_call(op, ...)                                                                \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(op), EPILEPSY_PRIV_call_0args, EPILEPSY_PRIV_call_0op)    \
    (op, __VA_ARGS__)
#define EPILEPSY_PRIV_call_0args(ident, ...)        (0args, ident##_IMPL, __VA_ARGS__),
#define EPILEPSY_PRIV_call_0op(op, _emptiness, ...) (0op, op, __VA_ARGS__),

#define EPILEPSY_PRIV_appl(f, ...)                                                                 \
    EPILEPSY_PRIV_IF(                                                                              \
        EPILEPSY_PRIV_IS_UNPARENTHESISED(f), EPILEPSY_PRIV_appl_IDENT, EPILEPSY_PRIV_appl_TERM)    \
    (f, __VA_ARGS__)
#define EPILEPSY_PRIV_appl_IDENT(f, ...)            EPILEPSY_call(EPILEPSY_appl, v(f) __VA_ARGS__)
#define EPILEPSY_PRIV_appl_TERM(f, _emptiness, ...) EPILEPSY_call(EPILEPSY_appl, f, __VA_ARGS__)
//

// Arity specifiers {
#define EPILEPSY_appl_ARITY  2
#define EPILEPSY_appl2_ARITY 3
// }

// Aliases {
#ifndef EPILEPSY_NO_SMALL_PREFIX

#define E_call  EPILEPSY_call
#define E_appl  EPILEPSY_appl
#define E_appl2 EPILEPSY_appl2
#define E_fatal EPILEPSY_fatal
#define E_dbg   EPILEPSY_dbg

#endif // EPILEPSY_NO_SMALL_PREFIX
// }

#endif // DOXYGEN_IGNORE

#endif // EPILEPSY_LANG_H
