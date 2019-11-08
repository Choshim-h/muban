<div id="listBox">
				<div class="listBoxTop">
					<div class="listBoxComment">
						<span class="countComments">[field:pubdate function="MyDate('d',@me)"/]</span>
						<span class="txtComments">[field:pubdate function="MyDate('m',@me)"/]��</span>
					</div>
					<div class="listBoxTitle">
						<h2><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h2>
						<span class="timeAuthor">Χ�ۣ�<small>[field:click/]</small>��</span>
					</div>
				</div>
				<div class="listBoxCenter">
					[field:array runphp='yes']@me = (strpos(@me['litpic'],'defaultpic') ? "" : "<a href='{@me['
						arcurl']}'><img src='{@me[' big_pic']}' /></a>"); [/field:array]
					<p class="readMore"><a href="[field:arcurl/]">+�Ķ�ȫ��</a></p>
				</div>
				<div class="listBoxBottom">
					<small class="listBoxBottomTag">��ǩ��[field:id function=GetTags(@me)/]</small>
					</small>
					<small class="listBoxBottomClick">���ࣺ<a target="_blank"
							href='[field:typeurl/]'>[field:typename/]</a></small>
				</div>
			</div>