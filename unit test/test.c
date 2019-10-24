#include <ud_csv_array.h>

// # define test_change(macro) ({ #define TESTMAC TESTMAC ## macro # define TESTNRM #TESTMAC

int main(void)
{
    // Test csv from str

    // Test csv read
    ud_arr *csv = ud_csva_read("test.csv", false);
    ud_arr_print(csv);
    ud_arr_free(csv);

    ud_csva_set_trim("cc", "ss");

    csv = ud_csva_read("test.csv", false);
    ud_arr_print(csv);
    // ud_csva_write("test2.csv", csv);
    ud_arr_free(csv);

    csv = ud_csva_read("test2.csv", false);
    ud_arr_print(csv);
    ud_arr_free(csv);

    return 0;
}