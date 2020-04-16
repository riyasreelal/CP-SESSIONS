public class solution {

	public static int maxProfit(final int stockprices[])
	{
		int minp = Integer.MAX_VALUE;
        int maxp = 0;
        for (int i = 0; i < stockprices.length; i++) {
            if (stockprices[i] < minp)
                minp = stockprices[i];
            else if (stockprices[i] - minp > maxp)
                maxp = stockprices[i] - minp;
        }
        return maxp;
	}
}

