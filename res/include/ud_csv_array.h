#ifndef UD_CSV_ARRAY_H
# define UD_CSV_ARRAY_H

// Lib
#include <ud_file_array.h>
#include <ud_csv.h>

// Macro
# define ud_csva_set_sep(...)                           ud_csv_set_sep(__VA_ARGS__)
# define ud_csva_set_trim(...)                          ud_csv_set_trim(__VA_ARGS__)
# define ud_csva_param_get()                            ud_csv_param_get()

# define ud_csva_write(path, ...)                        ({ void *headers[] = {__VA_ARGS__, NULL}; ud_csva_write_ctr(path, headers[0], (char**)(headers + 1)); })

// Structures

// Prototypes
ud_arr              *ud_csva_from_str(ud_arr *str, ud_bool remove_header);
ud_arr              *ud_csva_read(char *path, ud_bool remove_header);

ud_arr              *ud_csva_to_str(ud_arr *csv);
void                ud_csva_write_ctr(char *path, ud_arr *csv, char **headers);

#endif
