#ifndef _DLL_H_
#define _DLL_H_

template <typename T>
class DList;

template <typename T>
class DNode
{
	private:
		T element;
		DNode<T>* prev;
		DNode<T>* next;
		
	friend class DList<T>;
};


template <typename T>
class DList
{
	private:
		DNode<T>* header;
		DNode<T>* trailer;
		void (*print_dll)(const T& t);
	public:
		DList();
		~DList();
		bool empty() const;
		const T& front();
		const T& back();
		void addFront(const T& e);
		void addBack(const T& e);
		void removeFront();
		void removeBack();
		void register_print_function(void (*print_dll)(const T& t));
		void print_list_items() const;
	protected:
		void add(DNode<T>* node, const T& t);
		void remove(DNode<T>* node);
};




#endif
