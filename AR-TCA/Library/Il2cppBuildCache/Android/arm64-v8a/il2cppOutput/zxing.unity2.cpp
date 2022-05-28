#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Int64[][]
struct Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// ZXing.Datamatrix.Encoder.SymbolInfo[]
struct SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0;
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44;
// ZXing.Datamatrix.Encoder.C40Encoder
struct C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA;
// ZXing.Dimension
struct Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43;
// ZXing.Datamatrix.Encoder.EncoderContext
struct EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ZXing.Datamatrix.Encoder.SymbolInfo
struct SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ZXing.WriterException
struct WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113;
// ZXing.Datamatrix.Encoder.X12Encoder
struct X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7;
// BigIntegerLibrary.Base10BigInteger/DigitContainer
struct DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4;
// BigIntegerLibrary.BigInteger/DigitContainer
struct DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A;
// ZXing.QrCode.Internal.Version/ECB
struct ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8;
// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// ZXing.Datamatrix.Encoder.C40Encoder
struct C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// ZXing.Datamatrix.Encoder.SymbolInfo
struct SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5  : public RuntimeObject
{
public:
	// System.Boolean ZXing.Datamatrix.Encoder.SymbolInfo::rectangular
	bool ___rectangular_2;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::dataCapacity
	int32_t ___dataCapacity_3;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::errorCodewords
	int32_t ___errorCodewords_4;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::matrixWidth
	int32_t ___matrixWidth_5;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::matrixHeight
	int32_t ___matrixHeight_6;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::dataRegions
	int32_t ___dataRegions_7;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::rsBlockData
	int32_t ___rsBlockData_8;
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolInfo::rsBlockError
	int32_t ___rsBlockError_9;

public:
	inline static int32_t get_offset_of_rectangular_2() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___rectangular_2)); }
	inline bool get_rectangular_2() const { return ___rectangular_2; }
	inline bool* get_address_of_rectangular_2() { return &___rectangular_2; }
	inline void set_rectangular_2(bool value)
	{
		___rectangular_2 = value;
	}

	inline static int32_t get_offset_of_dataCapacity_3() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___dataCapacity_3)); }
	inline int32_t get_dataCapacity_3() const { return ___dataCapacity_3; }
	inline int32_t* get_address_of_dataCapacity_3() { return &___dataCapacity_3; }
	inline void set_dataCapacity_3(int32_t value)
	{
		___dataCapacity_3 = value;
	}

	inline static int32_t get_offset_of_errorCodewords_4() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___errorCodewords_4)); }
	inline int32_t get_errorCodewords_4() const { return ___errorCodewords_4; }
	inline int32_t* get_address_of_errorCodewords_4() { return &___errorCodewords_4; }
	inline void set_errorCodewords_4(int32_t value)
	{
		___errorCodewords_4 = value;
	}

	inline static int32_t get_offset_of_matrixWidth_5() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___matrixWidth_5)); }
	inline int32_t get_matrixWidth_5() const { return ___matrixWidth_5; }
	inline int32_t* get_address_of_matrixWidth_5() { return &___matrixWidth_5; }
	inline void set_matrixWidth_5(int32_t value)
	{
		___matrixWidth_5 = value;
	}

	inline static int32_t get_offset_of_matrixHeight_6() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___matrixHeight_6)); }
	inline int32_t get_matrixHeight_6() const { return ___matrixHeight_6; }
	inline int32_t* get_address_of_matrixHeight_6() { return &___matrixHeight_6; }
	inline void set_matrixHeight_6(int32_t value)
	{
		___matrixHeight_6 = value;
	}

	inline static int32_t get_offset_of_dataRegions_7() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___dataRegions_7)); }
	inline int32_t get_dataRegions_7() const { return ___dataRegions_7; }
	inline int32_t* get_address_of_dataRegions_7() { return &___dataRegions_7; }
	inline void set_dataRegions_7(int32_t value)
	{
		___dataRegions_7 = value;
	}

	inline static int32_t get_offset_of_rsBlockData_8() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___rsBlockData_8)); }
	inline int32_t get_rsBlockData_8() const { return ___rsBlockData_8; }
	inline int32_t* get_address_of_rsBlockData_8() { return &___rsBlockData_8; }
	inline void set_rsBlockData_8(int32_t value)
	{
		___rsBlockData_8 = value;
	}

	inline static int32_t get_offset_of_rsBlockError_9() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5, ___rsBlockError_9)); }
	inline int32_t get_rsBlockError_9() const { return ___rsBlockError_9; }
	inline int32_t* get_address_of_rsBlockError_9() { return &___rsBlockError_9; }
	inline void set_rsBlockError_9(int32_t value)
	{
		___rsBlockError_9 = value;
	}
};

