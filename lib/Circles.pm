package Circles;
use Moose;
use strict;
use warnings;

sub new {
    my $class = shift;
    my $foo = {}; 
    bless $foo,'Circles';
    return $foo; 
}

has hankei => (
      is => 'rw',
      default =>2,
    );

has chokei => (
    is => 'rw',
    default => 2
);

sub menseki{
    my $pai = 3.14;
    return shift->hankei**2*$pai;
}

sub enshu {
    my $pai = 3.14;
    return shift->chokei*$pai;
}

1;
