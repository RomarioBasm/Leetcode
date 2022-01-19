<h2><a href="https://leetcode.com/problems/n-th-tribonacci-number/">1137. N-th Tribonacci Number</a></h2><h3>Easy</h3><hr><div><p>The Tribonacci sequence T<sub>n</sub> is defined as follows:&nbsp;</p>

<p>T<sub>0</sub> = 0, T<sub>1</sub> = 1, T<sub>2</sub> = 1, and <gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);" id="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba">T</gistnote><sub><gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);">n+3</gistnote></sub><gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);"> = T</gistnote><sub><gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);">n</gistnote></sub><gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);"> + T</gistnote><sub><gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);">n+1</gistnote></sub><gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);"> + T</gistnote><sub><gistnote class="gistnote-highlight" highlightid="a7f9be5c-3f50-4c49-b9a5-1c28ea278aba" colornum="3" style="background-color: rgb(255, 251, 120);">n+2</gistnote></sub> for n &gt;= 0.</p>

<p>Given <code>n</code>, return the value of T<sub>n</sub>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> 4
<strong>Explanation:</strong>
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 25
<strong>Output:</strong> 1389537
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 37</code></li>
	<li>The answer is guaranteed to fit within a 32-bit integer, ie. <code>answer &lt;= 2^31 - 1</code>.</li>
</ul></div>