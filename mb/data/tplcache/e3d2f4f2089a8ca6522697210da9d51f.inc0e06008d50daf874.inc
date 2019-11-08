<?php
$z[0]=Array("scores","",125,140);
$z[1]=Array("arcurl","",271,286);
$z[2]=Array("title","",295,309);
$z[3]=Array("title","",311,325);
$z[4]=Array("pubdate","",387,434);
$z[4][4]['function']="MyDate('y-m-d',@me)";
$z[5]=Array("writer","",480,495);
$z[6]=Array("array","@me = (strpos(@me['litpic'],'defaultpic') ? \"\" : \"<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>\"); ",593,745);
$z[6][4]['runphp']="yes";
$z[7]=Array("description","",778,798);
$z[8]=Array("arcurl","",840,855);
$z[9]=Array("id","",954,987);
$z[9][4]['function']="GetTags(@me)";
$z[10]=Array("typeurl","",1062,1078);
$z[11]=Array("typename","",1080,1097);
$z[12]=Array("click","",1101,1115);

?>