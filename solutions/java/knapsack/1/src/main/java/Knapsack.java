import java.util.List;

class Knapsack {

    int maximumValue(int maximumWeight, List<Item> items) {
        // Base case
        if (maximumWeight == 0 || items.size() == 0) return 0;

        int[] dp = new int[maximumWeight + 1];        
        for (int i = 1; i <= items.size(); i++) {

            for (int j = maximumWeight; j >= items.size() - 1; j--) {
                int index_pd = j - items.get(i - 1).weight;
                if (index_pd  < 0) continue;

                dp[j] = Math.max(dp[j], dp[index_pd] + items.get(i - 1).value);
            }
        }
        return dp[maximumWeight];
    }
}