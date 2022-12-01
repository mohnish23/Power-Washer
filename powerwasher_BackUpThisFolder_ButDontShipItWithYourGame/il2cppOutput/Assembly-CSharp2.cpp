#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// Tabtale.TTPlugins.SimpleJSON.JSONNode
struct JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;

IL2CPP_EXTERN_C RuntimeClass* JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Tabtale.TTPlugins.SimpleJSON.JSON
struct JSON_t048FE02E79993C77C49E82B291A907D3608E43CD  : public RuntimeObject
{
};

// Tabtale.TTPlugins.SimpleJSON.JSONNode
struct JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C  : public RuntimeObject
{
};

struct JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C_StaticFields
{
	// System.Boolean Tabtale.TTPlugins.SimpleJSON.JSONNode::forceASCII
	bool ___forceASCII_0;
	// System.Boolean Tabtale.TTPlugins.SimpleJSON.JSONNode::longAsString
	bool ___longAsString_1;
	// System.Boolean Tabtale.TTPlugins.SimpleJSON.JSONNode::allowLineComments
	bool ___allowLineComments_2;
};

struct JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C_ThreadStaticFields
{
	// System.Text.StringBuilder Tabtale.TTPlugins.SimpleJSON.JSONNode::m_EscapeBuilder
	StringBuilder_t* ___m_EscapeBuilder_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// Tabtale.TTPlugins.SimpleJSON.JSONNode Tabtale.TTPlugins.SimpleJSON.JSONNode::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C* JSONNode_Parse_mFD193445BDCFF3A2C1092095147CE7C117540C0C (String_t* ___aJSON0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Tabtale.TTPlugins.SimpleJSON.JSONNode Tabtale.TTPlugins.SimpleJSON.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C* JSON_Parse_mFAB4048530C9BA0B9D775C44DAC994E2D280FCC4 (String_t* ___aJSON0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JSONNode.Parse(aJSON);
		String_t* L_0 = ___aJSON0;
		il2cpp_codegen_runtime_class_init_inline(JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C_il2cpp_TypeInfo_var);
		JSONNode_t1362B9E2864B87DAB829DA5F264BDD21D49B8A8C* L_1;
		L_1 = JSONNode_Parse_mFD193445BDCFF3A2C1092095147CE7C117540C0C(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
