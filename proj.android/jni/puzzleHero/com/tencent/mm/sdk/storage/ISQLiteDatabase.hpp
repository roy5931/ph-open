/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.storage.ISQLiteDatabase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_STORAGE_ISQLITEDATABASE_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_STORAGE_ISQLITEDATABASE_HPP_DECL


namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/ContentValues.hpp>
#include <android/database/Cursor.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace storage {

	class ISQLiteDatabase;
	class ISQLiteDatabase
		: public object<ISQLiteDatabase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit ISQLiteDatabase(jobject jobj)
		: object<ISQLiteDatabase>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< android::database::Cursor > query(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		local_ref< android::database::Cursor > rawQuery(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		jboolean execSQL(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jlong insert(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::content::ContentValues >  const&);
		jint update(local_ref< java::lang::String >  const&, local_ref< android::content::ContentValues >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		jlong replace(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::content::ContentValues >  const&);
		jint delete_(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
	}; //class ISQLiteDatabase

} //namespace storage
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_STORAGE_ISQLITEDATABASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_STORAGE_ISQLITEDATABASE_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_STORAGE_ISQLITEDATABASE_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::storage::ISQLiteDatabase::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::database::Cursor > com::tencent::mm::sdk::storage::ISQLiteDatabase::query(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3, local_ref< java::lang::String > const &a4, local_ref< java::lang::String > const &a5, local_ref< java::lang::String > const &a6)
{
	return call_method<
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0, a1, a2, a3, a4, a5, a6);
}

local_ref< android::database::Cursor > com::tencent::mm::sdk::storage::ISQLiteDatabase::rawQuery(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::database::Cursor >
	>(get_jobject(), a0, a1);
}

jboolean com::tencent::mm::sdk::storage::ISQLiteDatabase::execSQL(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0, a1);
}

jlong com::tencent::mm::sdk::storage::ISQLiteDatabase::insert(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::content::ContentValues > const &a2)
{
	return call_method<
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject(), a0, a1, a2);
}

jint com::tencent::mm::sdk::storage::ISQLiteDatabase::update(local_ref< java::lang::String > const &a0, local_ref< android::content::ContentValues > const &a1, local_ref< java::lang::String > const &a2, local_ref< array< local_ref< java::lang::String >, 1> > const &a3)
{
	return call_method<
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject(), a0, a1, a2, a3);
}

jlong com::tencent::mm::sdk::storage::ISQLiteDatabase::replace(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::content::ContentValues > const &a2)
{
	return call_method<
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_NAME(5),
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(get_jobject(), a0, a1, a2);
}

jint com::tencent::mm::sdk::storage::ISQLiteDatabase::delete_(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::String >, 1> > const &a2)
{
	return call_method<
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_NAME(6),
		com::tencent::mm::sdk::storage::ISQLiteDatabase::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::storage::ISQLiteDatabase,"com/tencent/mm/sdk/storage/ISQLiteDatabase")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::ISQLiteDatabase,0,"query","(Ljava/lang/String;[java.lang.StringLjava/lang/String;[java.lang.StringLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::ISQLiteDatabase,1,"rawQuery","(Ljava/lang/String;[java.lang.String)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::ISQLiteDatabase,2,"execSQL","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::ISQLiteDatabase,3,"insert","(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::ISQLiteDatabase,4,"update","(Ljava/lang/String;Landroid/content/ContentValues;Ljava/lang/String;[java.lang.String)I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::ISQLiteDatabase,5,"replace","(Ljava/lang/String;Ljava/lang/String;Landroid/content/ContentValues;)J")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::storage::ISQLiteDatabase,6,"delete","(Ljava/lang/String;Ljava/lang/String;[java.lang.String)I")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_STORAGE_ISQLITEDATABASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
