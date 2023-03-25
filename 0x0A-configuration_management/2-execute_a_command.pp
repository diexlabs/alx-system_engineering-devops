# kill killmenow program using pkill
exec {'kill_program':
  command => 'pkill killmenow',
  path    => '/usr/bin:/usr/local/bin'
}
