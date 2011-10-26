#! /usr/sbin/perl 

# Born out of my laziness!
# This script will make a new .cpp file for you with basic headers in it 
# and also give it  the appropriate permission for it to run !

# USAGE : perl m.pl filename

use strict;

if( $#ARGV != 0)
{
	die " Correct usage is : perl m.pl filename \n Program stopped";
}


if ( -e $ARGV[0])
{
	die " File already exists \n";
}

my $filename=$ARGV[0].".cpp";

open(handler,">$filename");

print handler "// Program Info \n";
print handler "#include <iostream> \n\n";
print handler "using namespace std; \n\n\n\n\n\n\n\n\n\n\n\n\n";
print handler "int main()\n";
print handler "{\n\n\n\n\n\n\tgetch();\n\treturn 0;\n}";
close (handler);
