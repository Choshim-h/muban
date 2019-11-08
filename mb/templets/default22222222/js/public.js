/*页面加载LOADING*/
function openloading(){
	$('.nav_loading').fadeOut(1000);
	$('.nav_loading').fadeIn(300);
};
function closeloading(){
	$('.nav_loading').fadeOut(1000);
};

/*图片预加载居中显示*/
jQuery.fn.LoadImage=function(scaling,width,height,loadpic){
    
	return this.each(function(){
		var t=$(this);
		var box=$(this).parent();
		var src=$(this).attr("src")
		var img=new Image();
		var boxP = box.width()/box.height();

		img.src=src;
		
		//图片居中
		var autoScaling=function(){
			if(img.width/img.height >= boxP)
			{
				t.height(box.height());
				t.css({'margin-left':[box.width()-t.width()]/2 +'px'});
				
			}
			else
			{
				t.width(box.width());
				t.css({'margin-top':[box.height()-t.height()]/2 +'px'});
			}
		}
		
		//处理ff下会自动读取缓存图片
		if(img.complete){
		    //alert("getToCache!");
			t.hide();
			t.fadeIn(300,function(){
				box.css('background-image','none');
			});
			autoScaling();
		    return;
		}
		$(this).attr("src","");
		//var loading=$("<img src=\""+loadpic+"\" />");
		var loading=$("");
		
		t.hide();
		t.after(loading);
		$(img).load(function(){
			loading.remove();
			t.attr("src",this.src);
			t.fadeIn(300,function(){
				box.css('background-image','none');
			});
			autoScaling();
		});
		
	});
}

//JS水平居中对齐
$.fn.Jcenter = function(){
	var _l = [$(this).parent().width()-$(this).width()]/2;
	if (_l > 0)
	{
		$(this).css({'margin-left':_l+'px'});
	}
	else
	{
		$(this).css({'margin-left':'0px'});
	}
};

//跟随屏幕
$.fn.Jscroll = function(Mt){
	var T = $(this);
	var box_t = T.parent().offset().top - 60;
	var W_t = $(window).scrollTop();
	var box_h = T.parent().height();
	if(W_t >= box_t - Mt)
	{
		T.css({'position':'absolute','top':W_t-box_t+Mt+'px'});
	}
	else if(W_t <= box_t)
	{
		T.css({'top':'0px'});
	}
	else
	{}
};

//弹窗警报
function alertbox(alert_title,alert_text,alert_width){
	$('body').append("<div class='alert_box box_radius box_shadow' style=width:"+alert_width+"><strong>"+alert_title+"<a href=javascript:; class=alert_close>关闭</a></strong><p>"+alert_text+"</p></div><div class='alert_mask'></div>");
	var box_l =-[$('.alert_box').width() + 60]/2;
	var box_t =-[$('.alert_box').height() + 45]/2;
	var page_h =$(document).height();
	$('.alert_mask').css({'height':page_h+'px'});
	$('.alert_box').css({'margin-left':box_l+'px','margin-top':box_t+'px'});
	$('.alert_box').fadeIn(200);

	$('.alert_close,.alert_mask').click(function(){
		$('.alert_box,.alert_mask').remove();
	});
};