<?php
$z[0]=Array("scores","",125,140);
$z[1]=Array("arcurl","",271,286);
$z[2]=Array("title","",295,309);
$z[3]=Array("title","",311,325);
$z[4]=Array("pubdate","",407,454);
$z[4][4]['function']="MyDate('y-m-d',@me)";
$z[5]=Array("writer","",514,529);
$z[6]=Array("array","@me = (strpos(@me['litpic'],'defaultpic') ? \"\" : \"<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>\"); ",627,779);
$z[6][4]['runphp']="yes";
$z[7]=Array("description","",812,832);
$z[8]=Array("arcurl","",874,889);
$z[9]=Array("id","",1019,1052);
$z[9][4]['function']="GetTags(@me)";
$z[10]=Array("typeurl","",1147,1163);
$z[11]=Array("typename","",1165,1182);
$z[12]=Array("click","",1204,1218);

?>