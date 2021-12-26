#include <iostream>
#include <fstream>
using namespace std;
class basik {
private:
	virtual void resize() = 0;
public:
	virtual int pop()=0;
	virtual void push(int)=0;
};
class LIFO :public basik {
private:
	int* mass;
	int N;
	int count;
	const int QOTA = 5;
	void resize() override
	{
		int* tmp = new int[N + QOTA];
		for (int i = 0; i < N; i++)
		{
			tmp[i] = mass[i];
		}
		delete[]mass;
		mass = tmp;
		tmp = nullptr;
	}
public:
	LIFO()
	{
		N = QOTA;
		mass = new int[N];
		count = 0;

	}
	void push(int number) override
	{
		if (N == count - 1)
		{
			resize();
		}
		mass[count] = number;
		count++;

	}
	int pop() override
	{
		int tmp = 777;
		if (count != 0)
		{
			tmp = mass[0];
			for (int i = 0; i < count; i++)
			{
				mass[i] = mass[i + 1];
			}
			count--;
		}
		return tmp;
	}
	friend ostream& operator<< (ostream& fout, LIFO& tmp)
	{
		for (int i = 0; i < tmp.count;i++)
		{
			fout << tmp.mass[i] << " ";
		}
		return fout;
	}
	~LIFO() {
		delete[]mass;
		N = 0;
	}

};
class FIFO:public basik  {
private:
	int* mass;
	int count;
	int N;
	const int QOTA = 5;
	void resize() override
	{
		int* tmp = new int[N + QOTA];
		for (int i = 0; i < N; i++)
		{
			tmp[i] = mass[i];
		}
		delete[]mass;
		mass = tmp;
		tmp = nullptr;
	}
public:
	FIFO()
	{
		N = QOTA;
		mass = new int[N];
		count = 0;

	}
	void push(int number) override
	{
		if (N == count - 1)
		{
			resize();
		}
		mass[count] = number;
		count++;

	}
	int pop() override
	{
		int tmp = 777;
		if (count != 0)
		{
			tmp = mass[count - 1];
			mass[count - 1] = 0;
			count--;
		}
		return tmp;
	}
	friend ostream& operator<<(ostream& fout, FIFO& tmp)
	{
		for(int i = 0 ; i<tmp.count;i++)
		{
			fout << tmp.mass[i] << " ";
		}
		return fout;
	}
	~FIFO(){
		delete[]mass;
		N = 0;
	}
		
};



int main()
{
	LIFO a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	cout << a<<endl;
	FIFO b;
	b.push(1);
	b.push(2);
	b.push(3);
	b.push(4);
	b.push(5);
	b.pop();
	cout << b << endl;

	
};