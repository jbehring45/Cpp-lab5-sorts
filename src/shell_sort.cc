void shell_sort(long data[], long size) 
{
    
    long gap = 1; // gap start at 1
    // initialize knuths gap: 1, 4, 13, 40, 121
    while (gap < size / 3)
    {
        gap = 3 * gap + 1;
    }

    // shell sort, with knuth gap
    while (gap > 0) 
    {
        for (long i = gap; i < size; ++i) 
        {
            long j = i;

            // compare and swap elements, gap distance apart
            while (j >= gap && data[j - gap] > data[j]) 
            {
                swap(data[j], data[j - gap]);  // swap elements
                j -= gap;
            }
        }

        // shrink gap using opposite of knuths
        gap = (gap - 1) / 3;
    }
}
