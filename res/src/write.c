#include "ud_csv_array.h"

ud_arr  *ud_csva_to_str(ud_arr *csv)
{
    ud_csv_param csv_param = ud_csv_param_get();
    ud_stra_trim(csv, csv_param.trim);
    ud_arr_print(csv);
    ud_arr *str = ud_stra_rjoin(csv, csv_param.sep);
    return str;
}

void    ud_csva_write_ctr(char *path, ud_arr *csv, char **headers)
{
    ud_arr *str = ud_csva_to_str(csv);
    ud_file_clear(path);
    ud_csv_write_header(path, headers);
    ud_filea_write_append(path, str);
    ud_arr_free(str);
}