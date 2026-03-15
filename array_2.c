//count even/odd numbers from an array
// #include <stdio.h>

// int main(){
//     int n,i,arr[100];
//     int even=0,odd=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++){
//         if(arr[i]%2==0){
//             even++;
//         }else{
//             odd++;
//         }
//     }
//     printf("%d\n",even);
//     printf("%d\n",odd);

//     return 0;
// }

// remove duplicates from an array
#include <stdio.h>

int main(){
    int arr[100],n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    for(i=0;i<n;i++){
    printf("%d",arr[i]);
    }
    return 0;
}


