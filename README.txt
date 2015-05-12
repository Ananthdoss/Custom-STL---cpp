This Interval Tree has been built keeping the below requirements in mind.
1) provide a clean separation between data and algorithm.
2) Provide facility for different return types associated with input data.
3) The comparison policy for two intervals is given by the user.
4) It should support fundamental data types as well as userdefined datatype


Things in Pipeline:
1) Right now, the way this works is for Interval and Interval MetaData to be coupled through composition.
   It would be good and desirable to de-associate these two through a configurable policy.
2) Provide Support for Iterator Interface.... Include Iterator traits and provide support for iterator and const_iterator.
3) Add ExceptionHandling.
4) Provide a policy for being used in a multiThreaded Environment.

Good Thing!!!!
This works with old compilers too..no need to be c++11 compliant or boost support.