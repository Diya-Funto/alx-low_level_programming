nclude "main.h"                                                             

                                                                              

/**                                                                           
 *
 *  * print_array - prints array                                                 
 *
 *   * @n: number of elements                                                     
 *
 *    * @a: array                                                                  
 *
 *     *                                                                            
 *
 *      * Return: 0 when successful                                                  
 *
 *       */                                                                           

                                                                              

void print_array(int *a, int n)                                               

{                                                                             

	        int i, j;                                                             

		                                                                              

		        while (str[i] != '\0')                                                

				                i++;                                                          

			        if (i % 2 == 0)                                                       

					                j = i / 2;                                                    

				        else                                                                  

						                j = (i + 1) / 2;                                              

					        while (j < i)                                                         

							        {                                                                     

									                _putchar(str[j]);                                             

											                j++;                                                          

													        }                                                                     

						        _putchar('\n')                                                        


