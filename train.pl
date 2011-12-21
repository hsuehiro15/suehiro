use strict;
use LWP::Simple;
use XML::Simple;
use Data::Dumper;

my $api = 'http://express.heartrails.com/api/xml?method=getLines&area=';
my $area = '関東';

my $document = LWP::Simple::get($api.$area) or die 'cannot get content fromj $area';

my $parser = XML::Simple->new;
my $data = $parser->XMLin($document);

foreach my $data (@{$data->{line}}){
    print "$data\n" if $data =~s/^JR/ig;
}

    
