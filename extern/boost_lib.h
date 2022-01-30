#ifndef __BOOST_LIB_H__
#define __BOOST_LIB_H__

#include "boost/lexical_cast.hpp"
#include "boost/algorithm/string.hpp"

/**
 * @brief Exceptions for ARM targets regarding the handling of the exceptions
 * 
 * See: https://stackoverflow.com/questions/50133783/c-cmake-build-error-undefined-reference-to-boostthrow-exceptionstdexcep
 */

#define BOOST_NO_EXCEPTIONS
#include <boost/throw_exception.hpp>
void boost::throw_exception(std::exception const& e) {
    //do nothing
    while(1);
}



#endif // __BOOST_LIB_H__