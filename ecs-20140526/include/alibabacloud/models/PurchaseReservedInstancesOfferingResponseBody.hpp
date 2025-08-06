// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class PurchaseReservedInstancesOfferingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseReservedInstancesOfferingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceIdSets, reservedInstanceIdSets_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseReservedInstancesOfferingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceIdSets, reservedInstanceIdSets_);
    };
    PurchaseReservedInstancesOfferingResponseBody() = default ;
    PurchaseReservedInstancesOfferingResponseBody(const PurchaseReservedInstancesOfferingResponseBody &) = default ;
    PurchaseReservedInstancesOfferingResponseBody(PurchaseReservedInstancesOfferingResponseBody &&) = default ;
    PurchaseReservedInstancesOfferingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseReservedInstancesOfferingResponseBody() = default ;
    PurchaseReservedInstancesOfferingResponseBody& operator=(const PurchaseReservedInstancesOfferingResponseBody &) = default ;
    PurchaseReservedInstancesOfferingResponseBody& operator=(PurchaseReservedInstancesOfferingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->requestId_ != nullptr && this->reservedInstanceIdSets_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline PurchaseReservedInstancesOfferingResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurchaseReservedInstancesOfferingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedInstanceIdSets Field Functions 
    bool hasReservedInstanceIdSets() const { return this->reservedInstanceIdSets_ != nullptr;};
    void deleteReservedInstanceIdSets() { this->reservedInstanceIdSets_ = nullptr;};
    inline const PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets & reservedInstanceIdSets() const { DARABONBA_PTR_GET_CONST(reservedInstanceIdSets_, PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets) };
    inline PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets reservedInstanceIdSets() { DARABONBA_PTR_GET(reservedInstanceIdSets_, PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets) };
    inline PurchaseReservedInstancesOfferingResponseBody& setReservedInstanceIdSets(const PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets & reservedInstanceIdSets) { DARABONBA_PTR_SET_VALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };
    inline PurchaseReservedInstancesOfferingResponseBody& setReservedInstanceIdSets(PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets && reservedInstanceIdSets) { DARABONBA_PTR_SET_RVALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };


  protected:
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the reserved instances.
    std::shared_ptr<PurchaseReservedInstancesOfferingResponseBodyReservedInstanceIdSets> reservedInstanceIdSets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
