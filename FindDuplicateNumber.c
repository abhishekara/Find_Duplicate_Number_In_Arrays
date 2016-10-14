#include <stdio.h>
 
int main()
{
    int arr[100];
    int i,j, n, count = 0;
 
    
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(arr[i]==arr[j])
            {
                count++;
                break;
            
			}
           
        }
    }
 
    printf("\nTotal number of duplicate elements found in array = %d", count);
    
    return 0;
} 

