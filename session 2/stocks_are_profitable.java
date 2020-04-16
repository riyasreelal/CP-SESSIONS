public class solution {

	public static int maxProfit(final int stockprices[])
	{
		int minp = Integer.MAX_VALUE; //the maximum value of stock prices is assigned to minmium price variable
        int maxp = 0;  //maximum price variable is set to the lowest amount
        for (int i = 0; i < stockprices.length; i++) {
            if (stockprices[i] < minp)     //finds the lowest stock price
                minp = stockprices[i];    
            else if (stockprices[i] - minp > maxp)  //finds the highest stock price which apears after the lowest price
                maxp = stockprices[i] - minp;
        }
        return maxp; //return the maximum stock value at which it can be sold
	}
}

