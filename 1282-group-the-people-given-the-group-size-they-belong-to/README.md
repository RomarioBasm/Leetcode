<h2><a href="https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/">1282. Group the People Given the Group Size They Belong To</a></h2><h3>Medium</h3><hr><div><p>There are <code>n</code> people&nbsp;that are split into some unknown number of groups. Each person is labeled with a&nbsp;<strong>unique ID</strong>&nbsp;from&nbsp;<code>0</code>&nbsp;to&nbsp;<code>n - 1</code>.</p>

<p>You are given an integer array&nbsp;<code>groupSizes</code>, where <code>groupSizes[i]</code>&nbsp;is the size of the group that person&nbsp;<code>i</code>&nbsp;is in. For example, if&nbsp;<code>groupSizes[1] = 3</code>, then&nbsp;person&nbsp;<code>1</code>&nbsp;must be in a&nbsp;group of size&nbsp;<code>3</code>.</p>

<p>Return&nbsp;<em>a list of groups&nbsp;such that&nbsp;each person&nbsp;<code>i</code>&nbsp;is in a group of size&nbsp;<code>groupSizes[i]</code></em>.</p>

<p>Each person should&nbsp;appear in&nbsp;<strong>exactly one group</strong>,&nbsp;and every person must be in a group. If there are&nbsp;multiple answers, <strong>return any of them</strong>. It is <strong>guaranteed</strong> that there will be <strong>at least one</strong> valid solution for the given input.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> groupSizes = [<gistnote class="gistnote-highlight" highlightid="d1ecd2ad-6e8e-4f9f-8170-85e88cc8ed0b" colornum="2" style="background-color: rgb(255, 222, 112);" id="d1ecd2ad-6e8e-4f9f-8170-85e88cc8ed0b">3,3,3</gistnote>,3,3,<gistnote class="gistnote-highlight" highlightid="8c468ccd-255a-4bc1-bc3b-74d90ff5cf42" colornum="4" style="background-color: rgb(209, 255, 97);" id="8c468ccd-255a-4bc1-bc3b-74d90ff5cf42">1</gistnote>,3]
<strong>Output:</strong> [[5],[0,1,2],[3,4,6]]
<b>Explanation:</b> 
<gistnote class="gistnote-highlight" highlightid="502ca531-ccb2-41d6-af92-c11dadc7d446" colornum="3" style="background-color: rgb(255, 251, 120);" id="502ca531-ccb2-41d6-af92-c11dadc7d446">The first group is [5].</gistnote> The size is 1, and groupSizes[5] = 1.
<gistnote class="gistnote-highlight" highlightid="a359bd41-ccc5-4624-83b4-5c80ee9b3c06" colornum="3" style="background-color: rgb(255, 251, 120);" id="a359bd41-ccc5-4624-83b4-5c80ee9b3c06">The second group is [0,1,2].</gistnote> The size is 3, and groupSizes[0] = groupSizes[1] = groupSizes[2] = 3.
The third group is [3,4,6]. The size is 3, and groupSizes[3] = groupSizes[4] = groupSizes[6] = 3.
Other possible solutions are [[2,1,6],[5],[0,4,3]] and [[5],[0,6,2],[4,3,1]].
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> groupSizes = [2,1,3,3,3,2]
<strong>Output:</strong> [[1],[0,5],[2,3,4]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>groupSizes.length == n</code></li>
	<li><code>1 &lt;= n&nbsp;&lt;= 500</code></li>
	<li><code>1 &lt;=&nbsp;groupSizes[i] &lt;= n</code></li>
</ul>
</div>