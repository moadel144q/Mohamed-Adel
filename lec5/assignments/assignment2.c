#include <stdio.h>

void main(){
	int i,n=10,passed=0,failed=0;
	int max,min;
	int sum;
	int  passed_a=0, passed_b=0, passed_c=0;
	int class_a[]={99,95,90,85,75,45,40,35,30};
	int class_b[]={98,92,88,82,72,42,38,32,28};
	int class_c[]={96,93,84,80,70,41,36,29,10};
	int max_a=class_a[0],max_b=class_a[0],max_c=class_a[0];
	int min_a=class_a[10],min_b=class_a[10],min_c=class_a[10];
	
	for(i=0;i<10;i++)
	{
		if(class_a[i]>=50)
		{
			 passed++;
		}else failed++;
		
		if(class_b[i]>=50)
		{
			 passed++;
		}else failed++;
		
		if(class_c[i]>=50)
		{
			 passed++;
		}else failed++;
	}
	for(i=0;i<10;i++)
	{
		if(max_a<class_a[i])
		{
			max_a=class_a[i];
		}if(min_a>class_a[i])
		{
			min_a=class_a[i];
		}if(max_b<class_b[i])
		{
			max_b=class_b[i];
		}if(min_b>class_b[i])
		{
			min_b=class_b[i];
		}if(max_c<class_c[i])
		{
			max_c=class_c[i];
		}if(min_c>class_c[i])
		{
			min_c=class_c[i];
		}
	}for(i=0;i<10;i++)
	{
		if(max_a>max_b &&max_a>max_c){
			max=max_a;
		}else if(max_b>max_a && max_b>max_c){
			max=max_b;
		}else{
			max=max_c;
	}}for(i=0;i<10;i++)
	{
		if(min_a>min_b && min_a>min_c){
			min=min_a;
		}else if(min_b>min_a && min_b>min_c){
			min=min_b;
		}else{
			min=min_c;
	}
	}for(i=0;i<n;i++){
		sum += class_a[i] + class_b[i] + class_c[i];
	}

	printf("Number of passed student=%d\n",passed);
	printf("Number of failed student=%d\n",failed);
	printf("The maximum grade=%d\n",max);
	printf("The minimum grade=%d\n",min);
	printf("The sum of grades =%d\n",sum);
	printf("Avarge of grades =%d",sum/30);


}