//#include<iostream>
//#include<set>
////https://vncoder.vn/bai-hoc/set-khai-niem-270
//// set la tap hop khong turng lap, cac phan tu nay la  key , duoc bo tri theo cau truc bst
////Các hàm của set :
////size : trả về kích thước hiện tại của set.
////empty : true nếu set rỗng, và ngược lại.
////insert : Chèn phần tử vào set. 
////erase : xóa phần tử, có 2 kiểu xóa: xóa theo iterator, hoặc là xóa theo khóa
////clear : xóa tất cả set. 
////swap : đổi 2 set cho nhau.
////Truy cập phần tử :
////find : trả về itarator trỏ đến phần tử cần tìm kiếm. Nếu không tìm thấy itarator trỏ về “end” của set. 
////lower_bound : trả về iterator đến vị trí phần tử bé nhất mà không bé hơn (lớn hơn hoặc bằng) 
////			  khóa (dĩ nhiên là theo phép so sánh), nếu không tìm thấy trả về vị trí “end” của set. 
////upper_bound: trả về iterator đến vị trí phần tử bé nhất mà lớn hơn khóa, nếu không tìm thấy trả về 
////			 vị trí “end” của set.
////count : trả về số lần xuất hiện của khóa trong container. Nhưng trong set, các phần tử chỉ xuất 
////		hiện một lần, nên hàm này có ý nghĩa là sẽ return 1 nếu khóa có trong container, và 0 nếu không có.
//
//
//using namespace std;
//#define MAX_NODE 300000
//
//struct Node{
//	int id;
//	int xstart;
//	int xend;
//	int y;
//	bool isDelete;
//};
//
//Node poolNode[MAX_NODE];
//int countNOde;
//
//
//struct cmp{
//	bool operator()(int a, int  b){
//		return  a<b;
//	}
//};
//
//
//struct cmp2{
//	bool operator()(int a, int  b){
//		return (poolNode[a].y < poolNode[b].y);
//	}
//};
//
//int main(){
//
//	set<int,cmp> mset;
//
//	mset.insert(3);
//	mset.insert(13);
//	mset.insert(7);
//	mset.insert(9);
//	mset.insert(2);
//	mset.insert(16);
//	mset.insert(1);
//
//	//mset.erase(9);
//
//	mset.count(9);
//
//
//
//	return 0;
//}
//
//
