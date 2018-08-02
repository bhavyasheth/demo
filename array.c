/* the program to sort the element of dynamic array using selection sort and display the output*/

/******************************************************************************
 *
 * @file    array.c
 * @author  BHAVYA
 * @brief   This file sorts the element of the array and display it.
 * @date
 *          AUG/2/2018,Created
 *****************************************************************************/
/******************************************************************************

/***************
 * Include Files
 ***************/
#include<stdio.h>
#include<stdlib.h>


/*********************
 * Function Prototypes
 *********************/
void dis_arr(int *);
void selection_sort(int *);
void swap(int *,int *);


/** Function    main
 * @date        AUG/2/2018
 * @brief       Main function of the program.
 * @param       none
 *	        
 * @return      int: the result of execution.
 *		        0: success
 *		        -ve: if command line fails
 */

int main()
{
	int *ptr = (int *) malloc(10 * sizeof (int));
	int i;
	int ex[10];
	ex[11]=5;
	for(i=0;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}
	 selection_sort(ptr);
	 printf("sorted elements\n");
	 dis_arr(ptr);
	return 0;
}


/** Function    dis_arr
 * @date        AUG/2/2018
 * @brief       display array elements.
 * @param       int: ar *:pointer to array of integer	        	
 * @return      none
 */


void dis_arr(int *ar)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d\n",*(ar+i));
	}
}

/** Function    swap
 * @date        AUG/2/2018
 * @brief       swap two numbers.
 * @param       int: two no.s 	        	
 * @return      none
 */

void swap(int *a,int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}


/** Function    selection_sort
 * @date        AUG/2/2018
 * @brief       sort the array of integers by selection sort.
 * @param       int: ar * : pointer to array of integer
 * @return      none
 */

void selection_sort(int *ar)
{
	int i,min_index,j;
	for(i=0;i<9;i++)

	{
		min_index=i;
		for(j=i+1;j<10;j++)
		{
			if(*(ar+j)<*(ar+min_index))
			{
				min_index=j;
			}
		swap((ar+min_index),(ar+i));
		}
	}

}


