<div id="listBox">
			<div class="listBoxTop">
				<div class="listBoxComment">
					<span class="countComments">[field:pubdate function="MyDate('d',@me)"/]</span>
					<span class="txtComments">[field:pubdate function="MyDate('m',@me)"/]月</span>
				</div>
				<div class="listBoxTitle">
					<h2><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a></h2>
				  <span class="timeAuthor">围观：<small>[field:click/]</small>人</span>
				</div>
			</div>
			<div class="listBoxCenter">
				<a href='[field:arcurl/]'><img src='[field:id function='GetFirstImg(@me)'/]'/></a>
				<p class="readMore"><a href="[field:arcurl/]">+阅读全文</a></p>
			</div>
			<div class="listBoxBottom">
					 <small class="listBoxBottomTag">标签：[field:id function=GetTags(@me)/]</small>
					 <small class="listBoxBottomClick">日志分类：<a target="_blank" href='[field:typeurl/]'>[field:typename/]</a></small>
			</div>
		</div>