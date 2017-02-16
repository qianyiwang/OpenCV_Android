#include "com_example_qianyiwang_opencv_android_NativeClass.h"

JNIEXPORT void JNICALL Java_com_example_qianyiwang_opencv_1android_NativeClass_faceDetection
  (JNIEnv *, jclass, jlong addrRgba){
    Mat& frame = *(Mat*)addrRgba;

    imgMatch(frame);
  }

void imgMatch(Mat& frame){
    Mat templ, result;
    int match_method = CV_TM_SQDIFF;
    templ = imread("/sdcard/templ.JPG", CV_LOAD_IMAGE_COLOR);
    if(!templ.data){
        return;
    }
    cvtColor(templ, templ, CV_8U); // make the templ and input frame the same type
    int result_cols =  frame.cols - templ.cols + 1;
    int result_rows = frame.rows - templ.rows + 1;
    result.create( result_rows, result_cols, CV_32FC1 );
    matchTemplate( frame, templ, result, match_method );
    normalize( result, result, 0, 1, NORM_MINMAX, -1, Mat() );
//     Localizing the best match with minMaxLoc
    double minVal; double maxVal; Point minLoc; Point maxLoc;
    Point matchLoc;

    minMaxLoc( result, &minVal, &maxVal, &minLoc, &maxLoc, Mat() );
    if( match_method  == CV_TM_SQDIFF || match_method == CV_TM_SQDIFF_NORMED )
    { matchLoc = minLoc; }
    else
    { matchLoc = maxLoc; }
    rectangle( frame, matchLoc, Point( matchLoc.x + templ.cols , matchLoc.y + templ.rows ), Scalar::all(0), 2, 8, 0 );

}

