// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PURCHASERESERVEDINSTANCESOFFERINGRESPONSEBODY_HPP_
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
    class ReservedInstanceIdSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReservedInstanceIdSets& obj) { 
        DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, ReservedInstanceIdSets& obj) { 
        DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      };
      ReservedInstanceIdSets() = default ;
      ReservedInstanceIdSets(const ReservedInstanceIdSets &) = default ;
      ReservedInstanceIdSets(ReservedInstanceIdSets &&) = default ;
      ReservedInstanceIdSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReservedInstanceIdSets() = default ;
      ReservedInstanceIdSets& operator=(const ReservedInstanceIdSets &) = default ;
      ReservedInstanceIdSets& operator=(ReservedInstanceIdSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reservedInstanceId_ == nullptr; };
      // reservedInstanceId Field Functions 
      bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
      void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
      inline const vector<string> & getReservedInstanceId() const { DARABONBA_PTR_GET_CONST(reservedInstanceId_, vector<string>) };
      inline vector<string> getReservedInstanceId() { DARABONBA_PTR_GET(reservedInstanceId_, vector<string>) };
      inline ReservedInstanceIdSets& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
      inline ReservedInstanceIdSets& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


    protected:
      shared_ptr<vector<string>> reservedInstanceId_ {};
    };

    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->requestId_ == nullptr && this->reservedInstanceIdSets_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline PurchaseReservedInstancesOfferingResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurchaseReservedInstancesOfferingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedInstanceIdSets Field Functions 
    bool hasReservedInstanceIdSets() const { return this->reservedInstanceIdSets_ != nullptr;};
    void deleteReservedInstanceIdSets() { this->reservedInstanceIdSets_ = nullptr;};
    inline const PurchaseReservedInstancesOfferingResponseBody::ReservedInstanceIdSets & getReservedInstanceIdSets() const { DARABONBA_PTR_GET_CONST(reservedInstanceIdSets_, PurchaseReservedInstancesOfferingResponseBody::ReservedInstanceIdSets) };
    inline PurchaseReservedInstancesOfferingResponseBody::ReservedInstanceIdSets getReservedInstanceIdSets() { DARABONBA_PTR_GET(reservedInstanceIdSets_, PurchaseReservedInstancesOfferingResponseBody::ReservedInstanceIdSets) };
    inline PurchaseReservedInstancesOfferingResponseBody& setReservedInstanceIdSets(const PurchaseReservedInstancesOfferingResponseBody::ReservedInstanceIdSets & reservedInstanceIdSets) { DARABONBA_PTR_SET_VALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };
    inline PurchaseReservedInstancesOfferingResponseBody& setReservedInstanceIdSets(PurchaseReservedInstancesOfferingResponseBody::ReservedInstanceIdSets && reservedInstanceIdSets) { DARABONBA_PTR_SET_RVALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };


  protected:
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The IDs of the reserved instances.
    shared_ptr<PurchaseReservedInstancesOfferingResponseBody::ReservedInstanceIdSets> reservedInstanceIdSets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
