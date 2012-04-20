#include <stdio.h>
#include <math.h>
#include <cv.h>
#include <highgui.h>

#define DEBUG 1

// compiled with
//gcc example.c -o example `pkg-config --cflags --libs opencv`

//Do we need to check the size of the image?

CvMat** window(IplImage * Query, IplImage Test)
{
	int query_height = Query->height;
	int query_width = Query->width;
	int test_height = Test->height;
	int test_width = Test->width;
	char * dat

	int i,j,k,l;

	//FIXME This math may need work 
	int numhoriz = test_width - (query_height/2);
	int numvert = test_height - (query_height/2);

	CvMat ** patches = malloc(numhoriz * numvert * sizeof(char) * sizeof(CvMat));

	for(i = 0; i < numhoriz; i++)
	{
		for(j = 0; j < numvert; j++)
		{
			for(k = 0; k < query_width; k++)
			{
				for(l = 0; l < query_height; l++)
				{

				}
			}
		}
	}	


	return patches;	
}
