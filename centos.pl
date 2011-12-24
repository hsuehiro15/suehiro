use Net::Twitter;
use utf8;
binmode STDOUT, ":utf8";

print "検索したい語句を入力してください。";
my $query = <STDIN>; 

my $nt = Net::Twitter->new(
  traints => [qw/API::Search/]
    );
my $json = $nt->search({lang =>'ja',q => $query});
for my $tweet(@{$json->{results}}){
    print "$tweet->{from_user}:\n$tweet->{text}\n";
}
