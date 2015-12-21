//123
// 主函数闭包
$(document).ready(function(){
        // 窗口大小改变调用图片定位函数
    $(window).resize(function(){
        locateImg();
    });
    $(window).on("load",function(){
    	var arr =  [["001","云龙湖","201512","Winterren"],	
    				["002","云龙湖","201512","Winterren"],
                    ["003","云龙湖","201512","Winterren"],
                    ["004","矿大南湖","201511","Winterren"],
                    ["005","矿大南湖","201511","Winterren"],
                    ["006","矿大南湖","201511","Winterren"],
                    ["007","矿大南湖","201511","Winterren"],
                    ["008","淮塔","201512","Winterren"],
                    ["009","淮塔","201512","Winterren"],
                    ["010","淮塔","201512","Winterren"],
                    ["011","淮塔","201512","Winterren"]
    				];

    	var numEachTime = 8;
    	var numTotal = arr.length;
    	var loopTotal = Math.ceil(numTotal/numEachTime);
    	var loopOrder = 0 ;

    	for(var i = loopOrder*numEachTime ; i < loopOrder*numEachTime + numEachTime ; i++){
    		addOnePic(arr[i][0],arr[i][1],arr[i][2],arr[i][3]);
    	}
    	loopOrder ++;

    	window.onscroll= function(){

    		if(scrollside()&&(loopOrder<loopTotal)){
    			var i = loopOrder*numEachTime;
    			for(var i = loopOrder*numEachTime ; i < loopOrder*numEachTime + numEachTime ; i++){
    				if(arr[i]){addOnePic(arr[i][0],arr[i][1],arr[i][2],arr[i][3]);}
    			}
    			loopOrder ++;

    		}
    	};	


	});	
});
function loc(){
	alert('1');
}

// 判断是否滑到了最底部
function scrollside(){
	var box = $(".box");
	var lastboxHeight = box.last().get(0).offsetTop+Math.floor(box.last().height()/2);
	var documentHeight = document.documentElement.clientHeight;
	var scrollHeight = $(window).scrollTop();
	return (lastboxHeight<=scrollHeight+documentHeight)?true:false;
}

function addOnePic(pic,meta,title,writer){
	var parent = $("#parent");
	parent.append('<div class="box"><div class="content"><!-- 图片 --><div class="pinImg"><img src="img/'+pic+'.JPG"></div><!-- 描述 --><div class="pinMeta"><p>'+meta+'</p></div><!-- 作者信息 --><div class="pinCredits"><div class="creditImg"><img src="img/pin.png"></div><div class="creditName">'+title+'</div><div class="creditTitle">'+writer+'</div></div></div></div>');
	var img = $(".pinImg img:last");
	img[0].onload = function(){
		locateImg();
	}
	// img.bind("onload",function(){
	// 	locateImg();
	// 	console.log('good')	
	// })
}

// 图片定位函数
function locateImg(){
	var box = $(".box");
	var boxWidth = box.eq(0).innerWidth();
	var fullWidth = (document.body.clientWidth< boxWidth)?boxWidth:document.body.clientWidth;
	var oneLineNum =  Math.floor(fullWidth / boxWidth); //一行有几列
	var boxHeightArr = []; //空数组用来存放盒子高度
	// 容器宽度响应
	var container = $("#container");
	container.css("width",oneLineNum*boxWidth+"px"); //容器宽度发生变化
	

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
}