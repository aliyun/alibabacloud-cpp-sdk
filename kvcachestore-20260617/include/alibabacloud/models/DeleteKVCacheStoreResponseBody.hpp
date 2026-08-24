// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKVCACHESTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEKVCACHESTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class DeleteKVCacheStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteKVCacheStoreResponseBody() = default ;
    DeleteKVCacheStoreResponseBody(const DeleteKVCacheStoreResponseBody &) = default ;
    DeleteKVCacheStoreResponseBody(DeleteKVCacheStoreResponseBody &&) = default ;
    DeleteKVCacheStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKVCacheStoreResponseBody() = default ;
    DeleteKVCacheStoreResponseBody& operator=(const DeleteKVCacheStoreResponseBody &) = default ;
    DeleteKVCacheStoreResponseBody& operator=(DeleteKVCacheStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvcsId_ == nullptr
        && this->requestId_ == nullptr; };
    // kvcsId Field Functions 
    bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
    void deleteKvcsId() { this->kvcsId_ = nullptr;};
    inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
    inline DeleteKVCacheStoreResponseBody& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteKVCacheStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // KVCacheStore KvcsId
    shared_ptr<string> kvcsId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