struct SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5_StaticFields
{
public:
	// ZXing.Datamatrix.Encoder.SymbolInfo[] ZXing.Datamatrix.Encoder.SymbolInfo::PROD_SYMBOLS
	SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* ___PROD_SYMBOLS_0;
	// ZXing.Datamatrix.Encoder.SymbolInfo[] ZXing.Datamatrix.Encoder.SymbolInfo::symbols
	SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* ___symbols_1;

public:
	inline static int32_t get_offset_of_PROD_SYMBOLS_0() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5_StaticFields, ___PROD_SYMBOLS_0)); }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* get_PROD_SYMBOLS_0() const { return ___PROD_SYMBOLS_0; }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0** get_address_of_PROD_SYMBOLS_0() { return &___PROD_SYMBOLS_0; }
	inline void set_PROD_SYMBOLS_0(SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* value)
	{
		___PROD_SYMBOLS_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PROD_SYMBOLS_0), (void*)value);
	}

	inline static int32_t get_offset_of_symbols_1() { return static_cast<int32_t>(offsetof(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5_StaticFields, ___symbols_1)); }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* get_symbols_1() const { return ___symbols_1; }
	inline SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0** get_address_of_symbols_1() { return &___symbols_1; }
	inline void set_symbols_1(SymbolInfoU5BU5D_tA6E2034388A4537A169CDEB26951F26CBE27B7F0* value)
	{
		___symbols_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbols_1), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// BigIntegerLibrary.Base10BigInteger/DigitContainer
struct DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4  : public RuntimeObject
{
public:
	// System.Int64[][] BigIntegerLibrary.Base10BigInteger/DigitContainer::digits
	Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* ___digits_0;

public:
	inline static int32_t get_offset_of_digits_0() { return static_cast<int32_t>(offsetof(DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4, ___digits_0)); }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* get_digits_0() const { return ___digits_0; }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC** get_address_of_digits_0() { return &___digits_0; }
	inline void set_digits_0(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* value)
	{
		___digits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digits_0), (void*)value);
	}
};


// BigIntegerLibrary.BigInteger/DigitContainer
struct DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A  : public RuntimeObject
{
public:
	// System.Int64[][] BigIntegerLibrary.BigInteger/DigitContainer::digits
	Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* ___digits_0;

public:
	inline static int32_t get_offset_of_digits_0() { return static_cast<int32_t>(offsetof(DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A, ___digits_0)); }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* get_digits_0() const { return ___digits_0; }
	inline Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC** get_address_of_digits_0() { return &___digits_0; }
	inline void set_digits_0(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* value)
	{
		___digits_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___digits_0), (void*)value);
	}
};


// ZXing.QrCode.Internal.Version/ECB
struct ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8, ___dataCodewords_1)); }
	inline int32_t get_dataCodewords_1() const { return ___dataCodewords_1; }
	inline int32_t* get_address_of_dataCodewords_1() { return &___dataCodewords_1; }
	inline void set_dataCodewords_1(int32_t value)
	{
		___dataCodewords_1 = value;
	}
};


// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::ecCodewordsPerBlock
	int32_t ___ecCodewordsPerBlock_0;
	// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::ecBlocks
	ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* ___ecBlocks_1;

