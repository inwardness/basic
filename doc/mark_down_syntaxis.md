# Headings
## Heading h2

### Heading h3

#### Heading h4
* star with space as a pointer list
* in case < br > <br>it's a new line<br>
* This text is a paragraph.
This won't be another paragraph, it will join the line above it.

This will be another paragraph, as it has a blank line above it.
# Additional breaks
Text A
<!-- blank line -->
<br>
<!-- blank line -->
Text B
<br>

# Horizontal lines
Text
<!-- blank line -->
----
<!-- blank line -->
Text
<br>

# Emphasis: bold and italic
This is **bold** and this is _italic_.

This is ***bold and italic***.
<br>

# Links

"create link"
[md_file_on_D:/](/Users/polynom/projects_gb/doc/new_world.md)<br>
[trimethylfentanyl@gmail.com](trimethylfentanyl@gmail.com)

# Lists

1. Always start list items wich a capital letter.
2. Always leave a blank line befor and after a list.
3. Begion a line with a space(not tabs) to donate a nasted sub-item. Items nested in list should always align with the first character of the list item.

    1. For Unordere lists, use two spaces for each level of idnentation.
    2. For Oredered lists, use three spaces for each level of identation.

# Order List
Paragraph:

1. Item one
   1. Sub item one
   2. Sub item two
   3. Sub item three
2. Item two
<br>

LIST:
1. ITEM 
   1. ITEM
   1. ITEM
1.  ITEM

# Unordered lists
- Item 1
- Item 2
- Item 3
  - Sub item 1
  - Sub item 2
- Item 4

# Split lists
- list one - item 1
- list one - item 2
  - sub item 1
  - sub item 2
- list one - item 3

- list two - item A
- list two - item B

- list three - item _i_
- list three - item _ii_

# Images
To insert images to your markdown file, use the markup<p> '!'['red_bull']'(\resource\red_bull.jpg)'<br>of course without ' -qoutes 

![red_bull](/resource/red_bull.jpg)

I really like using Markdown.
I think I'll use it to format all of my documents from now on. 
<p>I really like using Markdown.</p>
<p>I think I'll use it to format all of my documents from now on.</p>
<br>

# Code
To denote a `word` or `phrase` as code, enclose it in backticks (`).

# Escaping Backticks

If the word or phrase you want to denote as code includes `one` or more ``backticks, you can escape it by enclosing the word or phrase in double backticks ``(``).

# Code Blocks

To create code blocks, indent every line of the block by at least four spaces or one tab.

    <html>
      <head>
      </head>
    </html>

# Horizontal Rules
To create a horizontal rule, use three or more asterisks (***), dashes (---), or underscores (___) on a line by themselves.
***
---
___

# _Horizontal Rule Best Practices_

For compatibility, put blank lines before and after horizontal rules.
Try to put a blank line before... 

---

...and after a horizontal rule.

# Links

To create a link, enclose the link text in brackets (e.g., [Duck Duck Go]) and then follow it immediately with the URL in parentheses (https://github.com/inwardness/basic.git)



<u>_Adding Titles_</u>

You can optionally add a title for a link. This will appear as a tooltip when the user hovers over the link. To add a title, enclose it in quotation marks after the URL.

repository with my exesizes in Geek Brains: [https://github.com/inwardness/basic.git](https://github.com/inwardness/basic.git)

<u>_URLs and Email Addresses_</u>

To quickly turn a URL or email address into a link, enclose it in angle brackets.(<>)

<https://github.com/inwardness/basic.git>
<fake@example.com>

<u>_Formatting Links_</u>

To emphasize links, add asterisks [1] before and after the brackets and parentheses. To denote links as code, add backticks in the brackets.

 Link to **[Google.com](https://google.com)** <br> 
 This is the *[Markdown Guide](https://www.markdownguide.org)*.<br>

_____
 To see <br> ![red_bull](/resource/red_bull.jpg)<br> check section <b>[Image](#images)</b>

<u>_Formatting the Second Part of the Link_</u><br>
The second part of a reference-style link is formatted with the following  attributes:

    The label, in brackets, followed immediately by a colon and at least one space (e.g., [label]: ). 
    The URL for the link, which you can optionally enclose in angle brackets.
    The optional title for the link, which you can enclose in double quotes, single quotes, or parentheses.

This means the following example formats are all roughly equivalent for the second part of the link: [1]

    [1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle
    [1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle "Hobbit lifestyles"
    [1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle 'Hobbit lifestyles'
    [1]: https://en.wikipedia.org/wiki/Hobbit#Lifestyle (Hobbit lifestyles)
[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> "Hobbit lifestyles"
[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> 'Hobbit lifestyles'
[1]: <https://en.wikipedia.org/wiki/Hobbit#Lifestyle> (Hobbit lifestyles)

<u>_Link Best Practices_</u>

[link](https://www.example.com/my%20great%20page)

<a href="https://www.example.com/my great page">link</a>

[a novel](https://en.wikipedia.org/wiki/The_Milagro_Beanfield_War_%28novel%29)

<a href="https://en.wikipedia.org/wiki/The_Milagro_Beanfield_War_(novel)">a novel</a>

# Escaping Characters
To display a literal character that would otherwise be used to format text in a Markdown document, add a backslash (\) in front of the character.

\* Without the backslash, this would be a bullet in an unordered list.

_Characters You Can Escape_

*You can use a backslash to escape the following characters.

\  backslash

` 	backtick (see also escaping backticks in code)

\* 	asterisk

_ 	underscore

{ } 	curly braces

[ ] 	brackets

< > 	angle brackets

( ) 	parentheses

\# 	pound sign

\+ 	plus sign

\- 	minus sign (hyphen)

\. 	dot

\! 	exclamation mark

\| 	pipe (see also escaping pipe in tables)
