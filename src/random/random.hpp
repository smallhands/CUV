#ifndef __RANDOM_HPP__
#define __RANDOM_HPP__

#include<dev_vector.hpp>

namespace cuv{

	template<class T> void fill_rnd_uniform(T&);  ///< fill a matrix/vector with random numbers (uniformly distributed btw. 0,1)
	template<class T> void rnd_binarize(T&);      ///< binarize a vector by 1 or 0 with probability given by current values
	template<class T> void fill_rnd_normal(T&);   ///< fill a matrix/vector with random numbers (normally distributed, mean 0, std 1)
	void initialize_mersenne_twister_seeds();     ///< call this _once_ to initialize the mersenne twister seeds

} // cuv

#endif