public:
	inline static int32_t get_offset_of_ecCodewordsPerBlock_0() { return static_cast<int32_t>(offsetof(ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC, ___ecCodewordsPerBlock_0)); }
	inline int32_t get_ecCodewordsPerBlock_0() const { return ___ecCodewordsPerBlock_0; }
	inline int32_t* get_address_of_ecCodewordsPerBlock_0() { return &___ecCodewordsPerBlock_0; }
	inline void set_ecCodewordsPerBlock_0(int32_t value)
	{
		___ecCodewordsPerBlock_0 = value;
	}

	inline static int32_t get_offset_of_ecBlocks_1() { return static_cast<int32_t>(offsetof(ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC, ___ecBlocks_1)); }
	inline ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* get_ecBlocks_1() const { return ___ecBlocks_1; }
	inline ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44** get_address_of_ecBlocks_1() { return &___ecBlocks_1; }
	inline void set_ecBlocks_1(ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* value)
	{
		___ecBlocks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ecBlocks_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// ZXing.Datamatrix.Encoder.X12Encoder
struct X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7  : public C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA
{
public:

public:
};


// <PrivateImplementationDetails>/$ArrayType=1024
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D1024_t7693012E6367F7121FA31EB86E6E07E2C6218B95 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D1024_t7693012E6367F7121FA31EB86E6E07E2C6218B95__padding[1024];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=112
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D112_t7C0E3A5351B53F452740018E4B9DB57BBAE38864 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D112_t7C0E3A5351B53F452740018E4B9DB57BBAE38864__padding[112];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D12_t403A4024085E4EE65C2A43F83A039EBC57AA9F08 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t403A4024085E4EE65C2A43F83A039EBC57AA9F08__padding[12];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=124
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D124_t042B9D45856380DAA3AB5CEA032858D4FF74F805 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D124_t042B9D45856380DAA3AB5CEA032858D4FF74F805__padding[124];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=128
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D128_t37003523DBE59C7BE57A811FA1F75B417D1193AB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D128_t37003523DBE59C7BE57A811FA1F75B417D1193AB__padding[128];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=132
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D132_t725967F6BB396E2D1E295AF18DCBC0062C54546D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D132_t725967F6BB396E2D1E295AF18DCBC0062C54546D__padding[132];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=136
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D136_t353294BE2B6087D33801D4923ED8A2D314FE3036 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D136_t353294BE2B6087D33801D4923ED8A2D314FE3036__padding[136];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=144
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D144_tAF4162306194E457F2E29B6F9BB4B23F8857EE71 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D144_tAF4162306194E457F2E29B6F9BB4B23F8857EE71__padding[144];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=148
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D148_tA4FF8F78BE05A2C4D505B88ABA6B2B3C75F603EB 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D148_tA4FF8F78BE05A2C4D505B88ABA6B2B3C75F603EB__padding[148];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D16_tF226523630B16A33308F6D6A2071CB69D03A461C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_tF226523630B16A33308F6D6A2071CB69D03A461C__padding[16];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=168
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D168_t9653B116C542CC7AED6FD6B788C5A3017AD25825 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D168_t9653B116C542CC7AED6FD6B788C5A3017AD25825__padding[168];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=176
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D176_t449093094E7800E3144449E71E016A8988A55EBA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D176_t449093094E7800E3144449E71E016A8988A55EBA__padding[176];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=192
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D192_t5B638340E237898251FA88C1B25108396CB7B0C2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D192_t5B638340E237898251FA88C1B25108396CB7B0C2__padding[192];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D20_tC164E398CE66229E5F15DF1BA3AD320E096B2640 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_tC164E398CE66229E5F15DF1BA3AD320E096B2640__padding[20];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=2048
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D2048_t3BAB63718A1DE4886C03B8D34EE0986E75BDCAA7 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D2048_t3BAB63718A1DE4886C03B8D34EE0986E75BDCAA7__padding[2048];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=224
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D224_tB2FF68FA53BEDDA41DDB309DB399D6B3ED79192A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D224_tB2FF68FA53BEDDA41DDB309DB399D6B3ED79192A__padding[224];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D24_tE219676D3B3A7093F2FBC9FDA3A8A02B6D0042A3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_tE219676D3B3A7093F2FBC9FDA3A8A02B6D0042A3__padding[24];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=248
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D248_tFCC2288B397135D55F0398D7DEFC581AFC818D92 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D248_tFCC2288B397135D55F0398D7DEFC581AFC818D92__padding[248];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=256
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D256_tED6D3698B1DECCA5D0E3280D6005442BD246C878 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D256_tED6D3698B1DECCA5D0E3280D6005442BD246C878__padding[256];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=272
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D272_tF84EDA5DC9E719E8C6E2BACB18C9DF15C222B497 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D272_tF84EDA5DC9E719E8C6E2BACB18C9DF15C222B497__padding[272];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=28
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D28_t99C75E2B3F8BA9AAE6DE08206DCBE16F255A0459 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D28_t99C75E2B3F8BA9AAE6DE08206DCBE16F255A0459__padding[28];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D32_t33C2AA5D3A3A73D4B0DE86BF5F9565C2B5497E7D 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t33C2AA5D3A3A73D4B0DE86BF5F9565C2B5497E7D__padding[32];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=3716
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D3716_t5DF9653C4FB4B8933D20876DB298BDE1C8AE4C46 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D3716_t5DF9653C4FB4B8933D20876DB298BDE1C8AE4C46__padding[3716];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=384
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D384_tFA2072E4A506E207768F79CFB4B18D35243C6C95 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D384_tFA2072E4A506E207768F79CFB4B18D35243C6C95__padding[384];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=40
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D40_t4C51D593423F95386F68D12AD793F7E7FC729101 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D40_t4C51D593423F95386F68D12AD793F7E7FC729101__padding[40];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=44
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D44_tA8E02A800DCE963F00F54BC1651A48C68B855CA5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D44_tA8E02A800DCE963F00F54BC1651A48C68B855CA5__padding[44];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=48
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D48_t4ADC4DA4DC2088F5A7157C9FD6F1B6BE95A4EEA3 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D48_t4ADC4DA4DC2088F5A7157C9FD6F1B6BE95A4EEA3__padding[48];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=512
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D512_tEB33FFEDDAE550CF767321093613D7316CA88AB5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D512_tEB33FFEDDAE550CF767321093613D7316CA88AB5__padding[512];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=56
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D56_tEEFC79EE75F743080C56664A18690F2E993F3317 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D56_tEEFC79EE75F743080C56664A18690F2E993F3317__padding[56];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=64
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D64_t26AB96AEDC10F5FEFD4C62C51B0AF5738BB6834E 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D64_t26AB96AEDC10F5FEFD4C62C51B0AF5738BB6834E__padding[64];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=72
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D72_tD33427B610C106D24597B8840F2F1DB02DD20882 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D72_tD33427B610C106D24597B8840F2F1DB02DD20882__padding[72];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D8_t985BEC7BC1AF5191E793AB8FDBD5C4777463CC45 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t985BEC7BC1AF5191E793AB8FDBD5C4777463CC45__padding[8];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=80
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D80_t7591FBABD8FE2388B2BC983AA6C3DD43CE9C031C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D80_t7591FBABD8FE2388B2BC983AA6C3DD43CE9C031C__padding[80];
	};

