// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASESTORAGECAPACITYUNITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PURCHASESTORAGECAPACITYUNITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds.hpp>
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
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->requestId_ == nullptr && return this->storageCapacityUnitIds_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline PurchaseStorageCapacityUnitResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurchaseStorageCapacityUnitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageCapacityUnitIds Field Functions 
    bool hasStorageCapacityUnitIds() const { return this->storageCapacityUnitIds_ != nullptr;};
    void deleteStorageCapacityUnitIds() { this->storageCapacityUnitIds_ = nullptr;};
    inline const PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds & storageCapacityUnitIds() const { DARABONBA_PTR_GET_CONST(storageCapacityUnitIds_, PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds) };
    inline PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds storageCapacityUnitIds() { DARABONBA_PTR_GET(storageCapacityUnitIds_, PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds) };
    inline PurchaseStorageCapacityUnitResponseBody& setStorageCapacityUnitIds(const PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds & storageCapacityUnitIds) { DARABONBA_PTR_SET_VALUE(storageCapacityUnitIds_, storageCapacityUnitIds) };
    inline PurchaseStorageCapacityUnitResponseBody& setStorageCapacityUnitIds(PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds && storageCapacityUnitIds) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnitIds_, storageCapacityUnitIds) };


  protected:
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the SCUs.
    std::shared_ptr<PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds> storageCapacityUnitIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
