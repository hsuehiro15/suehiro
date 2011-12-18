use strict;
use warnings;
use Test::More tests => 2;


require_ok("k2.pl");
require "k2.pl";

is(&menseki(3),28.26);