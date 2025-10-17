// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyInstanceChargeTypeResponseBodyFeeOfInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyInstanceChargeTypeResponseBody() = default ;
    ModifyInstanceChargeTypeResponseBody(const ModifyInstanceChargeTypeResponseBody &) = default ;
    ModifyInstanceChargeTypeResponseBody(ModifyInstanceChargeTypeResponseBody &&) = default ;
    ModifyInstanceChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceChargeTypeResponseBody() = default ;
    ModifyInstanceChargeTypeResponseBody& operator=(const ModifyInstanceChargeTypeResponseBody &) = default ;
    ModifyInstanceChargeTypeResponseBody& operator=(ModifyInstanceChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feeOfInstances_ == nullptr
        && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // feeOfInstances Field Functions 
    bool hasFeeOfInstances() const { return this->feeOfInstances_ != nullptr;};
    void deleteFeeOfInstances() { this->feeOfInstances_ = nullptr;};
    inline const ModifyInstanceChargeTypeResponseBodyFeeOfInstances & feeOfInstances() const { DARABONBA_PTR_GET_CONST(feeOfInstances_, ModifyInstanceChargeTypeResponseBodyFeeOfInstances) };
    inline ModifyInstanceChargeTypeResponseBodyFeeOfInstances feeOfInstances() { DARABONBA_PTR_GET(feeOfInstances_, ModifyInstanceChargeTypeResponseBodyFeeOfInstances) };
    inline ModifyInstanceChargeTypeResponseBody& setFeeOfInstances(const ModifyInstanceChargeTypeResponseBodyFeeOfInstances & feeOfInstances) { DARABONBA_PTR_SET_VALUE(feeOfInstances_, feeOfInstances) };
    inline ModifyInstanceChargeTypeResponseBody& setFeeOfInstances(ModifyInstanceChargeTypeResponseBodyFeeOfInstances && feeOfInstances) { DARABONBA_PTR_SET_RVALUE(feeOfInstances_, feeOfInstances) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyInstanceChargeTypeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyInstanceChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the charges for the order.
    std::shared_ptr<ModifyInstanceChargeTypeResponseBodyFeeOfInstances> feeOfInstances_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
