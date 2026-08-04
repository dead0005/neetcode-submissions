class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
     const s1=   s.split('').sort().join('');

     const t1=   t.split('').sort().join('');

        if(s.length!==t.length)return false;
        for(let i=0;i<s.length;i++){
            if(s1[i]!==t1[i])return false;
        }
        return  true;
    }
}
