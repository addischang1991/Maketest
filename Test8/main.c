#include<stdio.h>
#include<stdlib.h>

// The main loop
int main()
{
	// 
	float sins( float, int );
	float coss( float, int );
	float tans( float, int );


	// 
	float a, x, y, z;
	int n;

	//
	n = 10;
	a = 0.15;
    x = sins( a, n );
    y = coss( a, n );
    z = tans( a, n );
	
	//
	printf( "sin(%10.6f)=%10.6f \n", a, x );
	printf( "cos(%10.6f)=%10.6f \n", a, y );
	printf( "tan(%10.6f)=%10.6f \n", a, z );
	
	//
	return 0;
}

float tans( float x, int n )
{
	//
	float sins( float, int );
	float coss( float, int );
	
	//
	return sins( x, n ) / coss( x, n );
}

float coss( float x, int n )
{
	//
	float y, s, t, u, pows( float, int );
	int i, factorial( int );
	
	y = 1.00;
	
	for( i = 1; i < ( n + 1 ); i++ )
	{
		s = pows( -1.0, i );
		u = pows( x, 2*i  );
		t = factorial( 2*i ) * 1.0;
		y = y + s * ( u / t );  
	}

	return y;
}

float sins( float x, int n )
{
	//
	float y, s, t, u, pows( float, int );
	int i, factorial( int );
	
	y = x;

	for( i = 1; i < ( n + 1 ); i++ )
	{
		s = pows( -1.0, i );
		u = pows( x, 2*i+1 );
		t = factorial( 2*i+1 ) * 1.0;
		y = y + s * ( u / t );  
	}
	
	return y;
}


float pows( float x, int n  )
{
	int i;
	float y = 1.0;

	for( i=0; i<n; i++ )
	{
		y =  y * x;
	}

	return y;
}

int factorial( int n )
{	
	int i, y = 1;
	
	for( i = 1; i < ( n + 1 ); i++ )
	{
		y = y * i;	
	}

	return y;
}

