<h2><a href="https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&sortBy=submissions">Minimum number of jumps</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO" speechify-initial-font-family="Nunito" speechify-initial-font-size="16px"><p speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">Given an array of <strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">N</strong> integers <strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">arr[]</strong> where each element represents the <strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">maximum</strong> length of the jump that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y&nbsp;≤ x.<br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
Find&nbsp;the minimum number of jumps to reach the end of the array (starting from the first element).&nbsp;If an element is <strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">0</strong>, then you cannot move through that element.</span><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
<br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Note: </strong>Return -1 if you can't reach the end of the array.</span></p>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Example 1:</strong></span><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"> </span></p>

<pre speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Input:</strong></span>
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">N = 11 </span>
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} </span>
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Output:</strong> 3 </span>
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Explanation:</strong> </span>
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">First jump from 1st element to 2nd 
element with value 3. Now, from here 
we jump to 5th element with value 9, 
and from here we will jump to the last. </span></pre>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">Example 2:</span></strong></p>

<pre speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px"><span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">Input :</span></strong>
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">N = 6
arr = {1, 4, 3, 2, 6, 7}</span>
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Output:</strong> 2 
<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Explanation: 
</strong>First we jump from the 1st to 2nd element 
and then jump to the last element.</span>
</pre>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Your task:</strong><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
You don't need to read input or print anything. Your task is to complete function <strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">minJumps()</strong> which takes the array <strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">arr</strong> and it's size <strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">N</strong> as input parameters and returns the minimum number of jumps. If not possible return -1.</span></p>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Expected Time Complexity:&nbsp;</strong>O(N)<br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
<strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Expected Space Complexity:&nbsp;</strong>O(1)</span></p>

<p speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
<span style="font-size:18px" speechify-initial-font-family="Nunito" speechify-initial-font-size="15px"><strong speechify-initial-font-family="&quot;Source Sans 3&quot;" speechify-initial-font-size="15px">Constraints:</strong><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
1 ≤ N ≤ 10<sup speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">7</sup><br speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">
0 ≤ arr<sub speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">i</sub> ≤ 10<sup speechify-initial-font-family="Nunito" speechify-initial-font-size="15px">7</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Moonfrog Labs</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Housing.com</code>&nbsp;<code>Walmart</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Greedy</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;