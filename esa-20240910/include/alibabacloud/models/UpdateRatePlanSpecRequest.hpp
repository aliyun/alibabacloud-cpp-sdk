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
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->chargeType_ != nullptr && this->instanceId_ != nullptr && this->orderType_ != nullptr && this->targetPlanCode_ != nullptr && this->targetPlanName_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline UpdateRatePlanSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline UpdateRatePlanSpecRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateRatePlanSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline UpdateRatePlanSpecRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // targetPlanCode Field Functions 
    bool hasTargetPlanCode() const { return this->targetPlanCode_ != nullptr;};
    void deleteTargetPlanCode() { this->targetPlanCode_ = nullptr;};
    inline string targetPlanCode() const { DARABONBA_PTR_GET_DEFAULT(targetPlanCode_, "") };
    inline UpdateRatePlanSpecRequest& setTargetPlanCode(string targetPlanCode) { DARABONBA_PTR_SET_VALUE(targetPlanCode_, targetPlanCode) };


    // targetPlanName Field Functions 
    bool hasTargetPlanName() const { return this->targetPlanName_ != nullptr;};
    void deleteTargetPlanName() { this->targetPlanName_ = nullptr;};
    inline string targetPlanName() const { DARABONBA_PTR_GET_DEFAULT(targetPlanName_, "") };
    inline UpdateRatePlanSpecRequest& setTargetPlanName(string targetPlanName) { DARABONBA_PTR_SET_VALUE(targetPlanName_, targetPlanName) };


  protected:
    // Specifies whether to enable auto payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    // The specification update type. Valid values:
    // 
    // *   DOWNGRADE
    // *   UPGRADE
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> targetPlanCode_ = nullptr;
    std::shared_ptr<string> targetPlanName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
