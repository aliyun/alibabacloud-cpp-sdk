// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICEGAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERATEPLANPRICEGAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeRatePlanPriceGapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRatePlanPriceGapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(TargetPlanCode, targetPlanCode_);
      DARABONBA_PTR_TO_JSON(TargetPlanName, targetPlanName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRatePlanPriceGapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(TargetPlanCode, targetPlanCode_);
      DARABONBA_PTR_FROM_JSON(TargetPlanName, targetPlanName_);
    };
    DescribeRatePlanPriceGapRequest() = default ;
    DescribeRatePlanPriceGapRequest(const DescribeRatePlanPriceGapRequest &) = default ;
    DescribeRatePlanPriceGapRequest(DescribeRatePlanPriceGapRequest &&) = default ;
    DescribeRatePlanPriceGapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRatePlanPriceGapRequest() = default ;
    DescribeRatePlanPriceGapRequest& operator=(const DescribeRatePlanPriceGapRequest &) = default ;
    DescribeRatePlanPriceGapRequest& operator=(DescribeRatePlanPriceGapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->orderType_ == nullptr && this->targetPlanCode_ == nullptr && this->targetPlanName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRatePlanPriceGapRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline DescribeRatePlanPriceGapRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // targetPlanCode Field Functions 
    bool hasTargetPlanCode() const { return this->targetPlanCode_ != nullptr;};
    void deleteTargetPlanCode() { this->targetPlanCode_ = nullptr;};
    inline string getTargetPlanCode() const { DARABONBA_PTR_GET_DEFAULT(targetPlanCode_, "") };
    inline DescribeRatePlanPriceGapRequest& setTargetPlanCode(string targetPlanCode) { DARABONBA_PTR_SET_VALUE(targetPlanCode_, targetPlanCode) };


    // targetPlanName Field Functions 
    bool hasTargetPlanName() const { return this->targetPlanName_ != nullptr;};
    void deleteTargetPlanName() { this->targetPlanName_ = nullptr;};
    inline string getTargetPlanName() const { DARABONBA_PTR_GET_DEFAULT(targetPlanName_, "") };
    inline DescribeRatePlanPriceGapRequest& setTargetPlanName(string targetPlanName) { DARABONBA_PTR_SET_VALUE(targetPlanName_, targetPlanName) };


  protected:
    // The target plan name. You can obtain this value from the [DescribeRatePlanPrice](~~DescribeRatePlanPrice~~) operation.
    shared_ptr<string> instanceId_ {};
    // The specification change type. Valid values:
    // - DOWNGRADE: downgrade.
    // - UPGRADE: upgrade.
    shared_ptr<string> orderType_ {};
    // The specification change type. Valid values:
    // - DOWNGRADE: downgrade.
    // - UPGRADE: upgrade.
    shared_ptr<string> targetPlanCode_ {};
    // The name of the target plan for the specification change.
    shared_ptr<string> targetPlanName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
