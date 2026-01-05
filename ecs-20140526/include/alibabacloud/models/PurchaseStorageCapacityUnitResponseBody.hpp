// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASESTORAGECAPACITYUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PURCHASESTORAGECAPACITYUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class PurchaseStorageCapacityUnitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseStorageCapacityUnitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageCapacityUnitIds, storageCapacityUnitIds_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseStorageCapacityUnitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageCapacityUnitIds, storageCapacityUnitIds_);
    };
    PurchaseStorageCapacityUnitResponseBody() = default ;
    PurchaseStorageCapacityUnitResponseBody(const PurchaseStorageCapacityUnitResponseBody &) = default ;
    PurchaseStorageCapacityUnitResponseBody(PurchaseStorageCapacityUnitResponseBody &&) = default ;
    PurchaseStorageCapacityUnitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseStorageCapacityUnitResponseBody() = default ;
    PurchaseStorageCapacityUnitResponseBody& operator=(const PurchaseStorageCapacityUnitResponseBody &) = default ;
    PurchaseStorageCapacityUnitResponseBody& operator=(PurchaseStorageCapacityUnitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StorageCapacityUnitIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StorageCapacityUnitIds& obj) { 
        DARABONBA_PTR_TO_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
      };
      friend void from_json(const Darabonba::Json& j, StorageCapacityUnitIds& obj) { 
        DARABONBA_PTR_FROM_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
      };
      StorageCapacityUnitIds() = default ;
      StorageCapacityUnitIds(const StorageCapacityUnitIds &) = default ;
      StorageCapacityUnitIds(StorageCapacityUnitIds &&) = default ;
      StorageCapacityUnitIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StorageCapacityUnitIds() = default ;
      StorageCapacityUnitIds& operator=(const StorageCapacityUnitIds &) = default ;
      StorageCapacityUnitIds& operator=(StorageCapacityUnitIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->storageCapacityUnitId_ == nullptr; };
      // storageCapacityUnitId Field Functions 
      bool hasStorageCapacityUnitId() const { return this->storageCapacityUnitId_ != nullptr;};
      void deleteStorageCapacityUnitId() { this->storageCapacityUnitId_ = nullptr;};
      inline const vector<string> & getStorageCapacityUnitId() const { DARABONBA_PTR_GET_CONST(storageCapacityUnitId_, vector<string>) };
      inline vector<string> getStorageCapacityUnitId() { DARABONBA_PTR_GET(storageCapacityUnitId_, vector<string>) };
      inline StorageCapacityUnitIds& setStorageCapacityUnitId(const vector<string> & storageCapacityUnitId) { DARABONBA_PTR_SET_VALUE(storageCapacityUnitId_, storageCapacityUnitId) };
      inline StorageCapacityUnitIds& setStorageCapacityUnitId(vector<string> && storageCapacityUnitId) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnitId_, storageCapacityUnitId) };


    protected:
      shared_ptr<vector<string>> storageCapacityUnitId_ {};
    };

    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->requestId_ == nullptr && this->storageCapacityUnitIds_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline PurchaseStorageCapacityUnitResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurchaseStorageCapacityUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageCapacityUnitIds Field Functions 
    bool hasStorageCapacityUnitIds() const { return this->storageCapacityUnitIds_ != nullptr;};
    void deleteStorageCapacityUnitIds() { this->storageCapacityUnitIds_ = nullptr;};
    inline const PurchaseStorageCapacityUnitResponseBody::StorageCapacityUnitIds & getStorageCapacityUnitIds() const { DARABONBA_PTR_GET_CONST(storageCapacityUnitIds_, PurchaseStorageCapacityUnitResponseBody::StorageCapacityUnitIds) };
    inline PurchaseStorageCapacityUnitResponseBody::StorageCapacityUnitIds getStorageCapacityUnitIds() { DARABONBA_PTR_GET(storageCapacityUnitIds_, PurchaseStorageCapacityUnitResponseBody::StorageCapacityUnitIds) };
    inline PurchaseStorageCapacityUnitResponseBody& setStorageCapacityUnitIds(const PurchaseStorageCapacityUnitResponseBody::StorageCapacityUnitIds & storageCapacityUnitIds) { DARABONBA_PTR_SET_VALUE(storageCapacityUnitIds_, storageCapacityUnitIds) };
    inline PurchaseStorageCapacityUnitResponseBody& setStorageCapacityUnitIds(PurchaseStorageCapacityUnitResponseBody::StorageCapacityUnitIds && storageCapacityUnitIds) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnitIds_, storageCapacityUnitIds) };


  protected:
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The IDs of the SCUs.
    shared_ptr<PurchaseStorageCapacityUnitResponseBody::StorageCapacityUnitIds> storageCapacityUnitIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
