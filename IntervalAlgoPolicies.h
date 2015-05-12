

template<typename T>
struct FundamentalCompPolicy
{
typedef  T datatype;
bool operator ()(const datatype &lhs,const datatype & rhs )
{
	return false;
}
};
