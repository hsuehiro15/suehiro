use strict;
use warnings;
use lib qw(./lib);
use Test::More "no_plan";
use_ok('Hatena');

my $hatebu = Hatena->new();

is($hatebu->diary(),6286);