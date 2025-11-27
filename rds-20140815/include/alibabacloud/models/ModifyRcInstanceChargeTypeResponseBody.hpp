// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCInstanceChargeTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCInstanceChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCInstanceChargeTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(FeeOfInstances, feeOfInstances_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyRCInstanceChargeTypeResponseBody() = default ;
    ModifyRCInstanceChargeTypeResponseBody(const ModifyRCInstanceChargeTypeResponseBody &) = default ;
    ModifyRCInstanceChargeTypeResponseBody(ModifyRCInstanceChargeTypeResponseBody &&) = default ;
    ModifyRCInstanceChargeTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCInstanceChargeTypeResponseBody() = default ;
    ModifyRCInstanceChargeTypeResponseBody& operator=(const ModifyRCInstanceChargeTypeResponseBody &) = default ;
    ModifyRCInstanceChargeTypeResponseBody& operator=(ModifyRCInstanceChargeTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->expiredTime_ == nullptr && return this->feeOfInstances_ == nullptr && return this->instanceIds_ == nullptr && return this->orderId_ == nullptr && return this->requestId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ModifyRCInstanceChargeTypeResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline const vector<string> & expiredTime() const { DARABONBA_PTR_GET_CONST(expiredTime_, vector<string>) };
    inline vector<string> expiredTime() { DARABONBA_PTR_GET(expiredTime_, vector<string>) };
    inline ModifyRCInstanceChargeTypeResponseBody& setExpiredTime(const vector<string> & expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };
    inline ModifyRCInstanceChargeTypeResponseBody& setExpiredTime(vector<string> && expiredTime) { DARABONBA_PTR_SET_RVALUE(expiredTime_, expiredTime) };


    // feeOfInstances Field Functions 
    bool hasFeeOfInstances() const { return this->feeOfInstances_ != nullptr;};
    void deleteFeeOfInstances() { this->feeOfInstances_ = nullptr;};
    inline const vector<ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances> & feeOfInstances() const { DARABONBA_PTR_GET_CONST(feeOfInstances_, vector<ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances>) };
    inline vector<ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances> feeOfInstances() { DARABONBA_PTR_GET(feeOfInstances_, vector<ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances>) };
    inline ModifyRCInstanceChargeTypeResponseBody& setFeeOfInstances(const vector<ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances> & feeOfInstances) { DARABONBA_PTR_SET_VALUE(feeOfInstances_, feeOfInstances) };
    inline ModifyRCInstanceChargeTypeResponseBody& setFeeOfInstances(vector<ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances> && feeOfInstances) { DARABONBA_PTR_SET_RVALUE(feeOfInstances_, feeOfInstances) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyRCInstanceChargeTypeResponseBody& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyRCInstanceChargeTypeResponseBody& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyRCInstanceChargeTypeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyRCInstanceChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The billing method.
    // *   **POSTPAY**: pay-as-you-go.
    // *   **PREPAY**: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The time when the instance expires.
    // >  If you change the billing method from subscription to pay-as-you-go, this parameter is not returned.
    std::shared_ptr<vector<string>> expiredTime_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<vector<ModifyRCInstanceChargeTypeResponseBodyFeeOfInstances>> feeOfInstances_ = nullptr;
    // The list of instance IDs.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
