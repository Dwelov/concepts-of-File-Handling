<h1>Concepts of <mark>File Handling</mark> — C++</h1>

<p>
  This repository demonstrates core <strong>C++ file handling</strong> operations:
  opening files, reading/writing data, and searching contents. Key ideas are
  highlighted with <mark>mark</mark> for quick scanning.
</p>

<h2>What you will learn</h2>
<ul>
  <li><strong>Streams:</strong> Using <code>&lt;fstream&gt;</code>, <code>ifstream</code>, <code>ofstream</code></li>
  <li><strong>Modes:</strong> <code>ios::in</code>, <code>ios::out</code>, <code>ios::app</code>, <code>ios::binary</code></li>
  <li><strong>Error handling:</strong> Checking <code>fail()</code>, <code>good()</code>, and exceptions</li>
  <li><strong>Parsing:</strong> Counting <mark>lines</mark>, <mark>words</mark>, and <mark>characters</mark></li>
</ul>

<h2>Quick start</h2>
<ol>
  <li><strong>Build:</strong> <code>g++ q6.cpp -o q6.exe</code></li>
  <li><strong>Run:</strong> <code>./q6.exe</code></li>
  <li><strong>Search:</strong> <code>./search.exe</code> and enter a word (e.g., <mark>is</mark>)</li>
</ol>

<h2>Examples</h2>
<pre>
<code>
// Write to a file
std::ofstream out("data.txt");
out &lt;&lt; "Hello, files!";
out.close();

// Read from a file
std::ifstream in("data.txt");
std::string s;
std::getline(in, s);
</code>
</pre>

<h2>Notes</h2>
<p>
  <strong>Important:</strong> Ensure files exist and paths are correct. Handle
  platform line endings (<mark>CRLF</mark> vs <mark>LF</mark>) when processing text.
</p>

<h2>Resources</h2>
<ul>
  <li><a href="https://en.cppreference.com/w/cpp/io/basic_ifstream">cppreference: ifstream</a></li>
  <li><a href="https://en.cppreference.com/w/cpp/io/basic_ofstream">cppreference: ofstream</a></li>
</ul>
# concepts-of-File-Handling
Hello folks in this repository i will include all the concepts of the file handling.
