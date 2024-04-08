#include <iostream>
#include <iomanip> 
#include <cstring>
using namespace std;
template <class T>
class CArray3D
{
// 在此处补充你的代码
	public:
	class CArray2D{
		T** ptr;
		int width, height;
		public:
		CArray2D(){ptr = nullptr;}
		CArray2D(int width, int height): width(width), height(height){
			ptr = new T*[height];
			for(int i = 0; i < height; ++i){
				ptr[i] = new T[width];
			}
		}
		CArray2D(const CArray2D& src){
			if(src.ptr == nullptr)
				ptr = nullptr;
			else{
				width = src.width;
				height = src.height;
				ptr = new T*[height];
				for(int i = 0; i < height; ++i){
					ptr[i] = new T[width];
				}
				for(int i = 0; i < height; ++i)
					for(int j = 0; j < width; ++j)
						ptr[i][j] = src.ptr[i][j];
			}
		}
		CArray2D& operator=(const CArray2D& src){
			if(src.ptr == nullptr)
				ptr = nullptr;
			else{
				width = src.width;
				height = src.height;
				ptr = new T*[height];
				for(int i = 0; i < height; ++i){
					ptr[i] = new T[width];
				}
				for(int i = 0; i < height; ++i)
					for(int j = 0; j < width; ++j)
						ptr[i][j] = src.ptr[i][j];
			}
			return *this;
		}
		T* operator[](int i){
			return *(ptr + i);
		}
		operator void*(){
			return ptr;
		}
		~CArray2D(){
			if(ptr != nullptr){
				for(int i = 0; i < height; ++i){
					delete [] ptr[i];
				}
				delete [] ptr;
			}
		}
	};
	CArray2D* ptr;
	int layer, height, width;
	CArray3D(int layer, int height, int width):
	layer(layer), height(height), width(width)
	{
		ptr = new CArray2D[layer];
		for(int i = 0; i < layer; ++i){
			ptr[i] = CArray2D(height, width);
		}
	}
	CArray3D(const CArray3D& src){
		if(src.ptr == nullptr){
			ptr = nullptr;
		}
		else{
			layer = src.layer;
			height = src.height;
			width = src.width;
			ptr = new CArray2D[layer];
			for(int i = 0; i < layer; ++i){
				ptr[i] = src.ptr[i];
			}
		}
	}
	CArray2D& operator[](int i){
		return *(ptr + i);
	}
	~CArray3D(){
		if(ptr != nullptr){
			delete [] ptr;
		}
	}
};

CArray3D<int> a(3,4,5);
CArray3D<double> b(3,2,2);
void PrintA()
{
	for(int i = 0;i < 3; ++i) {
		cout << "layer " << i << ":" << endl;
		for(int j = 0; j < 4; ++j) {
			for(int k = 0; k < 5; ++k) 
				cout << a[i][j][k] << "," ;
			cout << endl;
		}
	}
}
void PrintB()
{
	for(int i = 0;i < 3; ++i) {
		cout << "layer " << i << ":" << endl;
		for(int j = 0; j < 2; ++j) {
			for(int k = 0; k < 2; ++k) 
				cout << b[i][j][k] << "," ;
			cout << endl;
		}
	}
}

int main()
{
	int No = 0;
	for( int i = 0; i < 3; ++ i ) {
		//a[i];
		for( int j = 0; j < 4; ++j ) {
			//a[j][i];
			for( int k = 0; k < 5; ++k )
				{a[i][j][k] = No ++;
				cout << i << " " << j << " " << k << " " << No << endl;
				cout << a[i][j][k] << endl;}
			//a[j][i][i];	
		}
	}
	PrintA();
	memset(a[1],-1 ,20*sizeof(int));	
	memset(a[1],-1 ,20*sizeof(int));
	PrintA(); 
	memset(a[1][1],0 ,5*sizeof(int));	
	PrintA();

	for( int i = 0; i < 3; ++ i )
		for( int j = 0; j < 2; ++j )
			for( int k = 0; k < 2; ++k )
				b[i][j][k] = 10.0/(i+j+k+1);
	PrintB();
	int n = a[0][1][2];
	double f = b[0][1][1];
	cout << "****" << endl;
	cout << n << "," << f << endl;
		
	return 0;
}