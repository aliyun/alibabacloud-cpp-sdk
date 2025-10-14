// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSRESPONSEBODYCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSRESPONSEBODYCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListObjectsResponseBodyContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListObjectsResponseBodyContents& obj) { 
      DARABONBA_PTR_TO_JSON(ETag, ETag_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListObjectsResponseBodyContents& obj) { 
      DARABONBA_PTR_FROM_JSON(ETag, ETag_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListObjectsResponseBodyContents() = default ;
    ListObjectsResponseBodyContents(const ListObjectsResponseBodyContents &) = default ;
    ListObjectsResponseBodyContents(ListObjectsResponseBodyContents &&) = default ;
    ListObjectsResponseBodyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListObjectsResponseBodyContents() = default ;
    ListObjectsResponseBodyContents& operator=(const ListObjectsResponseBodyContents &) = default ;
    ListObjectsResponseBodyContents& operator=(ListObjectsResponseBodyContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ETag_ == nullptr
        && return this->key_ == nullptr && return this->lastModified_ == nullptr && return this->size_ == nullptr; };
    // ETag Field Functions 
    bool hasETag() const { return this->ETag_ != nullptr;};
    void deleteETag() { this->ETag_ = nullptr;};
    inline string ETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
    inline ListObjectsResponseBodyContents& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListObjectsResponseBodyContents& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline ListObjectsResponseBodyContents& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListObjectsResponseBodyContents& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The entity tag (ETag). When an object is created, an ETag is created to identify the content of the object.
    // 
    // *   For an object that is created by calling the PutObject operation, the ETag value of the object is the MD5 hash of the object content.
    // *   For an object that is not created by calling the PutObject operation, the ETag value of the object is the UUID of the object content.
    // *   The ETag of an object can be used to check whether the object content is modified. However, we recommend that you use the MD5 hash of an object rather than the ETag value of the object to verify data integrity.
    std::shared_ptr<string> ETag_ = nullptr;
    // The name of the object.
    std::shared_ptr<string> key_ = nullptr;
    // The time when the object was last modified.
    std::shared_ptr<string> lastModified_ = nullptr;
    // The size of the returned object. Unit: bytes.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
