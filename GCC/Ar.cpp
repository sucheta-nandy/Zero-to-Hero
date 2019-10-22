#include<stdio.h>

tri(int b , int h)
{
	float area=0.5*(b*h);
	return area;
	
}

cir(int r)
{
	float Ar=3.14*r*r;
	return Ar;
	
}

rec(int l, int w)
{
	float ar=l*w;
	return ar;
	
}

sq(int s)
{
	float Area=s*s;
	return Area;
	
}




main()
{
	int a;
	printf("1 triangle,2 rectangle,3 circle,4 ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			int b,h;
			float area;
			printf("Enter the base and height: ");
			scanf("%d %d",&b,&h);
			area=tri(b,h);
			printf("area is : %f",area);
			break;
			
		case 2 :
			int l,w;
			float ar;
			printf("enter the length and breadth: ");
			scanf("%d %d",&l,&w);
			ar=rec(l,w);
			printf("Area is: %f",ar);
			break;
			
		case 3 :
			int r;
			float Ar;
			printf("Enter the radius: ");
			scanf("%d",r);
			Ar=cir(r);
			printf("Area is %f",Ar);
			break;
			
		case 4 :
			int s;
			float Area;
			printf("enter the side: ");
			scanf("%d",&s);
			Area=sq(s);
			printf("Area is :%f",Area);
			break;
					
			
	}
	
}
