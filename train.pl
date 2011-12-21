use strict;
use warnings;
use LWP::Simple;
use XML::Simple;
use Data::Dumper;
use utf8;

my $api = 'http://express.heartrails.com/api/xml?method=getLines';
my $area = '&area=関東';
my $prefecture  = '&prefecture=埼玉県';
my $pre2 = '&prefecture=東京都';

my $document = LWP::Simple::get($api.$area.$prefecture) or die 'cannot get content fromj $area';

my $document2 = LWP::Simple::get($api.$area.$pre2) or die 'cannot get content from $pre2';

my $parser = XML::Simple->new;
my $data = $parser->XMLin($document);
my $data2 = $parser->XMLin($document2);

my @train1;
my @train2;

foreach my $data(@{$data->{line}}){
    push (@train1,$data); 
}

print join(',',@train1);

print "$pre2\n\n";
foreach my $data2(@{$data2->{line}}){
    push (@train2,$data2);
}

print join(',',@train2);

my @match = ();

foreach my $str(@{$data->{line}}){
    grep($str eq $_,@{$data2->{line}}) && push(@match,$str);
}

print "\n\n共通路線\n\n";

print join(',',@match);

print "\n";
