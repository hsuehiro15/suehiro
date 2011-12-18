use strict;
use warnings;
use Test::More tests => 3;


require_ok("k2.pl");
require "k2.pl";

is(&menseki(3),28.26);
is(&menseki(4),28.26);