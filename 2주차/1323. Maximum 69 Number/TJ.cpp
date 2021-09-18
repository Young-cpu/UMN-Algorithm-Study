class Solution {
    public int maximum69Number (int num) {
        String s = Integer.toString(num);
        int[] intAry = new int[s.length()];
        int result = 0;

        for(int i=0; i<s.length(); i++) {
            intAry[i] = s.charAt(i) - '0';
        }

        for(int i=0; i<s.length(); i++) {
            if(intAry[i] == 6) {
                intAry[i] = 9; 
                break;
            }
        }


        StringBuilder strNum = new StringBuilder();
        for(int numm : intAry) {
            strNum.append(numm);
        }
        result = Integer.parseInt(strNum.toString());
        return result;

    }
}
