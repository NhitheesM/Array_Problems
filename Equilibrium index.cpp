int findEquilibriumIndex(const std::vector<int> &arr) {
    int n = arr.size();
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of all elements in the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Iterate through each index and check for equilibrium
    for (int i = 0; i < n; i++) {
        // Subtract the current element from the total sum
        totalSum -= arr[i];

        // If the left sum is equal to the total sum, we found an equilibrium index
        if (leftSum == totalSum) {
            return i;
        }

        // Add the current element to the left sum for the next iteration
        leftSum += arr[i];
    }

    // No equilibrium index found
    return -1;
}
