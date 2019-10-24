#include "ud_csv.h"

ud_arr  *ud_csva_to_str(ud_arr *csv)
{
    ud_csv_param csv_param = ud_csv_param_get();
    ud_stra_trim(csv, csv_param.trim);
    ud_arr *str = ud_stra_rjoin(csv, csv_param.sep);
    return str;
}

void    ud_csva_write_ctr(char *path, ud_arr *csv, char **headers)
{
    ud_arr *str = ud_csva_to_str(csv);
    (void)headers;
    // if (headers)
    // {
    //     ud_ptr_foreach(headers, elem, *elem = ud_str_ftrim(*elem);)
    //     ud_arr *header = ud_stra_join(headers);
    //     ud_arr *formatted_header = ud_csv_to_str(header);
    //     ud_file_write_append(path, formatted_header);
    //     ud_arr_free(header);
    //     ud_arr_free(formatted_header);
    // }
    ud_filea_write_append(path, str);
    ud_arr_free(str);
}