public:
};
#pragma pack(pop, tp)


// <PrivateImplementationDetails>/$ArrayType=96
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D96_tDE47F2A3172540EFCDB5C6768F86D32730EABAA5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D96_tDE47F2A3172540EFCDB5C6768F86D32730EABAA5__padding[96];
	};

public:
};
#pragma pack(pop, tp)


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// ZXing.Datamatrix.Encoder.SymbolShapeHint
struct SymbolShapeHint_tD0CF48CCAF1EE479A812D3267B4244AAD23D01AA 
{
public:
	// System.Int32 ZXing.Datamatrix.Encoder.SymbolShapeHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SymbolShapeHint_tD0CF48CCAF1EE479A812D3267B4244AAD23D01AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ZXing.Datamatrix.Encoder.EncoderContext
struct EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404  : public RuntimeObject
{
public:
	// System.String ZXing.Datamatrix.Encoder.EncoderContext::msg
	String_t* ___msg_0;
	// ZXing.Datamatrix.Encoder.SymbolShapeHint ZXing.Datamatrix.Encoder.EncoderContext::shape
	int32_t ___shape_1;
	// ZXing.Dimension ZXing.Datamatrix.Encoder.EncoderContext::minSize
	Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * ___minSize_2;
	// ZXing.Dimension ZXing.Datamatrix.Encoder.EncoderContext::maxSize
	Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * ___maxSize_3;
	// System.Text.StringBuilder ZXing.Datamatrix.Encoder.EncoderContext::codewords
	StringBuilder_t * ___codewords_4;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::pos
	int32_t ___pos_5;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::newEncoding
	int32_t ___newEncoding_6;
	// ZXing.Datamatrix.Encoder.SymbolInfo ZXing.Datamatrix.Encoder.EncoderContext::symbolInfo
	SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * ___symbolInfo_7;
	// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::skipAtEnd
	int32_t ___skipAtEnd_8;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___msg_0)); }
	inline String_t* get_msg_0() const { return ___msg_0; }
	inline String_t** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(String_t* value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_0), (void*)value);
	}

	inline static int32_t get_offset_of_shape_1() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___shape_1)); }
	inline int32_t get_shape_1() const { return ___shape_1; }
	inline int32_t* get_address_of_shape_1() { return &___shape_1; }
	inline void set_shape_1(int32_t value)
	{
		___shape_1 = value;
	}

	inline static int32_t get_offset_of_minSize_2() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___minSize_2)); }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * get_minSize_2() const { return ___minSize_2; }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 ** get_address_of_minSize_2() { return &___minSize_2; }
	inline void set_minSize_2(Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * value)
	{
		___minSize_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minSize_2), (void*)value);
	}

	inline static int32_t get_offset_of_maxSize_3() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___maxSize_3)); }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * get_maxSize_3() const { return ___maxSize_3; }
	inline Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 ** get_address_of_maxSize_3() { return &___maxSize_3; }
	inline void set_maxSize_3(Dimension_t549B72E61FF76C5F4D87B006044DF7DA37EB6E43 * value)
	{
		___maxSize_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxSize_3), (void*)value);
	}

	inline static int32_t get_offset_of_codewords_4() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___codewords_4)); }
	inline StringBuilder_t * get_codewords_4() const { return ___codewords_4; }
	inline StringBuilder_t ** get_address_of_codewords_4() { return &___codewords_4; }
	inline void set_codewords_4(StringBuilder_t * value)
	{
		___codewords_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___codewords_4), (void*)value);
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___pos_5)); }
	inline int32_t get_pos_5() const { return ___pos_5; }
	inline int32_t* get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(int32_t value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_newEncoding_6() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___newEncoding_6)); }
	inline int32_t get_newEncoding_6() const { return ___newEncoding_6; }
	inline int32_t* get_address_of_newEncoding_6() { return &___newEncoding_6; }
	inline void set_newEncoding_6(int32_t value)
	{
		___newEncoding_6 = value;
	}

	inline static int32_t get_offset_of_symbolInfo_7() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___symbolInfo_7)); }
	inline SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * get_symbolInfo_7() const { return ___symbolInfo_7; }
	inline SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 ** get_address_of_symbolInfo_7() { return &___symbolInfo_7; }
	inline void set_symbolInfo_7(SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * value)
	{
		___symbolInfo_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___symbolInfo_7), (void*)value);
	}

	inline static int32_t get_offset_of_skipAtEnd_8() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404, ___skipAtEnd_8)); }
	inline int32_t get_skipAtEnd_8() const { return ___skipAtEnd_8; }
	inline int32_t* get_address_of_skipAtEnd_8() { return &___skipAtEnd_8; }
	inline void set_skipAtEnd_8(int32_t value)
	{
		___skipAtEnd_8 = value;
	}
};

