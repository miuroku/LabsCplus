//---------------------------------------------------------------------------

#ifndef MyHashTableH
#define MyHashTableH
//---------------------------------------------------------------------------
#include "Stack.h"

class HashTable
{
protected:
	const int size = 10;
	Stack<AnsiString> table[10];

	static int hkey(AnsiString);
public:
	HashTable();
	~HashTable(){}
	bool Has(AnsiString);
	void Add(AnsiString);
	void Delete(AnsiString);
	void Print(TMemo* Memo);
};


#endif
