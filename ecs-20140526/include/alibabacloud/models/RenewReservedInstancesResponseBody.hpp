// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWRESERVEDINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RENEWRESERVEDINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RenewReservedInstancesResponseBodyReservedInstanceIdSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RenewReservedInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewReservedInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceIdSets, reservedInstanceIdSets_);
    };
    friend void from_json(const Darabonba::Json& j, RenewReservedInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceIdSets, reservedInstanceIdSets_);
    };
    RenewReservedInstancesResponseBody() = default ;
    RenewReservedInstancesResponseBody(const RenewReservedInstancesResponseBody &) = default ;
    RenewReservedInstancesResponseBody(RenewReservedInstancesResponseBody &&) = default ;
    RenewReservedInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewReservedInstancesResponseBody() = default ;
    RenewReservedInstancesResponseBody& operator=(const RenewReservedInstancesResponseBody &) = default ;
    RenewReservedInstancesResponseBody& operator=(RenewReservedInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderId_ == nullptr
        && return this->requestId_ == nullptr && return this->reservedInstanceIdSets_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline RenewReservedInstancesResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RenewReservedInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedInstanceIdSets Field Functions 
    bool hasReservedInstanceIdSets() const { return this->reservedInstanceIdSets_ != nullptr;};
    void deleteReservedInstanceIdSets() { this->reservedInstanceIdSets_ = nullptr;};
    inline const RenewReservedInstancesResponseBodyReservedInstanceIdSets & reservedInstanceIdSets() const { DARABONBA_PTR_GET_CONST(reservedInstanceIdSets_, RenewReservedInstancesResponseBodyReservedInstanceIdSets) };
    inline RenewReservedInstancesResponseBodyReservedInstanceIdSets reservedInstanceIdSets() { DARABONBA_PTR_GET(reservedInstanceIdSets_, RenewReservedInstancesResponseBodyReservedInstanceIdSets) };
    inline RenewReservedInstancesResponseBody& setReservedInstanceIdSets(const RenewReservedInstancesResponseBodyReservedInstanceIdSets & reservedInstanceIdSets) { DARABONBA_PTR_SET_VALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };
    inline RenewReservedInstancesResponseBody& setReservedInstanceIdSets(RenewReservedInstancesResponseBodyReservedInstanceIdSets && reservedInstanceIdSets) { DARABONBA_PTR_SET_RVALUE(reservedInstanceIdSets_, reservedInstanceIdSets) };


  protected:
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the reserved instances.
    std::shared_ptr<RenewReservedInstancesResponseBodyReservedInstanceIdSets> reservedInstanceIdSets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