struct EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404_StaticFields
{
public:
	// System.Text.Encoding ZXing.Datamatrix.Encoder.EncoderContext::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_9;

public:
	inline static int32_t get_offset_of_encoding_9() { return static_cast<int32_t>(offsetof(EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404_StaticFields, ___encoding_9)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_9() const { return ___encoding_9; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_9() { return &___encoding_9; }
	inline void set_encoding_9(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_9), (void*)value);
	}
};


// ZXing.WriterException
struct WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[][]
struct Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* m_Items[1];

public:
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * m_Items[1];

public:
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.C40Encoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C40Encoder__ctor_m9ABA44AD70FE2A71AC16D94C01F5FE6948EC6505 (C40Encoder_t7D0E2BF44C0B0F786737DC48CCE079E45893BBFA * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char ZXing.Datamatrix.Encoder.EncoderContext::get_CurrentChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar EncoderContext_get_CurrentChar_mC3AB70066172BCEBAC6401C98A23DAE8E0F6BD56 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::get_Pos()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::set_Pos(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.C40Encoder::writeNextTriplet(ZXing.Datamatrix.Encoder.EncoderContext,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void C40Encoder_writeNextTriplet_m40F5CC8D1421623885A6617FB5A97136517DA36E (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * ___context0, StringBuilder_t * ___buffer1, const RuntimeMethod* method);
// System.String ZXing.Datamatrix.Encoder.EncoderContext::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EncoderContext_get_Message_m9E796FA953C8DB0F71A14B01F4BA34D1E93AD60E_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Datamatrix.Encoder.HighLevelEncoder::lookAheadTest(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HighLevelEncoder_lookAheadTest_mF1855D967606F852207943F687165596895498AD (String_t* ___msg0, int32_t ___startpos1, int32_t ___currentMode2, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::signalEncoderChange(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___encoding0, const RuntimeMethod* method);
// System.Boolean ZXing.Datamatrix.Encoder.EncoderContext::get_HasMoreCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EncoderContext_get_HasMoreCharacters_mCA69CD64E2F10917382F3DBEC7921041512F52A4 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.HighLevelEncoder::illegalCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighLevelEncoder_illegalCharacter_m4FAE344A8B52D234C240B208FA6BC8CBFD426F73 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::updateSymbolInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderContext_updateSymbolInfo_mF782DEE02931A243840D9E5BA1C60C774346BE24 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// ZXing.Datamatrix.Encoder.SymbolInfo ZXing.Datamatrix.Encoder.EncoderContext::get_SymbolInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * EncoderContext_get_SymbolInfo_m61D7CE6AB824BC77A620E764E169C4631C5A0DA9_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Datamatrix.Encoder.EncoderContext::get_CodewordCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EncoderContext_get_CodewordCount_mFD0D2EC327035BF43EB45D506F3EAD0B9B8EFFB1 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method);
// System.Void ZXing.Datamatrix.Encoder.EncoderContext::writeCodeword(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderContext_writeCodeword_mED1E24415DDEBD40831B02FCF780B5CEEAD76422 (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, Il2CppChar ___codeword0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031_inline (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_mC805639DC2E4BE500A74BAB84E03658FF495FE8A (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.WriterException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_m6358D236E80C4B4524F5EDEAA33D7EE1F9EBB9CD (WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_m3C38C0DA83C0D29AE75C76C21EBBC47F7DAF9F80 (WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_mB6E23AFF75BEF72F31AD43C3825E530A5D5849D3 (WriterException_t5B2B4BE90B79CAA461A942E6868B833AFCB4A113 * __this, String_t* ___message0, Exception_t * ___innerExc1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerExc1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.Datamatrix.Encoder.X12Encoder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X12Encoder__ctor_mC343661286DF8760B13970F0D1EF2A663447CB07 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, const RuntimeMethod* method)
{
	{
		C40Encoder__ctor_m9ABA44AD70FE2A71AC16D94C01F5FE6948EC6505(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Encoder.X12Encoder::get_EncodingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X12Encoder_get_EncodingMode_mDF843D74902A8E2C617E0B06F86A759C2816A846 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, const RuntimeMethod* method)
{
	{
		return 3;
	}
}
// System.Void ZXing.Datamatrix.Encoder.X12Encoder::encode(ZXing.Datamatrix.Encoder.EncoderContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X12Encoder_encode_mD26859D2005498B6DA0432608257174BD948FF40 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_006f;
	}

IL_000b:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_1 = ___context0;
		NullCheck(L_1);
		Il2CppChar L_2;
		L_2 = EncoderContext_get_CurrentChar_mC3AB70066172BCEBAC6401C98A23DAE8E0F6BD56(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_3 = ___context0;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_4 = L_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_4);
		EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_6 = V_1;
		StringBuilder_t * L_7 = V_0;
		int32_t L_8;
		L_8 = VirtFuncInvoker2< int32_t, Il2CppChar, StringBuilder_t * >::Invoke(8 /* System.Int32 ZXing.Datamatrix.Encoder.C40Encoder::encodeChar(System.Char,System.Text.StringBuilder) */, __this, L_6, L_7);
		StringBuilder_t * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		if (((int32_t)((int32_t)L_11%(int32_t)3)))
		{
			goto IL_006f;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_12 = ___context0;
		StringBuilder_t * L_13 = V_0;
		C40Encoder_writeNextTriplet_m40F5CC8D1421623885A6617FB5A97136517DA36E(L_12, L_13, /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_14 = ___context0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = EncoderContext_get_Message_m9E796FA953C8DB0F71A14B01F4BA34D1E93AD60E_inline(L_14, /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_16 = ___context0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 ZXing.Datamatrix.Encoder.C40Encoder::get_EncodingMode() */, __this);
		int32_t L_19;
		L_19 = HighLevelEncoder_lookAheadTest_mF1855D967606F852207943F687165596895498AD(L_15, L_17, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		int32_t L_20 = V_3;
		int32_t L_21;
		L_21 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 ZXing.Datamatrix.Encoder.C40Encoder::get_EncodingMode() */, __this);
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_006f;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_22 = ___context0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline(L_22, L_23, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_006f:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_24 = ___context0;
		NullCheck(L_24);
		bool L_25;
		L_25 = EncoderContext_get_HasMoreCharacters_mCA69CD64E2F10917382F3DBEC7921041512F52A4(L_24, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_000b;
		}
	}

IL_007a:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_26 = ___context0;
		StringBuilder_t * L_27 = V_0;
		VirtActionInvoker2< EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 *, StringBuilder_t * >::Invoke(7 /* System.Void ZXing.Datamatrix.Encoder.C40Encoder::handleEOD(ZXing.Datamatrix.Encoder.EncoderContext,System.Text.StringBuilder) */, __this, L_26, L_27);
		return;
	}
}
// System.Int32 ZXing.Datamatrix.Encoder.X12Encoder::encodeChar(System.Char,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X12Encoder_encodeChar_m194B3456E0655C85F5149006219FDC2D2A0EFC70 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, Il2CppChar ___c0, StringBuilder_t * ___sb1, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = ___c0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_1 = ___sb1;
		NullCheck(L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, 0, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0015:
	{
		Il2CppChar L_3 = ___c0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_002a;
		}
	}
	{
		StringBuilder_t * L_4 = ___sb1;
		NullCheck(L_4);
		StringBuilder_t * L_5;
		L_5 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_4, 1, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_002a:
	{
		Il2CppChar L_6 = ___c0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_003f;
		}
	}
	{
		StringBuilder_t * L_7 = ___sb1;
		NullCheck(L_7);
		StringBuilder_t * L_8;
		L_8 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, 2, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_003f:
	{
		Il2CppChar L_9 = ___c0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_10 = ___sb1;
		NullCheck(L_10);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_10, 3, /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0054:
	{
		Il2CppChar L_12 = ___c0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)48))))
		{
			goto IL_0077;
		}
	}
	{
		Il2CppChar L_13 = ___c0;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)57))))
		{
			goto IL_0077;
		}
	}
	{
		StringBuilder_t * L_14 = ___sb1;
		Il2CppChar L_15 = ___c0;
		NullCheck(L_14);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_14, ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)48))), (int32_t)4)))), /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_0077:
	{
		Il2CppChar L_17 = ___c0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)65))))
		{
			goto IL_009b;
		}
	}
	{
		Il2CppChar L_18 = ___c0;
		if ((((int32_t)L_18) > ((int32_t)((int32_t)90))))
		{
			goto IL_009b;
		}
	}
	{
		StringBuilder_t * L_19 = ___sb1;
		Il2CppChar L_20 = ___c0;
		NullCheck(L_19);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, ((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)((int32_t)65))), (int32_t)((int32_t)14))))), /*hidden argument*/NULL);
		goto IL_00a1;
	}

