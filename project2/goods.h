#ifndef GOODS_H_
#define GOODS_H_

namespace myOwn{
 
// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods{
 public:
 
  Goods();
  Goods(int index, int price);
  void SetGoodsInfo(int index, int price);
  int GetIndex();
  int GetPrice();

 private:
  int goods_index_;
  int goods_price_;
};
 
}


#endif  // GOODS_H_
