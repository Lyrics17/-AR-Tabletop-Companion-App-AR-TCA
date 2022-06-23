#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000009 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000A TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000014 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000016 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000018 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000019 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001B System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001C System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000020 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000021 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000022 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000024 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000025 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000026 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000027 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000035 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000038 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000039 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000043 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000044 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000045 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000046 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000047 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000048 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000049 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000004A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000004C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000004D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000004E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000004F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000050 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000051 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000054 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000055 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000056 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000057 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000058 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000059 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000005A System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005B System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x0000005C System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x0000005D System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000005E TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000060 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000061 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000065 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000066 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000067 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000068 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000069 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000006A System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000006F System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000070 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000071 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x00000072 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000073 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000075 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000076 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000078 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000079 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000007A T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000007B System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000007C System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[124] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[124] = 
{
	5695,
	5934,
	5934,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[44] = 
{
	{ 0x02000004, { 70, 4 } },
	{ 0x02000005, { 74, 9 } },
	{ 0x02000006, { 85, 7 } },
	{ 0x02000007, { 94, 10 } },
	{ 0x02000008, { 106, 11 } },
	{ 0x02000009, { 120, 9 } },
	{ 0x0200000A, { 132, 12 } },
	{ 0x0200000B, { 147, 1 } },
	{ 0x0200000C, { 148, 2 } },
	{ 0x0200000D, { 150, 2 } },
	{ 0x0200000F, { 152, 3 } },
	{ 0x02000010, { 157, 5 } },
	{ 0x02000011, { 162, 7 } },
	{ 0x02000012, { 169, 3 } },
	{ 0x02000013, { 172, 7 } },
	{ 0x02000014, { 179, 4 } },
	{ 0x02000015, { 183, 23 } },
	{ 0x02000017, { 206, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 2 } },
	{ 0x06000009, { 32, 1 } },
	{ 0x0600000A, { 33, 3 } },
	{ 0x0600000B, { 36, 2 } },
	{ 0x0600000C, { 38, 4 } },
	{ 0x0600000D, { 42, 4 } },
	{ 0x0600000E, { 46, 4 } },
	{ 0x0600000F, { 50, 3 } },
	{ 0x06000010, { 53, 1 } },
	{ 0x06000011, { 54, 1 } },
	{ 0x06000012, { 55, 3 } },
	{ 0x06000013, { 58, 3 } },
	{ 0x06000014, { 61, 2 } },
	{ 0x06000015, { 63, 2 } },
	{ 0x06000016, { 65, 5 } },
	{ 0x06000026, { 83, 2 } },
	{ 0x0600002B, { 92, 2 } },
	{ 0x06000030, { 104, 2 } },
	{ 0x06000036, { 117, 3 } },
	{ 0x0600003B, { 129, 3 } },
	{ 0x06000040, { 144, 3 } },
	{ 0x0600004B, { 155, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[208] = 
{
	{ (Il2CppRGCTXDataType)2, 2706 },
	{ (Il2CppRGCTXDataType)3, 11226 },
	{ (Il2CppRGCTXDataType)2, 4381 },
	{ (Il2CppRGCTXDataType)2, 3818 },
	{ (Il2CppRGCTXDataType)3, 19632 },
	{ (Il2CppRGCTXDataType)2, 2837 },
	{ (Il2CppRGCTXDataType)2, 3825 },
	{ (Il2CppRGCTXDataType)3, 19667 },
	{ (Il2CppRGCTXDataType)2, 3820 },
	{ (Il2CppRGCTXDataType)3, 19644 },
	{ (Il2CppRGCTXDataType)2, 2707 },
	{ (Il2CppRGCTXDataType)3, 11227 },
	{ (Il2CppRGCTXDataType)2, 4415 },
	{ (Il2CppRGCTXDataType)2, 3830 },
	{ (Il2CppRGCTXDataType)3, 19682 },
	{ (Il2CppRGCTXDataType)2, 2859 },
	{ (Il2CppRGCTXDataType)2, 3838 },
	{ (Il2CppRGCTXDataType)3, 19868 },
	{ (Il2CppRGCTXDataType)2, 3834 },
	{ (Il2CppRGCTXDataType)3, 19767 },
	{ (Il2CppRGCTXDataType)2, 862 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)2, 1656 },
	{ (Il2CppRGCTXDataType)3, 7908 },
	{ (Il2CppRGCTXDataType)2, 864 },
	{ (Il2CppRGCTXDataType)3, 48 },
	{ (Il2CppRGCTXDataType)3, 49 },
	{ (Il2CppRGCTXDataType)2, 1668 },
	{ (Il2CppRGCTXDataType)3, 7913 },
	{ (Il2CppRGCTXDataType)2, 3426 },
	{ (Il2CppRGCTXDataType)3, 17305 },
	{ (Il2CppRGCTXDataType)3, 8879 },
	{ (Il2CppRGCTXDataType)2, 1174 },
	{ (Il2CppRGCTXDataType)3, 1861 },
	{ (Il2CppRGCTXDataType)3, 1862 },
	{ (Il2CppRGCTXDataType)2, 2838 },
	{ (Il2CppRGCTXDataType)3, 12009 },
	{ (Il2CppRGCTXDataType)2, 2453 },
	{ (Il2CppRGCTXDataType)2, 1905 },
	{ (Il2CppRGCTXDataType)2, 2033 },
	{ (Il2CppRGCTXDataType)2, 2145 },
	{ (Il2CppRGCTXDataType)2, 2454 },
	{ (Il2CppRGCTXDataType)2, 1906 },
	{ (Il2CppRGCTXDataType)2, 2034 },
	{ (Il2CppRGCTXDataType)2, 2146 },
	{ (Il2CppRGCTXDataType)2, 2455 },
	{ (Il2CppRGCTXDataType)2, 1907 },
	{ (Il2CppRGCTXDataType)2, 2035 },
	{ (Il2CppRGCTXDataType)2, 2147 },
	{ (Il2CppRGCTXDataType)2, 2036 },
	{ (Il2CppRGCTXDataType)2, 2148 },
	{ (Il2CppRGCTXDataType)3, 7909 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)2, 2025 },
	{ (Il2CppRGCTXDataType)2, 2026 },
	{ (Il2CppRGCTXDataType)2, 2143 },
	{ (Il2CppRGCTXDataType)3, 7907 },
	{ (Il2CppRGCTXDataType)2, 2024 },
	{ (Il2CppRGCTXDataType)2, 2142 },
	{ (Il2CppRGCTXDataType)3, 7906 },
	{ (Il2CppRGCTXDataType)2, 1904 },
	{ (Il2CppRGCTXDataType)2, 2032 },
	{ (Il2CppRGCTXDataType)2, 1903 },
	{ (Il2CppRGCTXDataType)3, 23372 },
	{ (Il2CppRGCTXDataType)3, 7116 },
	{ (Il2CppRGCTXDataType)2, 1527 },
	{ (Il2CppRGCTXDataType)2, 2028 },
	{ (Il2CppRGCTXDataType)2, 2144 },
	{ (Il2CppRGCTXDataType)2, 2246 },
	{ (Il2CppRGCTXDataType)3, 11228 },
	{ (Il2CppRGCTXDataType)3, 11230 },
	{ (Il2CppRGCTXDataType)2, 627 },
	{ (Il2CppRGCTXDataType)3, 11229 },
	{ (Il2CppRGCTXDataType)3, 11238 },
	{ (Il2CppRGCTXDataType)2, 2710 },
	{ (Il2CppRGCTXDataType)2, 3821 },
	{ (Il2CppRGCTXDataType)3, 19645 },
	{ (Il2CppRGCTXDataType)3, 11239 },
	{ (Il2CppRGCTXDataType)2, 2080 },
	{ (Il2CppRGCTXDataType)2, 2177 },
	{ (Il2CppRGCTXDataType)3, 7920 },
	{ (Il2CppRGCTXDataType)3, 23332 },
	{ (Il2CppRGCTXDataType)2, 3835 },
	{ (Il2CppRGCTXDataType)3, 19768 },
	{ (Il2CppRGCTXDataType)3, 11231 },
	{ (Il2CppRGCTXDataType)2, 2709 },
	{ (Il2CppRGCTXDataType)2, 3819 },
	{ (Il2CppRGCTXDataType)3, 19633 },
	{ (Il2CppRGCTXDataType)3, 7919 },
	{ (Il2CppRGCTXDataType)3, 11232 },
	{ (Il2CppRGCTXDataType)3, 23331 },
	{ (Il2CppRGCTXDataType)2, 3831 },
	{ (Il2CppRGCTXDataType)3, 19683 },
	{ (Il2CppRGCTXDataType)3, 11245 },
	{ (Il2CppRGCTXDataType)2, 2711 },
	{ (Il2CppRGCTXDataType)2, 3826 },
	{ (Il2CppRGCTXDataType)3, 19668 },
	{ (Il2CppRGCTXDataType)3, 12069 },
	{ (Il2CppRGCTXDataType)3, 5563 },
	{ (Il2CppRGCTXDataType)3, 7921 },
	{ (Il2CppRGCTXDataType)3, 5562 },
	{ (Il2CppRGCTXDataType)3, 11246 },
	{ (Il2CppRGCTXDataType)3, 23333 },
	{ (Il2CppRGCTXDataType)2, 3839 },
	{ (Il2CppRGCTXDataType)3, 19869 },
	{ (Il2CppRGCTXDataType)3, 11259 },
	{ (Il2CppRGCTXDataType)2, 2713 },
	{ (Il2CppRGCTXDataType)2, 3837 },
	{ (Il2CppRGCTXDataType)3, 19770 },
	{ (Il2CppRGCTXDataType)3, 11260 },
	{ (Il2CppRGCTXDataType)2, 2083 },
	{ (Il2CppRGCTXDataType)2, 2180 },
	{ (Il2CppRGCTXDataType)3, 7925 },
	{ (Il2CppRGCTXDataType)3, 7924 },
	{ (Il2CppRGCTXDataType)2, 3823 },
	{ (Il2CppRGCTXDataType)3, 19647 },
	{ (Il2CppRGCTXDataType)3, 23338 },
	{ (Il2CppRGCTXDataType)2, 3836 },
	{ (Il2CppRGCTXDataType)3, 19769 },
	{ (Il2CppRGCTXDataType)3, 11252 },
	{ (Il2CppRGCTXDataType)2, 2712 },
	{ (Il2CppRGCTXDataType)2, 3833 },
	{ (Il2CppRGCTXDataType)3, 19685 },
	{ (Il2CppRGCTXDataType)3, 7923 },
	{ (Il2CppRGCTXDataType)3, 7922 },
	{ (Il2CppRGCTXDataType)3, 11253 },
	{ (Il2CppRGCTXDataType)2, 3822 },
	{ (Il2CppRGCTXDataType)3, 19646 },
	{ (Il2CppRGCTXDataType)3, 23337 },
	{ (Il2CppRGCTXDataType)2, 3832 },
	{ (Il2CppRGCTXDataType)3, 19684 },
	{ (Il2CppRGCTXDataType)3, 11266 },
	{ (Il2CppRGCTXDataType)2, 2714 },
	{ (Il2CppRGCTXDataType)2, 3841 },
	{ (Il2CppRGCTXDataType)3, 19871 },
	{ (Il2CppRGCTXDataType)3, 12070 },
	{ (Il2CppRGCTXDataType)3, 5565 },
	{ (Il2CppRGCTXDataType)3, 7927 },
	{ (Il2CppRGCTXDataType)3, 7926 },
	{ (Il2CppRGCTXDataType)3, 5564 },
	{ (Il2CppRGCTXDataType)3, 11267 },
	{ (Il2CppRGCTXDataType)2, 3824 },
	{ (Il2CppRGCTXDataType)3, 19648 },
	{ (Il2CppRGCTXDataType)3, 23339 },
	{ (Il2CppRGCTXDataType)2, 3840 },
	{ (Il2CppRGCTXDataType)3, 19870 },
	{ (Il2CppRGCTXDataType)3, 7917 },
	{ (Il2CppRGCTXDataType)3, 7918 },
	{ (Il2CppRGCTXDataType)3, 7931 },
	{ (Il2CppRGCTXDataType)2, 4423 },
	{ (Il2CppRGCTXDataType)2, 1445 },
	{ (Il2CppRGCTXDataType)2, 867 },
	{ (Il2CppRGCTXDataType)3, 112 },
	{ (Il2CppRGCTXDataType)3, 17292 },
	{ (Il2CppRGCTXDataType)2, 3427 },
	{ (Il2CppRGCTXDataType)3, 17306 },
	{ (Il2CppRGCTXDataType)2, 1175 },
	{ (Il2CppRGCTXDataType)3, 1863 },
	{ (Il2CppRGCTXDataType)3, 17298 },
	{ (Il2CppRGCTXDataType)3, 5529 },
	{ (Il2CppRGCTXDataType)2, 662 },
	{ (Il2CppRGCTXDataType)3, 17293 },
	{ (Il2CppRGCTXDataType)2, 3423 },
	{ (Il2CppRGCTXDataType)3, 2019 },
	{ (Il2CppRGCTXDataType)2, 1213 },
	{ (Il2CppRGCTXDataType)2, 1481 },
	{ (Il2CppRGCTXDataType)3, 5535 },
	{ (Il2CppRGCTXDataType)3, 17294 },
	{ (Il2CppRGCTXDataType)3, 5524 },
	{ (Il2CppRGCTXDataType)3, 5525 },
	{ (Il2CppRGCTXDataType)3, 5523 },
	{ (Il2CppRGCTXDataType)3, 5526 },
	{ (Il2CppRGCTXDataType)2, 1477 },
	{ (Il2CppRGCTXDataType)2, 4470 },
	{ (Il2CppRGCTXDataType)3, 7915 },
	{ (Il2CppRGCTXDataType)3, 5528 },
	{ (Il2CppRGCTXDataType)2, 1994 },
	{ (Il2CppRGCTXDataType)3, 5527 },
	{ (Il2CppRGCTXDataType)2, 1910 },
	{ (Il2CppRGCTXDataType)2, 4418 },
	{ (Il2CppRGCTXDataType)2, 2053 },
	{ (Il2CppRGCTXDataType)2, 2154 },
	{ (Il2CppRGCTXDataType)3, 7134 },
	{ (Il2CppRGCTXDataType)2, 1536 },
	{ (Il2CppRGCTXDataType)3, 8636 },
	{ (Il2CppRGCTXDataType)3, 8637 },
	{ (Il2CppRGCTXDataType)3, 8642 },
	{ (Il2CppRGCTXDataType)2, 2254 },
	{ (Il2CppRGCTXDataType)3, 8639 },
	{ (Il2CppRGCTXDataType)3, 24167 },
	{ (Il2CppRGCTXDataType)2, 1487 },
	{ (Il2CppRGCTXDataType)3, 5552 },
	{ (Il2CppRGCTXDataType)1, 1987 },
	{ (Il2CppRGCTXDataType)2, 4429 },
	{ (Il2CppRGCTXDataType)3, 8638 },
	{ (Il2CppRGCTXDataType)1, 4429 },
	{ (Il2CppRGCTXDataType)1, 2254 },
	{ (Il2CppRGCTXDataType)2, 4492 },
	{ (Il2CppRGCTXDataType)2, 4429 },
	{ (Il2CppRGCTXDataType)3, 17365 },
	{ (Il2CppRGCTXDataType)3, 8643 },
	{ (Il2CppRGCTXDataType)3, 8644 },
	{ (Il2CppRGCTXDataType)3, 8641 },
	{ (Il2CppRGCTXDataType)3, 8640 },
	{ (Il2CppRGCTXDataType)2, 492 },
	{ (Il2CppRGCTXDataType)3, 5566 },
	{ (Il2CppRGCTXDataType)2, 638 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	124,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	44,
	s_rgctxIndices,
	208,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
