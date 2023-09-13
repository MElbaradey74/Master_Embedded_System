/*
 ============================================================================
 Name        : EX5_C_Program_to_Show_a_Pointer_to_an_Array_Which_Contents_are_Pointer_to_Structure.c
 Author      : Mohamed Elbaradey
 Description : EX5_C_Program_to_Show_a_Pointer_to_an_Array_Which_Contents_are_Pointer_to_Structure
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct sdata
{
	char m_name[30] ;
	int m_id ;
};


int main()
{
	struct sdata emb1 = {"mohamed",7474};
	struct sdata emb2 = {"salah",1111};
	struct sdata emb3 = {"CR",7777};
	struct sdata emb4 = {"mohamed",1498};

	struct sdata *sp_arr[4]={&emb1,&emb2,&emb3,&emb4};
	struct sdata*(*p_sparr) = sp_arr;

     for (int i = 0; i < 4 ; i++) // Change the loop range
    {
        printf("name of emb : %s \n", (p_sparr[i]->m_name));
        printf("id of emb   : %d \n", (p_sparr[i]->m_id));
    }

	return 0;
}
