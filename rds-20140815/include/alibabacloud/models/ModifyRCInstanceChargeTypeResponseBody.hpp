// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCECHARGETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class FeeOfInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FeeOfInstances& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(Fee, fee_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, FeeOfInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(Fee, fee_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      FeeOfInstances() = default ;
      FeeOfInstances(const FeeOfInstances &) = default ;
      FeeOfInstances(FeeOfInstances &&) = default ;
      FeeOfInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FeeOfInstances() = default ;
      FeeOfInstances& operator=(const FeeOfInstances &) = default ;
      FeeOfInstances& operator=(FeeOfInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currency_ == nullptr
        && this->fee_ == nullptr && this->instanceId_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline FeeOfInstances& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // fee Field Functions 
      bool hasFee() const { return this->fee_ != nullptr;};
      void deleteFee() { this->fee_ = nullptr;};
      inline string getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
      inline FeeOfInstances& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline FeeOfInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The reserved parameter. This parameter is not supported.
      shared_ptr<string> currency_ {};
      // The reserved parameter. This parameter is not supported.
      shared_ptr<string> fee_ {};
      // The reserved parameter. This parameter is not supported.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->expiredTime_ == nullptr && this->feeOfInstances_ == nullptr && this->instanceIds_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ModifyRCInstanceChargeTypeResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline const vector<string> & getExpiredTime() const { DARABONBA_PTR_GET_CONST(expiredTime_, vector<string>) };
    inline vector<string> getExpiredTime() { DARABONBA_PTR_GET(expiredTime_, vector<string>) };
    inline ModifyRCInstanceChargeTypeResponseBody& setExpiredTime(const vector<string> & expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };
    inline ModifyRCInstanceChargeTypeResponseBody& setExpiredTime(vector<string> && expiredTime) { DARABONBA_PTR_SET_RVALUE(expiredTime_, expiredTime) };


    // feeOfInstances Field Functions 
    bool hasFeeOfInstances() const { return this->feeOfInstances_ != nullptr;};
    void deleteFeeOfInstances() { this->feeOfInstances_ = nullptr;};
    inline const vector<ModifyRCInstanceChargeTypeResponseBody::FeeOfInstances> & getFeeOfInstances() const { DARABONBA_PTR_GET_CONST(feeOfInstances_, vector<ModifyRCInstanceChargeTypeResponseBody::FeeOfInstances>) };
    inline vector<ModifyRCInstanceChargeTypeResponseBody::FeeOfInstances> getFeeOfInstances() { DARABONBA_PTR_GET(feeOfInstances_, vector<ModifyRCInstanceChargeTypeResponseBody::FeeOfInstances>) };
    inline ModifyRCInstanceChargeTypeResponseBody& setFeeOfInstances(const vector<ModifyRCInstanceChargeTypeResponseBody::FeeOfInstances> & feeOfInstances) { DARABONBA_PTR_SET_VALUE(feeOfInstances_, feeOfInstances) };
    inline ModifyRCInstanceChargeTypeResponseBody& setFeeOfInstances(vector<ModifyRCInstanceChargeTypeResponseBody::FeeOfInstances> && feeOfInstances) { DARABONBA_PTR_SET_RVALUE(feeOfInstances_, feeOfInstances) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyRCInstanceChargeTypeResponseBody& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyRCInstanceChargeTypeResponseBody& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ModifyRCInstanceChargeTypeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyRCInstanceChargeTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The billing method.
    // *   **POSTPAY**: pay-as-you-go.
    // *   **PREPAY**: subscription.
    shared_ptr<string> chargeType_ {};
    // The time when the instance expires.
    // >  If you change the billing method from subscription to pay-as-you-go, this parameter is not returned.
    shared_ptr<vector<string>> expiredTime_ {};
    // The reserved parameter. This parameter is not supported.
    shared_ptr<vector<ModifyRCInstanceChargeTypeResponseBody::FeeOfInstances>> feeOfInstances_ {};
    // The list of instance IDs.
    shared_ptr<vector<string>> instanceIds_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