IL_009b:
	{
		Il2CppChar L_22 = ___c0;
		HighLevelEncoder_illegalCharacter_m4FAE344A8B52D234C240B208FA6BC8CBFD426F73(L_22, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return 1;
	}
}
// System.Void ZXing.Datamatrix.Encoder.X12Encoder::handleEOD(ZXing.Datamatrix.Encoder.EncoderContext,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X12Encoder_handleEOD_m3EBAFA077AD6A90BFEE0C790A96EB6A1755F7F24 (X12Encoder_t5A2FCA434A3847C74DB1A6525CBB876D66F4F7C7 * __this, EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * ___context0, StringBuilder_t * ___buffer1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_0 = ___context0;
		NullCheck(L_0);
		EncoderContext_updateSymbolInfo_mF782DEE02931A243840D9E5BA1C60C774346BE24(L_0, /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_1 = ___context0;
		NullCheck(L_1);
		SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * L_2;
		L_2 = EncoderContext_get_SymbolInfo_m61D7CE6AB824BC77A620E764E169C4631C5A0DA9_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->get_dataCapacity_3();
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_4 = ___context0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = EncoderContext_get_CodewordCount_mFD0D2EC327035BF43EB45D506F3EAD0B9B8EFFB1(L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_5));
		StringBuilder_t * L_6 = ___buffer1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_9 = ___context0;
		NullCheck(L_9);
		EncoderContext_writeCodeword_mED1E24415DDEBD40831B02FCF780B5CEEAD76422(L_9, ((int32_t)254), /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_10 = ___context0;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_11 = L_10;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_11);
		EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)2)), /*hidden argument*/NULL);
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_13 = ___context0;
		NullCheck(L_13);
		EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline(L_13, 0, /*hidden argument*/NULL);
		goto IL_007a;
	}

