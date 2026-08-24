// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKVCACHESTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKVCACHESTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class UpdateKVCacheStoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKVCacheStoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KvcsId, kvcsId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateKVCacheStoreResponseBody() = default ;
    UpdateKVCacheStoreResponseBody(const UpdateKVCacheStoreResponseBody &) = default ;
    UpdateKVCacheStoreResponseBody(UpdateKVCacheStoreResponseBody &&) = default ;
    UpdateKVCacheStoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKVCacheStoreResponseBody() = default ;
    UpdateKVCacheStoreResponseBody& operator=(const UpdateKVCacheStoreResponseBody &) = default ;
    UpdateKVCacheStoreResponseBody& operator=(UpdateKVCacheStoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kvcsId_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // kvcsId Field Functions 
    bool hasKvcsId() const { return this->kvcsId_ != nullptr;};
    void deleteKvcsId() { this->kvcsId_ = nullptr;};
    inline string getKvcsId() const { DARABONBA_PTR_GET_DEFAULT(kvcsId_, "") };
    inline UpdateKVCacheStoreResponseBody& setKvcsId(string kvcsId) { DARABONBA_PTR_SET_VALUE(kvcsId_, kvcsId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline UpdateKVCacheStoreResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateKVCacheStoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the modified KVCacheStore.
    shared_ptr<string> kvcsId_ {};
    // The specification change order ID. Returned only when Capacity is modified.
    shared_ptr<string> orderId_ {};
    // The request ID. The request ID is returned regardless of whether the operation is successful.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
