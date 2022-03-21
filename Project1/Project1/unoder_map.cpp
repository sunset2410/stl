//https://laptrinhcanban.com/cpp/lap-trinh-cpp-co-ban/unordered-map-trong-cpp/unordered-map-trong-cpp-la-gi/
//
//
//#include<iostream>
//#include<unordered_map>
//
//using namespace std;
//
//int main()
//{
//	unordered_map<int,int> map;
//
//	map[10000] =1;
//	map[90000] =2;
//
//	
//
//	int index = map[555];
//
//	index = map[55577];
//
//	return 0;
//};
//
//
//init(30);
//allocate(13);
//release(5);



//multimap vs map, unordered_map trong c++
//Trong C++ tồn tại 3 loại map gồm map, unordered_map và multimap. Ba loại map này đều có phần tử được tạo
//thành bởi một cặp khóa và giá trị (key & value), tuy nhiên giữa chúng có những điểm hoàn toàn khác nhau như sau:
//
//Phần tử trong map và multimap được sắp xếp theo thứ tự, còn unordered_map thì không có thứ tự.
//Phần tử trong map và multimap được lưu theo thứ tự của khóa, còn trong unordered_map thì 
//theo thứ tự giá trị hash của khóa.
//map và multimap tuân theo cấu trúc cây nhị phân Red–black tree, còn unordered_map thì 
//heo giá trị trong bảng hash.
//Key trong map và unordered_map là duy nhất, còn trong multimap thì có thể trùng nhau.
//Về tốc độ xử lý thì unordered_map có tốc độ truy cập phần tử ngẫu nhiên nhanh hơn map
//và multimap, tuy nhiên tốc độ xử lý vòng lặp lại kém hơn so với 2 anh em của nó.