<h2><a href="https://codeforces.com/contest/1285/problem/C" target="_blank" rel="noopener noreferrer">1285C — Fadi and LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285C](https://codeforces.com/contest/1285/problem/C) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Fadi and LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Osama gave Fadi an integer $$$X$$$, and Fadi was wondering about the minimum possible value of $$$max(a, b)$$$ such that $$$LCM(a, b)$$$ equals $$$X$$$. Both $$$a$$$ and $$$b$$$ should be positive integers.</p><p>$$$LCM(a, b)$$$ is the smallest positive integer that is divisible by both $$$a$$$ and $$$b$$$. For example, $$$LCM(6, 8) = 24$$$, $$$LCM(4, 12) = 12$$$, $$$LCM(2, 3) = 6$$$.</p><p>Of course, Fadi immediately knew the answer. Can you be just like Fadi and find any such pair?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$X$$$ ($$$1 \le X \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two positive integers, $$$a$$$ and $$$b$$$, such that the value of $$$max(a, b)$$$ is minimum possible and $$$LCM(a, b)$$$ equals $$$X$$$. If there are several possible such pairs, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0044011109915054436" id="id008547608493288612" class="input-output-copier">Copy</div></div><pre id="id0044011109915054436">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006708897047804636" id="id0011795190499846475" class="input-output-copier">Copy</div></div><pre id="id006708897047804636">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005376890491255496" id="id0009813777617090902" class="input-output-copier">Copy</div></div><pre id="id005376890491255496">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0009134513528081822" id="id001943797084966694" class="input-output-copier">Copy</div></div><pre id="id0009134513528081822">2 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00889740196112133" id="id0039193175224018495" class="input-output-copier">Copy</div></div><pre id="id00889740196112133">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007410173718889234" id="id0017067297598214404" class="input-output-copier">Copy</div></div><pre id="id007410173718889234">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041452491836140815" id="id00476004691937121" class="input-output-copier">Copy</div></div><pre id="id0041452491836140815">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005672019130888828" id="id009640372840031938" class="input-output-copier">Copy</div></div><pre id="id005672019130888828">1 1
</pre></div></div></div>