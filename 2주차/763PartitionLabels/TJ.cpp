class Solution {

    public List<Integer> partitionLabels(String s) {
        List<Integer> intList = new ArrayList<Integer>();
        Map<Character, Integer> dictionary = new HashMap<>();

        // put char and its last index
        for(int i=0; i<s.length(); i++) {
            dictionary.put(s.charAt(i), i);
        }

        // two pointers to track if there is any index greater than left
        int left = 0;
        int right = 0;

        for (int i=0; i<s.length(); i++) {
            left = dictionary.get(s.charAt(i));
            right = i + 1;
            while (right <= left) {
                if (dictionary.get(s.charAt(right)) > left) {
                    left = dictionary.get(s.charAt(right));
                }
                right++;
            }
            intList.add(left-i+1);
            i = left;
        }

        return intList;
    }
}
