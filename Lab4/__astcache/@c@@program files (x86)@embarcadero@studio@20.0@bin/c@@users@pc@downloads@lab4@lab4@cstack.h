//---------------------------------------------------------------------------

#ifndef CStackH
#define CStackH

template <typename T>
class Stack
{
	struct Node
	{
		T val;
		Node* next;
	};
	Node* Vertex = nullptr;

public:

	void push(const T & x)
	{
		Node* tmp = new Node;
		tmp->val = x;
		tmp->next = Vertex;
		Vertex = tmp;
	}

	T& back()
	{
		if (empty()) throw;
		return Vertex->val;
	}

	void pop()
	{
		if (empty()) throw;
		Node* nxt = Vertex->next;
		delete Vertex;
		Vertex = nxt;
	}

	void reverse()
	{
		Node* last = nullptr;
		Node* it = Vertex;
		while (it)
		{
			Node* next = it->next;
			it->next = last;
			last = it;
			it = next;
		}
		Vertex = last;
	}

	bool empty()
	{
        return !Vertex;
	}

	void clear()
	{
		while(!empty())
		{
			pop();
		}
	}

	~Stack()
	{
		clear();
	}
};

//---------------------------------------------------------------------------
#endif
