
addPic();

// 主函数闭包
$(document).ready(function(){
    $(window).on("load",function(){
		
		// 初始时调用图片定位函数
		locateImg();
		// 窗口大小改变调用图片定位函数
		$(window).resize(function(){
			locateImg();
		});
		// 为滚动绑定事件——判断是否滑到底部
		// window.onscroll= function(){
		// 	if(scrollside()){
		// 		// 如果滑到底部，增加预设图片
		// 		addImg();
		// 	}
		// };	
	});	
});

// // 判断是否滑到了最底部
// function scrollside(){
// 	var box = $(".box");
// 	var lastboxHeight = box.last().get(0).offsetTop+Math.floor(box.last().height()/2);
// 	var documentHeight = document.documentElement.clientHeight;
// 	var scrollHeight = $(window).scrollTop();
// 	return (lastboxHeight<=scrollheight+documentheight)?true:false; }="" 在parent底部增加预设数组中的图片="" function="" addimg(){="" var="" htmlarr="['<div" class="box"><div class="content"><!-- 图片 --><div class="pinImg"><img src="img/plus01.jpg"></div><!-- 描述 --><div class="pinMeta"><p>This is what I just added</p></div><!-- 作者信息 --><div class="pinCredits"><div class="creditImg"><img src="img/pin.png"></div><div class="creditName">Claire Amy</div><div class="creditTitle">Ideas for the House</div></div></div>',

// 	'<div class="box"><div class="content"><!-- 图片 --><div class="pinImg"><img src="img/plus02.jpg"></div><!-- 描述 --><div class="pinMeta"><p>This is what I just added</p></div><!-- 作者信息 --><div class="pinCredits"><div class="creditImg"><img src="img/pin.png"></div><div class="creditName">Claire Amy</div><div class="creditTitle">Ideas for the House</div></div></div></div>',

// 	'<div class="box"><div class="content"><!-- 图片 --><div class="pinImg"><img src="img/plus03.jpg"></div><!-- 描述 --><div class="pinMeta"><p>This is what I just added</p></div><!-- 作者信息 --><div class="pinCredits"><div class="creditImg"><img src="img/pin.png"></div><div class="creditName">Claire Amy</div><div class="creditTitle">Ideas for the House</div></div></div></div>',

// 	'<div class="box"><div class="content"><!-- 图片 --><div class="pinImg"><img src="img/plus04.jpg"></div><!-- 描述 --><div class="pinMeta"><p>This is what I just added</p></div><!-- 作者信息 --><div class="pinCredits"><div class="creditImg"><img src="img/pin.png"></div><div class="creditName">Claire Amy</div><div class="creditTitle">Ideas for the House</div></div></div></div>']
// 	var parent = $("#parent");
// 	$(htmlArr).each(function(index,element){
// 		parent.append(htmlArr[index]);
// 	})
// 	// 更新图片定位
// 	locateImg();
// }
function addPic(){
	addOnePic("001","广州第一天，无限虚焦的越秀公园","Rui","Winterren");	
	addOnePic("002","广州第二天，和周度来到小蛮腰","Guangzhou Tower","Winterren");
	addOnePic("003","广州第三天，欧式建筑的沙面","Rui & Winterren","Winterren");	
	addOnePic("004","广州第三天，欧式建筑的沙面","Rui","Winterren");	
	// addOnePic("005","广州第三天，欧式建筑的沙面","Rui","Winterren");
	addOnePic("006","广州第三天，欧式建筑的沙面","Rui","Winterren");
	addOnePic("007","广州第三天，欧式建筑的沙面","Winterren & Zhou Du","Rui");
	addOnePic("008","广州第四天，艺术家的红砖房","Rui & Winterren","Xiao Shanshan");	
	addOnePic("009","广州第四天，艺术家的红砖房","Rui","Winterren");	
	addOnePic("010","广州第四天，艺术家的红砖房","Winterren","Rui");	
	addOnePic("011","广州第四天，艺术家的红砖房","Rui","Winterren");	
	addOnePic("012","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("013","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("014","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("015","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("016","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("017","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("018","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("019","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("020","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("021","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("022","广州第四天，艺术家的红砖房","Rui","Winterren");
	addOnePic("023","广州第四天，禁止拍照的书店","Flower","Winterren");
	addOnePic("024","广州第四天，麦当劳玩玩具","Winterren","Rui");
	addOnePic("025","广州第四天，麦当劳玩玩具","Rui","Winterren");
	addOnePic("026","广州第五天，不怎么阳光明媚的南海","Rui","Winterren");
	addOnePic("027","广州第五天，不怎么阳光明媚的南海","Rui","Winterren");
	addOnePic("028","广州第五天，不怎么阳光明媚的南海","Rui","Winterren");
	addOnePic("029","广州第五天，不怎么阳光明媚的南海","Rui","Winterren");
	addOnePic("030","广州第五天，不怎么阳光明媚的南海","Rui","Winterren");
	addOnePic("031","广州第五天，不怎么阳光明媚的南海","Rui","Winterren");
}

function addOnePic(pic,meta,title,writer){
	var parent = $("#parent");
	parent.append('<div class="box"><div class="content"><!-- 图片 --><div class="pinImg"><img src="img/'+pic+'.jpg"></div><!-- 描述 --><div class="pinMeta"><p>'+meta+'</p></div><!-- 作者信息 --><div class="pinCredits"><div class="creditImg"><img src="img/pin.png"></div><div class="creditName">'+title+'</div><div class="creditTitle">'+writer+'</div></div></div></div>');
	// locateImg();
}

// 图片定位函数
function locateImg(){
	var box = $(".box");
	var boxWidth = box.eq(0).innerWidth();
	var fullWidth = document.body.clientWidth;
	var oneLineNum =  Math.floor(fullWidth / boxWidth); //一行有几列
	var boxHeightArr = []; //空数组用来存放盒子高度
	// 容器宽度响应
	var container = $("#container");
	container.css("width",oneLineNum*boxWidth+"px"); //容器宽度发生变化
	container.css("min-width",boxWidth+"px"); 

	box.each(function(index,element){
		var boxHeight = box.eq(index).innerHeight();
		if (index < oneLineNum){ //第一排存进高度数组
			boxHeightArr[index] = boxHeight;
			$(this).css({
				top:0,
				left:index*boxWidth
			})
		}
		else{ //第二排开始找数组中最小高度，图片补入，高度累加
			var minBoxHeight = Math.min.apply(null,boxHeightArr);
			var minBoxIndex = $.inArray(minBoxHeight,boxHeightArr);
			$(this).css({
				top:minBoxHeight,
				left:(minBoxIndex)*boxWidth
			})
			boxHeightArr[minBoxIndex] += $(this).innerHeight();
		}
	})
}</=scrollheight+documentheight)?true:false;>