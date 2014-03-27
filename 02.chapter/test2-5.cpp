#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	unsigned int length = 10;

	// ZhengFangxing
	// Has Already been exported r rows;
	for(int r=0; r<length; r++)
	{
		// Has Already been exported c cols;	
		for(int c=0; c<length; c++)
		{
			if( r == 0 || r == length-1 || c == 0 || c == length -1)
			{
				cout << '*';
			}else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}

	unsigned int mostLength = length + 4;
	// ChangFangxing
	// Has Already been exported r rows
	for(int r=0; r<length ;r++)
	{
		// Has Alreadly been exported c cols
		for(int c=0; c<mostLength; c++)
		{
			if( r == 0 || r == length-1 || c == 0 || c == mostLength-1)
			{
				cout << '*';
			}else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}

	// SanJiaoXing
	// Has Already been exported r rows
	for(int r=0; r<length; r++)
	{
		// Has Already been exported c cols
		for(int c=0; c<length; c++)
		{
			if( c == 0 || r == length-1 || (length-r) == -c+length)
			{
				cout << '*';
			}else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
	// HeCheng
	const unsigned int heLength = length*2 + mostLength + 2;
	const unsigned int ChangFangOffset = length +1;
	const unsigned int SanJiaoXingOffset = mostLength + length + 2;
	for(int r=0; r<length; r++)
	{
		for(int c=0; c<heLength; c++)
		{
			if(((c >=0 && c < length) && 
			(r == 0 || r == length -1 || c == 0 || c == length -1))
			|| ((c >= ChangFangOffset && c < ChangFangOffset + mostLength) &&
			(r == 0 || r == length -1 || c == 0+ChangFangOffset || c == mostLength+ChangFangOffset-1)) || 
			((c >= SanJiaoXingOffset) && 
			(c == 0+SanJiaoXingOffset || r == length-1 || (length-r) == -c + length + SanJiaoXingOffset))
			)
			{
				cout << '*';
			}else
			{
				cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}
