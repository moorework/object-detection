#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <string.h>
#include <cv.h>
#include <highgui.h>
#include <sys/time.h>

#define DEBUG 1


//Takes an image and blacks it out

// compiled with
//gcc example.c -o example `pkg-config --cflags --libs opencv`
// on my mac

// code source from http://www.cs.iit.edu/~agam/cs512/lect-notes/opencv-intro/


CvScalar cosine_similarity(CvMat query, CvMat patch)
{

	CvMat* dest = cvCreateMat(patch.rows,patch.cols,patch.type);

	cvMatMul(&query, &patch, dest);	

	CvScalar scale = cvTrace(dest); 
	return scale;
}

int Resemblance(CvScalar map){
	int result = (int)(map.val[0] * map.val[0])/(1-(map.val[0]*map.val[0]));
	return result;
} 



