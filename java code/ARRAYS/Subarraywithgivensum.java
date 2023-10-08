// Question

Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Output: Sum found between indexes 2 and 4
Explanation: Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33

Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Output: Sum found between indexes 1 and 4
Explanation: Sum of elements between indices 1 and 4 is 4 + 0 + 0 + 3 = 7

Input: arr[] = {1, 4}, sum = 0
Output: No subarray found
Explanation: There is no subarray with 0 sum

  // Solution

  public class SubarraySum {
	/* Returns true if the there is a
subarray of arr[] with a sum equal to
	'sum' otherwise returns false.
Also, prints the result */
	void subArraySum(int arr[], int n, int sum)
	{
		// Pick a starting point
		for (int i = 0; i < n; i++) {
			int currentSum = arr[i];

			if (currentSum == sum) {
				System.out.println("Sum found at indexe "
								+ i);
				return;
			}
			else {
				// Try all subarrays starting with 'i'
				for (int j = i + 1; j < n; j++) {
					currentSum += arr[j];

					if (currentSum == sum) {
						System.out.println(
							"Sum found between indexes " + i
							+ " and " + j);
						return;
					}
				}
			}
		}
		System.out.println("No subarray found");
		return;
	}

	public static void main(String[] args)
	{
		SubarraySum arraysum = new SubarraySum();
		int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
		int n = arr.length;
		int sum = 23;
		arraysum.subArraySum(arr, n, sum);
	}
}
