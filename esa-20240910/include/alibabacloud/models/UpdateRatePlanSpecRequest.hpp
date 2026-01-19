// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERATEPLANSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERATEPLANSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateRatePlanSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRatePlanSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(TargetPlanCode, targetPlanCode_);
      DARABONBA_PTR_TO_JSON(TargetPlanName, targetPlanName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRatePlanSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(TargetPlanCode, targetPlanCode_);
      DARABONBA_PTR_FROM_JSON(TargetPlanName, targetPlanName_);
    };
    UpdateRatePlanSpecRequest() = default ;
    UpdateRatePlanSpecRequest(const UpdateRatePlanSpecRequest &) = default ;
    UpdateRatePlanSpecRequest(UpdateRatePlanSpecRequest &&) = default ;
    UpdateRatePlanSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRatePlanSpecRequest() = default ;
    UpdateRatePlanSpecRequest& operator=(const UpdateRatePlanSpecRequest &) = default ;
    UpdateRatePlanSpecRequest& operator=(UpdateRatePlanSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->chargeType_ == nullptr && this->instanceId_ == nullptr && this->orderType_ == nullptr && this->targetPlanCode_ == nullptr && this->targetPlanName_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline UpdateRatePlanSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline UpdateRatePlanSpecRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRatePlanSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline UpdateRatePlanSpecRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // targetPlanCode Field Functions 
    bool hasTargetPlanCode() const { return this->targetPlanCode_ != nullptr;};
    void deleteTargetPlanCode() { this->targetPlanCode_ = nullptr;};
    inline string getTargetPlanCode() const { DARABONBA_PTR_GET_DEFAULT(targetPlanCode_, "") };
    inline UpdateRatePlanSpecRequest& setTargetPlanCode(string targetPlanCode) { DARABONBA_PTR_SET_VALUE(targetPlanCode_, targetPlanCode) };


    // targetPlanName Field Functions 
    bool hasTargetPlanName() const { return this->targetPlanName_ != nullptr;};
    void deleteTargetPlanName() { this->targetPlanName_ = nullptr;};
    inline string getTargetPlanName() const { DARABONBA_PTR_GET_DEFAULT(targetPlanName_, "") };
    inline UpdateRatePlanSpecRequest& setTargetPlanName(string targetPlanName) { DARABONBA_PTR_SET_VALUE(targetPlanName_, targetPlanName) };


  protected:
    // Specifies whether to enable auto payment.
    shared_ptr<bool> autoPay_ {};
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> instanceId_ {};
    // The specification update type. Valid values:
    // 
    // *   DOWNGRADE
    // *   UPGRADE
    shared_ptr<string> orderType_ {};
    shared_ptr<string> targetPlanCode_ {};
    shared_ptr<string> targetPlanName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
