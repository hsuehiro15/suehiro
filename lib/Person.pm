package Person;
use Moose;

has name => ( is => 'rw');
has age  => ( is => 'rw');

has name => (
    is => 'rw',
    isa =>'Str',
    default => 'Bob'
    );

has staff => (
    is => 'ro'
   isa => 'ArrayRef',
   lazy=> 1,
    default => sub {[qw(Bob Alice Tim)]},
    );

1;
