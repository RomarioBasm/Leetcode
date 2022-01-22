<h2><a href="https://leetcode.com/problems/stone-game-iv/">1510. Stone Game IV</a></h2><h3>Hard</h3><hr><div><p><gistnote class="gistnote-highlight" highlightid="32843c7d-4b3a-4686-8f85-656a45bdd118" colornum="3" style="background-color: rgb(255, 251, 120);" id="32843c7d-4b3a-4686-8f85-656a45bdd118">Alice and Bob</gistnote> take turns playing a game, with Alice starting first.</p>

<p>Initially, <gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);" id="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4">there are </gistnote><code><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);">n</gistnote></code><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);"> stones in a pile. On each player's turn, that player makes a </gistnote><em><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);">move</gistnote></em><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);"> consisting of removing </gistnote><strong><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);">any</gistnote></strong><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);"> non-zero </gistnote><strong><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);">square number</gistnote></strong><gistnote class="gistnote-highlight" highlightid="ff6a5a5e-c9a6-4617-b644-410e28b2dcb4" colornum="3" style="background-color: rgb(255, 251, 120);"> of stones in the pile.</gistnote></p>

<p>Also, if a player cannot make a move, he/she loses the game.</p>

<p>Given a positive integer <code>n</code>, return <code>true</code> if and only if Alice wins the game otherwise return <code>false</code>, assuming both players play optimally.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 1
<strong>Output:</strong> true
<strong>Explanation: </strong>Alice can remove 1 stone winning the game because Bob doesn't have any moves.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 2
<strong>Output:</strong> false
<strong>Explanation: </strong>Alice can only remove 1 stone, after that Bob removes the last one winning the game (2 -&gt; 1 -&gt; 0).
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 4
<strong>Output:</strong> true
<strong>Explanation:</strong> n is already a perfect square, Alice can win with one move, removing 4 stones (4 -&gt; 0).
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 10<sup>5</sup></code></li>
</ul>
</div>