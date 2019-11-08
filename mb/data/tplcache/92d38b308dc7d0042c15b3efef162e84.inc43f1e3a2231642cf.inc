<?php
$z[0]=Array("scores","",125,140);
$z[1]=Array("arcurl","",271,286);
$z[2]=Array("title","",295,309);
$z[3]=Array("title","",311,325);
$z[4]=Array("pubdate","",395,442);
$z[4][4]['function']="MyDate('y-m-d',@me)";
$z[5]=Array("writer","",494,509);
$z[6]=Array("array","@me = (strpos(@me['litpic'],'defaultpic') ? \"\" : \"<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>\"); ",607,759);
$z[6][4]['runphp']="yes";
$z[7]=Array("description","",792,812);
$z[8]=Array("arcurl","",854,869);
$z[9]=Array("id","",983,1016);
$z[9][4]['function']="GetTags(@me)";
$z[10]=Array("typeurl","",1101,1117);
$z[11]=Array("typename","",1119,1136);
$z[12]=Array("click","",1150,1164);

?>