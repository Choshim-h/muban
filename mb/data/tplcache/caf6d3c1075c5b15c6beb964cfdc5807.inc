<div id="listBox">
			   <div class="listBoxTop">
				   <div class="listBoxComment">
					   <span class="countComments">[field:scores/]</span>
					   <span class="txtComments">Comments</span>
				   </div>
				   <div class="listBoxTitle">
					   <h2><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h2>
					   <span class="timeAuthor">
						   �����ڣ�<small>[field:pubdate function="MyDate('y-m-d',@me)"/]</small>&#160;&#160;|&#160;&#160;&#160;���ߣ�<small>[field:writer/]</small>
				  	 </span>
				   </div>
			   </div>
			   <div class="listBoxCenter">
				   [field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? "" : "<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>"); [/field:array]
				   <p class="articleIntro">[field:description/]</p>
				   <p class="readMore"><a href="[field:arcurl/]">+�Ķ�ȫ��</a></p>
			   </div>
			   <div class="listBoxBottom">
					 <small class="listBoxBottomTag">��ǩ��[field:id function=GetTags(@me)/]</small>
					 <small class="listBoxBottomClick">��־���ࣺ<a target="_blank" href='[field:typeurl/]'>[field:typename/]</a>Χ��Ⱥ�ڣ�[field:click/]��</small>
			   </div>
		 </div>