IL_004c:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_15 = ___context0;
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_16);
		EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline(L_16, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_0073;
		}
	}
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_19 = ___context0;
		NullCheck(L_19);
		EncoderContext_writeCodeword_mED1E24415DDEBD40831B02FCF780B5CEEAD76422(L_19, ((int32_t)254), /*hidden argument*/NULL);
	}

IL_0073:
	{
		EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * L_20 = ___context0;
		NullCheck(L_20);
		EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline(L_20, 0, /*hidden argument*/NULL);
	}

IL_007a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BigIntegerLibrary.Base10BigInteger/DigitContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_m230B52206BC1ADE7F834E9777EF377B87E38DC42 (DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_0 = (Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)SZArrayNew(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)200));
		__this->set_digits_0(L_0);
		return;
	}
}
// System.Int64 BigIntegerLibrary.Base10BigInteger/DigitContainer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_m8B1251A814D0D3B96749FC70B71BC2D5DFEECEA7 (DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = V_1;
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((int64_t)((int64_t)0));
		goto IL_0020;
	}

IL_001a:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_6 = V_1;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7%(int32_t)((int32_t)32)));
		int64_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Void BigIntegerLibrary.Base10BigInteger/DigitContainer::set_Item(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_m20AFD976244E4F8F0FC12449C03433CCD01D8C88 (DigitContainer_t165179B5F7776EC856F5D9A34ECBADE5E42A5BB4 * __this, int32_t ___index0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_2 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B2_0 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B1_0 = NULL;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)5));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0025;
		}
	}
	{
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_6 = __this->get_digits_0();
		int32_t L_7 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_8 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = L_8;
		V_2 = L_9;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_9);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_10 = V_2;
		G_B2_0 = L_10;
	}

IL_0025:
	{
		V_1 = G_B2_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_11 = V_1;
		int32_t L_12 = ___index0;
		int64_t L_13 = ___value1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_12%(int32_t)((int32_t)32)))), (int64_t)L_13);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BigIntegerLibrary.BigInteger/DigitContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer__ctor_mD900B194398651DB37B21253AC63C071C00825ED (DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_0 = (Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC*)SZArrayNew(Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->set_digits_0(L_0);
		return;
	}
}
// System.Int64 BigIntegerLibrary.BigInteger/DigitContainer::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DigitContainer_get_Item_mD77F58DE1DD8B3E5E9CFEED56899705BAE20772E (DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	int64_t G_B3_0 = 0;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)4));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = V_1;
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		G_B3_0 = ((int64_t)((int64_t)0));
		goto IL_0020;
	}

