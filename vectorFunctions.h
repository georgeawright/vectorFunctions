#include<iostream>
#include<cmath>
#include<vector>
#include<cassert>
#include<algorithm>
#include<functional>
#include<numeric>

using namespace std;

/* add two vectors of equal length */
vector<double> add(vector<double> &vec1, vector<double> &vec2);

/* subtract from vec1 a vector of equal length, vec2 */
vector<double> sutract(vector<double> &vec1, vector<double> &vec2);

/* calculate the dot product of two vectors */
double dot(vector<double> &vec1, vector<double> &vec2);

/* multiply vector by scalar */
vector<double> multiply(vector<double> &vec, double scalar);

/* multiply each corresponding vector element */
vector<double> multiplyEach(vector<double> &vec1, vector<double> &vec2);

/* divide each corresponding vector element */
vector<double> divideEach(vector<double> &vec1, vector<double> &vec2);

/* square each vector element */
vector<double> squareEach(vector<double> &vec);

/* the sum of all elements in a vector */
double sum(vector<double> &vec);

/* the distance between two vectors of equal length */
double distance(vector<double> &vec1, vector<double> &vec2);
