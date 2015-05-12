/*************************************************************************/
/*  IntervalTree provides an efficient mechanism for metadata retrieval  */
/*	associated with intervals.For Complexities and Usage Examples,please */
/*  refer the attached README file 										 */
/*	Author:Basavaraj Nagar												 */
/*	License: GPL											 			 */
/*																		 */
/*************************************************************************/


#ifndef __INTERVAL_TREE_H
#define __INTERVAL_TREE_H
#include <stdlib.h>
#include <iostream>
#include <iterator>
#include <memory>
#include "IntervalTypeTraits.h"
#include "IntervalAlgoPolicies.h"
#include <exception>

template<typename DataType, typename CompPolicy = FundamentalCompPolicy<DataType> >
class IntervalTree
{
private:
typedef  DataType __Interval; 
typedef typename returnTraits<__Interval>::RT __ReturnType;
typedef std::allocator<__Interval> _allocator;
typedef typename _allocator::pointer _tracker;
_allocator _IntervalTreeAllocator;
_tracker root;
template<typename  iterator_category = std::input_iterator_tag,typename value_type = int>
class IntervalIterator:public std::iterator<iterator_category,value_type>
{
__ReturnType operator*();
void operator++();
void operator--();
private:
//need to add type information here
 
};

typedef IntervalIterator<std::input_iterator_tag,__Interval> _intervalIterator;
public:
//construction & destruction mechanisms
IntervalTree(){};
~IntervalTree(){};

//modification functions
void insert(__Interval interval)
{
	if(!root)
	{
		root = _IntervalTreeAllocator.allocate(1);
		_IntervalTreeAllocator.construct(root,interval);
		return;
	}
	
	_tracker tracker = root;
	
	if()
	
}
void erase(__Interval interval);

//lookup functions
__ReturnType find(__Interval interval);

//acess functions
_intervalIterator begin();
_intervalIterator end();

//successor node (supermum)
_intervalIterator upper_bound();

//prdecessor node (infimum)
_intervalIterator lower_bound();

};



#endif