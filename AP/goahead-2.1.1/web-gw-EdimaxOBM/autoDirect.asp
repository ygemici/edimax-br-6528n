<html>
<head>
<meta http-equiv="Content-Type" content="text/html;charset=UTF-8" />
<meta http-equiv="cache-control" content="no-cache,must-revalidate">
<meta http-equiv="Pragma" content="no-cache">
<meta http-equiv="cache-control" content="no-cache" />
<meta http-equiv="cache-control" content="no-store" />
<meta http-equiv="Expires" content="-1">
<meta http-equiv="Pragma" content="no-cache">
<meta http-equiv="Expires" content="-1">
<script type="text/javascript">
function url()
{
	//window.open("http://www.edimax.com");
	<% write("wanMode = "+getIndex("wanMode")); %>
	var security_query = <%getInfo("security_query");%>;
	if(security_query != 2)
	{
		if(wanMode==0)
			window.location.replace("autoWireless1.asp"); //set security of DHCP
		else
			window.location.replace("autoWireless.asp"); //set security of PPPOE
	}
	else
		setTimeout("window.open('','_self');top.window.close();", 1);
}
</script>
</head>
<body class="mainbg" onload="url()"></body>
</html>
