/*This file is generated by luagen.*/
#include "lua_ftk_display.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkDisplay");
}

static int lua_ftk_display_update(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkDisplay* thiz;
	FtkBitmap* bitmap;
	FtkRect* rect;
	int xoffset;
	int yoffset;
	int param_ok = tolua_isusertype(L, 1, "FtkDisplay", 0, &err) && tolua_isusertype(L, 2, "FtkBitmap", 0, &err) && tolua_isusertype(L, 3, "FtkRect", 0, &err) && tolua_isnumber(L, 4, 0, &err) && tolua_isnumber(L, 5, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	bitmap = tolua_tousertype(L, 2, 0);
	rect = tolua_tousertype(L, 3, 0);
	xoffset = tolua_tonumber(L, 4, 0);
	yoffset = tolua_tonumber(L, 5, 0);
	retv = ftk_display_update(thiz, bitmap, rect, xoffset, yoffset);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_display_update_and_notify(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkDisplay* thiz;
	FtkBitmap* bitmap;
	FtkRect* rect;
	int xoffset;
	int yoffset;
	int param_ok = tolua_isusertype(L, 1, "FtkDisplay", 0, &err) && tolua_isusertype(L, 2, "FtkBitmap", 0, &err) && tolua_isusertype(L, 3, "FtkRect", 0, &err) && tolua_isnumber(L, 4, 0, &err) && tolua_isnumber(L, 5, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	bitmap = tolua_tousertype(L, 2, 0);
	rect = tolua_tousertype(L, 3, 0);
	xoffset = tolua_tonumber(L, 4, 0);
	yoffset = tolua_tonumber(L, 5, 0);
	retv = ftk_display_update_and_notify(thiz, bitmap, rect, xoffset, yoffset);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_display_width(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkDisplay* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkDisplay", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_display_width(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_display_height(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkDisplay* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkDisplay", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_display_height(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_display_snap(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkDisplay* thiz;
	int x;
	int y;
	FtkBitmap* bitmap;
	int param_ok = tolua_isusertype(L, 1, "FtkDisplay", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err) && tolua_isusertype(L, 4, "FtkBitmap", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	bitmap = tolua_tousertype(L, 4, 0);
	retv = ftk_display_snap(thiz, x, y, bitmap);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_display_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkDisplay", "FtkDisplay", "", NULL);
	tolua_beginmodule(L, "FtkDisplay");
	tolua_function(L, "Update", lua_ftk_display_update);
	tolua_function(L, "UpdateAndNotify", lua_ftk_display_update_and_notify);
	tolua_function(L, "Width", lua_ftk_display_width);
	tolua_function(L, "Height", lua_ftk_display_height);
	tolua_function(L, "Snap", lua_ftk_display_snap);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
