/*
 ============================================================================
 Name        : EX6_C_Finding_The_Size_of_Both_Union_and_Structure.c
 Author      : Mohamed elbaradey
 Description : EX6_C_Finding_The_Size_of_Both_Union_and_Structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

union unum_data
{
    char m_arr [32];
    int m_num ;
}unum_std;

struct sdata
{
    char m_arr[32];
    int m_num ;
    int m_id ;
}s_std;
int main()
{

        printf("Size of union = %d\n",sizeof(unum_std));
        printf("Size of struct = %d\n",sizeof(s_std));

    return 0;
}
