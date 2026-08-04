class Solution {
    /**
     * @param {string[]} strs
     * @return {string[][]}
     */
    groupAnagrams(strs) {
        const mp=new Map;
        const ans=[];
        for(let i =0;i<strs.length;i++){
            let a=strs[i];
            const aa=a.split('').sort().join('');
            if(!mp.has(aa)){
                mp.set(aa,[]);
            }
            mp.get(aa).push(strs[i]);
        }
        for(const value of mp.values()){
            ans.push(value);
        }
        return ans;
    }
}
