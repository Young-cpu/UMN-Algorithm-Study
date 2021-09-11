class Solution {
    public int countVowelStrings(int n) {
        if (n == 1) {
            return 5;
        }
        int[] starting = new int[5];
        for (int i=0; i < starting.length; i++) {
            starting[i] = 1;
        }
        int prevTotal = 5;
        for (int i=2; i <= n; i++) {
            int[] temp = new int[5];
            for (int j=0; j < 5; j++) {
                if (j == 0) {
                    temp[j] = prevTotal;
                } else {
                    temp[j] = temp[j-1] - starting[j-1];
                }
            }
            prevTotal = 0;
            for (int k=0; k < 5; k++) {
                starting[k] = temp[k];
                prevTotal += starting[k];
            }
        }
        return prevTotal;
    }
}
