template<typename T>
class returnTraits
{
public:
//qualified dependent paramater hence the need for typename keyword
typedef  T RT;

};


//below specializations are available currently
template<>
class returnTraits<char>
{
public:
typedef  int RT; 

};

template<>
class returnTraits<float>
{
public:
typedef  float RT;

};

template<>
class returnTraits<int>
{
public:
typedef int RT;

};



