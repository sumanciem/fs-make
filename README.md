# fs-make

![C/C++ CI](https://github.com/RaisinTen/fs-make/workflows/C/C++%20CI/badge.svg)

---

When you're planning on making a project, it would be very convenient to have a language to express its structure. It would be even better to generate the file system from it. Here's a subset of JSON to help you plan out a file system and the associated parser, **`fs-make` (file system make)**! :blush:

## Grammar accepted by the Parser

A very simple grammar, very similar to JSON is used here:

* File and directory names are placed between a pair of double quotes (`"`) like this:
    ```javascript
    "file-name"
    ```
* Directories of files and directories are decribed by their respective directory names followed by a colon (`:`) and a comma-separated (`,`) set of file and directory representations between a pair of braces (`{}`) like this:
    ```javascript
    "src": {
        "main.cpp",
        "CMakeLists.txt",
        "build": {
            "Makefile",
            "boink"
        },
        "includes": {
        }
    }
    ```
    When a directory contains only a single entity, the braces aren't necessary:
    ```javascript
    "ihaveonefile": "onefile"
    ```
* The input file content must be of any of the following forms:
  * a file
    ```javascript
    "just a file"
    ```
  * a directory
    ```javascript
    "lonely directory": {
        "stuff"
    }
    ```
  * an unnamed set of entities like this:
    ```javascript
    {}
    ```
    
Here's a graph generated by [GNU Bison](https://www.gnu.org/software/bison/) describing the grammmar of the language.

![grammar graph](https://github.com/RaisinTen/fs-make/raw/master/graphviz.svg)

## Getting Started

Clone the repo with:
```sh
$ git clone https://github.com/RaisinTen/fs-make.git
$ cd fs-make
```
Install all the requirements with:
```sh
$ make install
```
Build the executable from source and add it to `usr/local/bin/` with:
```sh
$ make all
```
or just:
```sh
$ make
```
