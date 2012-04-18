#include <stdlib.h>
#include <cv.h>
#include "cosinesimilarity.h"
#define DEBUG 1

//CvScalar cosine_similarity(CvMat query, CvMat patch);
//int Resemblance(CvScalar map);

//Do the cosine similarity operation
// See: Frobenius inner product
//Boils down to the normalized product of the matrices
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



