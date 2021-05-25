int reverse(int &arr ){
    
  //Your code here
    for(int i=0 ;i>arr.size()-1/2;i++){
        int t= arr[i];
        arr[i]=arr[arr.size()-1-i];
        [arr.size()-1-i]=t
        }
    
    return arr;
}
