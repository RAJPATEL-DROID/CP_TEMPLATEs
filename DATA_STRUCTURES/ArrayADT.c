#include <stdio.h>
#include <stdlib.h>

struct Array
{
	//int *A; if you use this then use commented code of main from creating ArrayADT
	int *A;
	int size;
	int length;
};

void display(struct Array arr){
	int i;
	printf("elements are : ");
	for (int i = 0; i < arr.length; ++i)
	{
		printf("%d ",arr.A[i]);
	}
}
void Add(struct Array *arr,int n){  //here we want actual array so we give address of array as parameter
	if(arr->length<arr->size){
		arr->A[arr->length] = n;
		arr->length++;
	}
}

void insert(struct Array *arr,int index,int n){
	
	if(index>=0 && index <= arr->length){
		for(int i = arr->length;i>index;i--){
			arr->A[i] = arr->A[i-1];
		}
		arr->A[index] = n;
		arr->length++;
	}
}

int Delete(struct Array *arr,int index){
	if(index>= 0 && index<=arr->length){
		int x = arr->A[index];
		for(int i = index;i<arr->length-1;i++){
			arr->A[i] = arr->A[i++];
		}
		arr->length--;
		return x;
	}
	return 0; 
}
void Swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}
int LinearSearch(struct Array *arr,int key){
	for(int i=0;i<arr->length;i++){
		if(key == arr->A[i]){
			Swap(&arr->A[i],&arr->A[0]);
			return i;	
		}
	}
	return -1;
}



int BinarySearch(struct Array *arr,int key){
	int l =0,h,mid;
	h = arr->length-1;
	while(l<h){
		mid = (l+h)/2;
		if(key ==arr->A[mid])
			{return mid;}
		else if(key< arr->A[mid])
			h = mid-1;
		else
			l = mid+1;
	}
	return -1;
}

int Recursive_BinarySearch(int a[],int l,int h,int key){
	int mid;
	if(l<=h){
		mid = (l+h)/2;
		if(key==a[mid])
			return mid;
		else if(key<a[mid])
			return Recursive_BinarySearch(a,1,mid-1,key);
		else 
			return Recursive_BinarySearch(a,mid+1,h,key);
	}
	return -1;
}

int Get(struct Array arr,int index){
	if(index >= 0 && index< arr.length){
		return arr.A[index];
	}
	return -1;
}

void Set(struct Array *arr,int n,int index){
	if(index >= 0 && index< arr->length){
		arr->A[index] = n;
}
}

int Max(struct Array arr){
	int max= arr.A[0];
	int i =1;
	while(i<arr.length){
		if(arr.A[i] > max){
			max = arr.A[i];
		}
		i++;
	}
	return max;
}

int Min(struct Array arr){
	int min= arr.A[0];
	int i =1;
	while(i<arr.length){
		if(arr.A[i] < min){
			min = arr.A[i];
		}
		i++;
	}
	return min;
}

int Sum(struct Array arr){
	int sum = 0;
	for(int i =0;i<arr.length;i++){
		sum = arr.A[i] +sum;
	}
	return sum;
}

float Avg(struct Array arr){
	return (float)Sum(arr)/arr.length;
}

void Reverse(struct Array *arr){
	int *B;
	int i,j;
	B = (int *)malloc(arr->length*sizeof(int));
	for(int i =0,j= arr->length-1;i<j;i--,j++)
	{
		B[j] = arr->A[i];
	}
	for(i = 0;i<arr->length;i++){
		arr->A[i]= B[i];
	}
}

int isSorted(struct Array arr){
	int n = arr.length-1;
	for(int i=0;i<arr.length-1;i++){
		if(arr.A[i]>arr.A[i+1]){
			return 0;
		}
	}
	return 1;	
}

void Rearrange(struct Array *arr){
	int i,j;
	i =0;
	j =arr->length-1;
	while(i<j){
		while(arr->A[i]<0){
			i++;
		}
		while(arr->A[j]>=0){
			j--;
		}
		if(i<j)Swap(&arr->A[i],&arr->A[j]);
	}
}
void insertSort(struct Array *arr,int x){
	int i = arr->length-1;
	if(arr->length==arr->size){
		return;
	}
	while(i>=0 && arr->A[i]>x){
		arr->A[i+1] = arr->A[i];
		i--;
	}
	arr->A[i+1]= x;
	arr->length++;
}

struct Array* Merge(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            i++;
            k++;
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = arr1->length+arr2->length;
    arr3->size = 11;
    return arr3;
}
struct Array* Union(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            i++;
            k++;
        }
        else if(arr2->A[j] <arr1->A[i])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = k;
    arr3->size = 11;
    return arr3;
} 

struct Array* Intersection(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        else if(arr2->A[j] <arr1->A[i])
        {
            j++;
        }
        else{
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }
    arr3->length = k;
    arr3->size = 11;
    return arr3;
} 
struct Array* Difference(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            i++;
            k++;
        }
        else if(arr2->A[j] <arr1->A[i])
        {
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    arr3->length = k;
    arr3->size = 11;
    return arr3;
}

int main(int argc, char const *argv[])
{
	struct Array arr1;
	//In case you want to give Array size yourself
	int ch,i;
	int x,index;
	printf("enter the size of Array :\n");
	scanf("%d",&arr1.size);
	arr1.A = (int *)malloc(arr1.size*sizeof(int));
	arr1.length = 0;
	

	// printf("Ente the numbers of elements : ");
	// scanf("%d", &n);

	// printf("Enter all the elements : \n");
	// for (int i = 0; i < n; ++i)
	// {
	// 	scanf("%d",&arr.A[i]);
		
	// }
	// arr.length = n;
	do{
	printf("\n\nMenu\n");
	printf("1.Insert \n");
	printf("2.Delete\n");
	printf("3.Search\n");
	printf("4.Sum\n");
	printf("5.display\n");
	printf("6.Exit\n");

	printf("Enter your choice :");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
		printf("Enter an elements and index :\n");
		scanf("%d%d",&x,&index);
		insert(&arr1,index,x);
		break;
		case 2:
		printf("enter index : ");
		scanf("%d",&index);
		x = Delete(&arr1,index);
		printf("Deleted Element is %d\n",x);
		break;
		case 3:
		printf("enter element to search :\n");
		scanf("%d",&x);
		index = LinearSearch(&arr1,x);
		printf("elements index : %d\n",index);
		break;
		case 4:
		printf("Sum is %d\n",Sum(arr1));
		case 5: display(arr1);

		}
	}while(ch<6);
 


 
	return 0;
} 
 
