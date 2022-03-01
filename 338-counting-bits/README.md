<h2><a href="https://leetcode.com/problems/counting-bits/">338. Counting Bits</a></h2><h3>Easy</h3><hr><div><p>Given an integer <code>n</code>, return <em>an array </em><code>ans</code><em> of length </em><code>n + 1</code><em> such that for each </em><code>i</code><em> </em>(<code>0 &lt;= i &lt;= n</code>)<em>, </em><code><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);" id="6cc96425-257b-474d-aba5-7154c04a213d">ans[i]</gistnote></code><em><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);"> is the </gistnote><strong><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);">number of </gistnote></strong></em><code><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);">1</gistnote></code><em><strong><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);">'s</gistnote></strong><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);"> in the binary representation of </gistnote></em><code><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);">i</gistnote></code><gistnote class="gistnote-highlight" highlightid="6cc96425-257b-474d-aba5-7154c04a213d" colornum="3" style="background-color: rgb(255, 251, 120);">.</gistnote></p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> [0,1,1]
<strong>Explanation:</strong>
0 --&gt; 0
1 --&gt; 1
2 --&gt; 10
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 5
<strong>Output:</strong> [0,1,1,2,1,2]
<strong>Explanation:</strong>
0 --&gt; 0
1 --&gt; 1
2 --&gt; 10
3 --&gt; 11
4 --&gt; 100
5 --&gt; 101
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow up:</strong></p>

<ul>
	<li>It is very easy to come up with a solution with a runtime of <code>O(n log n)</code>. Can you do it in linear time <code>O(n)</code> and possibly in a single pass?</li>
	<li>Can you do it without using any built-in function (i.e., like <code>__builtin_popcount</code> in C++)?</li>
</ul>
</div>