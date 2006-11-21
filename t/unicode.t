#!/usr/bin/perl -w
# -*- perl -*-

#
# $Id: $
# Author: Slaven Rezic
#

use strict;

use File::Copy qw(cp);
use File::Spec::Functions qw(catfile);
use File::Temp qw(tempdir);

use Tk;
use Tk::FBox;

BEGIN {
    if (!eval q{
	use Test::More;
	1;
    }) {
	print "1..0 # skip: no Test::More module\n";
	exit;
    }
}

plan tests => 8;

my $dir = tempdir(CLEANUP => 1);
die "Cannot create temporary directory" if !$dir;

my $mw = tkinit;
$mw->geometry("+10+10");

my $umlautdir = catfile $dir, "����";
mkdir $umlautdir
    or die "Cannot create $umlautdir: $!";

my $umlautgif = catfile $umlautdir, "����.gif";
cp(Tk->findINC("Xcamel.gif"), $umlautgif)
    or die "Can't copy Xcamel.gif to $umlautgif: $!";

my $umlautxpm = catfile $umlautdir, "��.xpm";
cp(Tk->findINC("Camel.xpm"), $umlautxpm)
    or die "Can't copy Camel.xpm to $umlautxpm: $!";
utf8::upgrade($umlautxpm); # upgrade to utf8 it before Perl/Tk...

my $umlautxbm = catfile $umlautdir, "��.xbm";
cp(Tk->findINC("Tk.xbm"), $umlautxbm)
    or die "Can't copy Tk.xbm to $umlautxbm: $!";

my $eurogif = catfile $umlautdir, "\xe2\x82\xac.gif"; # the utf8-representation of \x{20ac} (Euro sign)
cp(Tk->findINC("Xcamel.gif"), $eurogif)
    or die "Can't copy Xcamel.gif to $eurogif: $!";

######################################################################
# Various image formats
{
    my $p = eval { $mw->Photo(-file => $umlautgif) };
    is($@, "", "Create a photo with non-ascii chars in filename");
    $p->delete if $p;
}

{
    my $p = eval { $mw->Pixmap(-file => $umlautxpm) };
    is($@, "", "Create a pixmap with non-ascii chars in filename");
    $p->delete if $p;
}

{
    my $p = eval { $mw->Bitmap(-file => $umlautxbm) };
    is($@, "", "Create a bitmap with non-ascii chars in filename");
    $p->delete if $p;
}

{
    my $p = eval { $mw->Photo(-file => $eurogif) };
    is($@, "", "Create a photo with chars > 0xff in filename");
    $p->delete if $p;
}

######################################################################
# Bitmaps from file
{
    my $l = eval { $mw->Label(-bitmap => '@' . $umlautxbm) };
    is($@, "", "Create a widget with bitmap from filename with non-ascii chars");
    if (Tk::Exists($l)) {
	$l->pack;
	$l->update;
	$l->after(100);
	$l->destroy;
    }
}

######################################################################
# File box
{
    my $fb = $mw->FBox;
    $fb->configure(-initialdir => $umlautdir);
    $fb->after(500, sub { $fb->destroy });
    $fb->Show;
    pass("Setting FBox -initialdir with non-ascii directory name");
}

{
    my $fb = $mw->FBox;
    $fb->configure(-initialfile => $umlautgif);
    $fb->after(500, sub { $fb->destroy });
    $fb->Show;
    pass("Setting FBox -initialfile with non-ascii file name");
}

######################################################################
# Text
{
    local $TODO = "Fix utf-8 warnings in Text widget";

    my @warnings;
    my $t = $mw->Text->pack;
    $t->insert("end", "\xfc" x 20);
    $t->markSet('insert','end');
    $t->focusForce;
    $t->update;
    {
	local $SIG{__WARN__} = sub { push @warnings, @_ };
	$t->eventGenerate('<Control-KeyPress>', -keysym=>'Left');
    }
    is("@warnings", "", "No utf-8 warnings");
    $t->destroy;
}

#MainLoop;

__END__