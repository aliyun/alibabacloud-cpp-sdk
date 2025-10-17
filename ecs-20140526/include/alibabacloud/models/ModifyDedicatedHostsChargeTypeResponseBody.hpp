// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTSCHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDedicatedHostsChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedHostsChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedHostsChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDedicatedHostsChargeTypeResponseBody() = default ;
    ModifyDedicatedHostsChargeTypeResponseBody(const ModifyDedicatedHostsChargeTypeResponseBody &) = default ;
    ModifyDedicatedHostsChargeTypeResponseBody(ModifyDedicatedHostsChargeTypeResponseBody &&) = default ;
    ModifyDedicatedHostsChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedHostsChargeTypeResponseBody() = default ;
    ModifyDedicatedHostsChargeTypeResponseBody& operator=(const ModifyDedicatedHostsChargeTypeResponseBody &) = default ;
    ModifyDedicatedHostsChargeTypeResponseBody& operator=(ModifyDedicatedHostsChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feeOfInstances_ == nullptr
        && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // feeOfInstances Field Functions 
    bool hasFeeOfInstances() const { return this->feeOfInstances_ != nullptr;};
    void deleteFeeOfInstances() { this->feeOfInstances_ = nullptr;};
    inline const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances & feeOfInstances() const { DARABONBA_PTR_GET_CONST(feeOfInstances_, ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances) };
    inline ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances feeOfInstances() { DARABONBA_PTR_GET(feeOfInstances_, ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances) };
    inline ModifyDedicatedHostsChargeTypeResponseBody& setFeeOfInstances(const ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances & feeOfInstances) { DARABONBA_PTR_SET_VALUE(feeOfInstances_, feeOfInstances) };
    inline ModifyDedicatedHostsChargeTypeResponseBody& setFeeOfInstances(ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances && feeOfInstances) { DARABONBA_PTR_SET_RVALUE(feeOfInstances_, feeOfInstances) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyDedicatedHostsChargeTypeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDedicatedHostsChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the charges for the order.
    std::shared_ptr<ModifyDedicatedHostsChargeTypeResponseBodyFeeOfInstances> feeOfInstances_ = nullptr;
    // The ID of the order. This is returned only when the payment method is changed to subscription.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