IL_001a:
	{
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_6 = V_1;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7%(int32_t)((int32_t)16)));
		int64_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		G_B3_0 = L_9;
	}

IL_0020:
	{
		return G_B3_0;
	}
}
// System.Void BigIntegerLibrary.BigInteger/DigitContainer::set_Item(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DigitContainer_set_Item_mB4F325090699CDFE556583313C55AE1C3DD32DCD (DigitContainer_t230537658938F6793E329F9DD76C010DF54F508A * __this, int32_t ___index0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_1 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* V_2 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B2_0 = NULL;
	Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* G_B1_0 = NULL;
	{
		int32_t L_0 = ___index0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)4));
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_1 = __this->get_digits_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_4 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0025;
		}
	}
	{
		Int64U5BU5DU5BU5D_t5237BA0F53E06948ADC63C3B2D68D7EEC8CBD2AC* L_6 = __this->get_digits_0();
		int32_t L_7 = V_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_8 = (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)SZArrayNew(Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_9 = L_8;
		V_2 = L_9;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6*)L_9);
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_10 = V_2;
		G_B2_0 = L_10;
	}

IL_0025:
	{
		V_1 = G_B2_0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_11 = V_1;
		int32_t L_12 = ___index0;
		int64_t L_13 = ___value1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_12%(int32_t)((int32_t)16)))), (int64_t)L_13);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.QrCode.Internal.Version/ECB::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECB__ctor_m5C75DC266AD2E78931438579B12443D66B2F80C7 (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, int32_t ___count0, int32_t ___dataCodewords1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		__this->set_count_0(L_0);
		int32_t L_1 = ___dataCodewords1;
		__this->set_dataCodewords_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031 (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_DataCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECB_get_DataCodewords_m6025220557C7EC66208D3CFEF2FB92E55A1D5C2B (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dataCodewords_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.QrCode.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.QrCode.Internal.Version/ECB[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ECBlocks__ctor_m76F39A48F9CE2A4785B5879FB9E1A5B4C66AD3BE (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, int32_t ___ecCodewordsPerBlock0, ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* ___ecBlocks1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ecCodewordsPerBlock0;
		__this->set_ecCodewordsPerBlock_0(L_0);
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_1 = ___ecBlocks1;
		__this->set_ecBlocks_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_ECCodewordsPerBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_ECCodewordsPerBlock_m26C8D6DCD80B7B59559352471D1B64F45C5666B7 (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_mC805639DC2E4BE500A74BAB84E03658FF495FE8A (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * V_1 = NULL;
	ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_0 = __this->get_ecBlocks_1();
		V_2 = L_0;
		V_3 = 0;
		goto IL_0021;
	}

IL_0010:
	{
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031_inline(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_9 = V_3;
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_TotalECCodewords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ECBlocks_get_TotalECCodewords_mCD4A6620A46E9224714F43957A181484EB9B170B (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		int32_t L_1;
		L_1 = ECBlocks_get_NumBlocks_mC805639DC2E4BE500A74BAB84E03658FF495FE8A(__this, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
	}
}
// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::getECBlocks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* ECBlocks_getECBlocks_mB947E2C8EC8B7BACD93095A73EBA4BEBAE4C1E94 (ECBlocks_t12F5FC9F9E96CEC0FCCF0F2CF9987A819ED4D9AC * __this, const RuntimeMethod* method)
{
	{
		ECBU5BU5D_t93D87DD7A02A66C88D98034C8B5A990CC2B62F44* L_0 = __this->get_ecBlocks_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EncoderContext_get_Pos_m19800BDA2F44D2630851CF47360E0EAA25F15AD2_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_pos_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_set_Pos_m43B2B3EBB324F5C730E5811A09A51F87972AE7CD_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_pos_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EncoderContext_get_Message_m9E796FA953C8DB0F71A14B01F4BA34D1E93AD60E_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_msg_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EncoderContext_signalEncoderChange_m4C9891B3B322B272F85D069706D5790648D34804_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, int32_t ___encoding0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___encoding0;
		__this->set_newEncoding_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * EncoderContext_get_SymbolInfo_m61D7CE6AB824BC77A620E764E169C4631C5A0DA9_inline (EncoderContext_t9E4F2B2FDB2D3E9608B2352AFB9980B32BACA404 * __this, const RuntimeMethod* method)
{
	{
		SymbolInfo_t11AA50A7851C32BF06398D7F95464EBD50E58FA5 * L_0 = __this->get_symbolInfo_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ECB_get_Count_mBBB7DF65CF817061A3B11EDBF5E4DA8408B11031_inline (ECB_tAC50FA33F51DABBF1F9974469E154E03C0CA93D8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
