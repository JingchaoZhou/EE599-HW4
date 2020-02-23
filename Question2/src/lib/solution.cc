#include "solution.h"

MaxHeap::MaxHeap() {
  vector<int> data_ = {};
 }

int MaxHeap::GetParentIndex(int i){
  if (i == 0){
    return -1;
  }
  return (i - 1)/2;
}

int MaxHeap::GetLeftIndex(int i){
  if ((2 * i) + 1 >= data_.size()) {
    return -1;
  }
  return (2 * i) + 1;
}

int MaxHeap::GetRightIndex(int i){
  if ((2 * i) + 2 >= data_.size()) {
    return -1;
  }
  return (2 * i) + 2;
}

int MaxHeap::GetLargestChildIndex(int i){
  if (GetLeft(i) > GetRight(i)){
    return GetLeftIndex(i);
  }
  
  else if (GetLeft(i) < GetRight(i)){
    return GetRightIndex(i);
  }

  else{
    return -1;
  }

}

int MaxHeap::GetLeft(int i){
  if ((2 * i) + 1 >= data_.size()) {
    return -1;
  }
  int index = (2 * i) + 1;
  return data_[index];
}

int MaxHeap::GetRight(int i){
  if ((2 * i) + 2 >= data_.size()) {
    return -1;
  }
  int index = (2 * i) + 2;
  return data_[index];
}

int MaxHeap::GetParent(int i){
  if (i == 0){
    return -1;
  }
  int index = (i - 1)/2;
  return data_[index];
}

int MaxHeap::top(){
  if (data_.size() == 0) {
    return INT_MAX;
  } else {
    return data_[0];
  }
}

void MaxHeap::push(int v){
  data_.push_back(v);
  TrickleUp(data_.size()-1);
}

void MaxHeap::pop(){
 int temp = data_.back();
 data_[0] = temp;
 while (*max_element(data_.begin(),data_.end()) != data_[0]){
   TrickleDown(0);
 }

}

void MaxHeap::TrickleUp(int i){
  while ( i != 0 && GetParent(i) < data_[i]){
    swap(data_[i],data_[GetParentIndex(i)]);
    i = GetParentIndex(i);
  }
}

void MaxHeap::TrickleDown(int i){
  while (((GetLeft(i) > data_[i]) || (GetRight(i) > data_[i]))){
    if (GetLeft(i) > data_[i]){
      swap(data_[i],data_[GetLeftIndex(i)]);
      i = GetLeftIndex(i);
    }
    if (GetRight(i) > data_[i]){
      swap(data_[i],data_[GetRightIndex(i)]);
      i = GetRightIndex(i);
    }
    
  }
}