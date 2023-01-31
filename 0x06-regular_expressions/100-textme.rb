#!/usr/bin/env ruby
if /\[from:([^\]]+)\] \[to:([^\]]+)\] \[flags:([^\]]+)\]/ =~ ARGV[0]
  puts "#{$1},#{$2},#{$3}"
end
