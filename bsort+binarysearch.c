#include <stdio.h>
void bsort(int arr[],int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j]+arr[j+1];
                arr[j+1] = arr[j]-arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
    return;
}
void recursivebsort(int arr[],int len){
    if(len == 1){
        return;
    }
    for(int i= 0;i<len-1;i++){
        if(arr[i]>arr[i+1]){
            arr[i] = arr[i] + arr[i+1];
            arr[i+1] = arr[i]-arr[i+1];
            arr[i]= arr[i]-arr[i+1];
        }
    }
    len-=1;
    recursivebsort(arr ,len);
}
int main() {
    int n,num;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers: ",n);
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find: ");
    scanf("%d", &num);
    bsort(arr,n);
    printf("\nSorted array is: ");
    for(int i = 0 ;i<n; i++){
        printf((i==0)?"%d ":" %d ",arr[i]);
    }
    int l,r,mid;
    l = 0;
    r = n-1;
    int counter = 0;
    while(l!=r){
        mid = (l+r)/2;
        if(arr[mid]<num){
            l = mid;
        } else if(arr[mid]>num){
            r = mid;
        } else if(arr[mid]==num){
            printf("\nElement found at index: %d",mid);
            return 0;
        }
        counter++;
    }
    printf("\nElement was not found");
}