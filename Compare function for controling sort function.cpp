bool comp(pair<int,int>x,pair<int,int>y){
    if(x.first==y.first){
        return x.second>y.second;
    }
    return x.first<y.first;
}
sort(ans.begin(),ans.end(),comp);
//I want to say what is the outcome of the compare function.
//here ans is a array of pair.generally if we sort this array. how it will sort?
//if first element are equal it then compare the 2nd element and small element will come first.
//But here for comp function if the first element are equal then for 2nd element greater element come first.
