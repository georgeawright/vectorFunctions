#include"vectorFunctions.h"

using namespace std;

vector<double> add(vector<double> &vec1, vector<double> &vec2) {
  assert(vec1.size() == vec2.size());
  vector<double> result;
  transform(vec1.begin(), vec1.end(), vec2.begin(),
		   back_inserter(result), plus<double>());
  return result;
}

vector<double> subtract(vector<double> &vec1, vector<double> &vec2) {
  assert(vec1.size() == vec2.size());
  vector<double> result;
  transform(vec1.begin(), vec1.end(), vec2.begin(),
		   back_inserter(result), minus<double>());
  return result;
}

double dot(vector<double> &vec1, vector<double> &vec2) {
  assert(vec1.size() == vec2.size());
  vector<double> products = multiplyEach(vec1, vec2);
  return sum(products);
}

vector<double> multiplyEach(vector<double> &vec1, vector<double> &vec2) {
  assert(vec1.size() == vec2.size());
  vector<double> result;
  transform(vec1.begin(), vec1.end(), vec2.begin(),
	    back_inserter(result), multiplies<double>());
  return result;
}

vector<double> multiply(vector<double> &vec, double scalar) {
  vector<double> result;
  for (unsigned int i = 0; i < vec.size(); i++) {
    result.push_back(vec[i] * scalar);
  }
  return result;
}

vector<double> divideEach(vector<double> &vec1, vector<double> &vec2) {
  assert(vec1.size() == vec2.size());
  vector<double> result;
  transform(vec1.begin(), vec1.end(), vec2.begin(),
	    back_inserter(result), divides<double>());
  return result;
}

vector<double> squareEach(vector<double> &vec) {
  return multiplyEach(vec, vec);
}

double sum(vector<double> &vec) {
  return accumulate(vec.begin(), vec.end(), 0.0);
}

double distance(vector<double> &vec1, vector<double> &vec2) {
  assert(vec1.size() == vec2.size());
  vector<double> added = add(vec1, vec2);
  vector<double> squared = squareEach(added);
  double total = sum(squared);
  return sqrt(total);
}

double magnitude(vector<double> &vec) {
  vector<double> squared = squareEach(vec);
  double total = sum(squared);
  return sqrt(total);
}
