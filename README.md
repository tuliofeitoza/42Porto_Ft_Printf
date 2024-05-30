<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
![42porto printf](./imge/42portoprintf-tsilva-f.webp)
<h2>Brief Description</h2>
<p>
    Welcome to the <strong>ft_printf</strong> project! This project involves recoding the <code>printf()</code> function from the C standard library. The <code>printf()</code> function is a versatile and widely used function in C programming for formatted output. Through this project, you will delve into variadic functions, memory management, and the implementation of various format specifiers. By completing this project, you will not only improve your understanding of these concepts but also create a reusable library function for your future C projects.
</p>
<p>
    The key features of the <code>ft_printf</code> project include:
    <ul>
        <li>Handling various conversions such as characters, strings, pointers, decimal numbers, integers, unsigned numbers, and hexadecimal numbers.</li>
        <li>Implementing the function with proper memory management and error handling.</li>
        <li>Ensuring the function is as efficient and accurate as the original <code>printf()</code>.</li>
    </ul>
</p>

<hr>

<h1>ft_printf</h1>
<p>
    A custom implementation of the versatile <code>printf()</code> function in C. This project is part of the 42 school's curriculum, aimed at deepening understanding of variadic functions and formatted output in C programming.
</p>

<h2>Table of Contents</h2>
<ul>
    <li><a href="#introduction">Introduction</a></li>
    <li><a href="#features">Features</a></li>
    <li><a href="#installation">Installation</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#examples">Examples</a></li>
    <li><a href="#testing">Testing</a></li>
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
</ul>

<h2 id="introduction">Introduction</h2>
<p>
    The <strong>ft_printf</strong> project is an exercise in recoding the standard <code>printf()</code> function from the C standard library. This project provides a deeper understanding of variadic functions, memory management, and formatted output. Upon completion, you will have a custom <code>ft_printf</code> function that mimics the behavior of the original <code>printf()</code>, with support for various format specifiers.
</p>

<h2 id="features">Features</h2>
<ul>
    <li><strong>Character Conversion (%c):</strong> Prints a single character.</li>
    <li><strong>String Conversion (%s):</strong> Prints a string.</li>
    <li><strong>Pointer Conversion (%p):</strong> Prints a void pointer in hexadecimal format.</li>
    <li><strong>Decimal Conversion (%d/%i):</strong> Prints a decimal (base 10) number.</li>
    <li><strong>Unsigned Decimal Conversion (%u):</strong> Prints an unsigned decimal (base 10) number.</li>
    <li><strong>Hexadecimal Conversion (%x/%X):</strong> Prints a number in hexadecimal (base 16) format (lowercase/uppercase).</li>
    <li><strong>Percent Sign (%%):</strong> Prints a percent sign.</li>
</ul>

<h2 id="installation">Installation</h2>
<ol>
    <li>Clone the repository:
        <pre><code>git clone https://github.com/yourusername/ft_printf.git
cd ft_printf</code></pre>
    </li>
    <li>Compile the library:
        <pre><code>make</code></pre>
    </li>
    <li>Include <code>libftprintf.a</code> in your project:
        <pre><code>gcc -L. -lftprintf your_program.c</code></pre>
    </li>
</ol>

<h2 id="usage">Usage</h2>
<p>To use <code>ft_printf</code>, include the header file in your source code:</p>
<pre><code>#include "ft_printf.h"</code></pre>
<p>Call <code>ft_printf</code> with the desired format string and arguments:</p>
<pre><code>ft_printf("Hello, %s!\n", "world");</code></pre>

<h2 id="examples">Examples</h2>
<p>Here are a few examples demonstrating the usage of <code>ft_printf</code>:</p>
<pre><code>ft_printf("Character: %c\n", 'A');
ft_printf("String: %s\n", "Hello, World!");
ft_printf("Pointer: %p\n", (void*)ptr);
ft_printf("Decimal: %d\n", 42);
ft_printf("Unsigned: %u\n", 42);
ft_printf("Hexadecimal (lowercase): %x\n", 255);
ft_printf("Hexadecimal (uppercase): %X\n", 255);
ft_printf("Percent sign: %%\n");</code></pre>

<h2 id="testing">Testing</h2>
<p>To test your implementation, you can use the printfTester by Tripouille. Follow these steps:</p>
<ol>
    <li>Clone the printfTester repository:
        <pre><code>git clone https://github.com/Tripouille/printfTester.git</code></pre>
    </li>
    <li>Navigate to the printfTester directory and run the tests:
        <pre><code>cd printfTester
make m</code></pre>
    </li>
</ol>
<p>This will help you ensure that your <code>ft_printf</code> function behaves as expected.</p>

<h2 id="contributing">Contributing</h2>
<p>Contributions are welcome! Please fork this repository, create a new branch, and submit a pull request with your changes. Ensure your code follows the project's coding standards and includes appropriate tests.</p>
<ol>
    <li>Fork the repository.</li>
    <li>Create a new branch (<code>git checkout -b feature/your-feature</code>).</li>
    <li>Commit your changes (<code>git commit -am 'Add some feature'</code>).</li>
    <li>Push to the branch (<code>git push origin feature/your-feature</code>).</li>
    <li>Open a pull request.</li>
</ol>

<h2 id="license">License</h2>
<p>This project is licensed under the MIT License. See the <a href="LICENSE">LICENSE</a> file for details.</p>

<hr>

<p>Thank you for checking out the <strong>ft_printf</strong> project! Happy coding!</p>

</body>
</html>
