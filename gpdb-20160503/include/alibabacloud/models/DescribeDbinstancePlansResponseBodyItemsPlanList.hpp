// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSRESPONSEBODYITEMSPLANLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSRESPONSEBODYITEMSPLANLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancePlansResponseBodyItemsPlanList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePlansResponseBodyItemsPlanList& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(PlanConfig, planConfig_);
      DARABONBA_PTR_TO_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(PlanEndDate, planEndDate_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(PlanScheduleType, planScheduleType_);
      DARABONBA_PTR_TO_JSON(PlanStartDate, planStartDate_);
      DARABONBA_PTR_TO_JSON(PlanStatus, planStatus_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePlansResponseBodyItemsPlanList& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(PlanConfig, planConfig_);
      DARABONBA_PTR_FROM_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(PlanEndDate, planEndDate_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(PlanScheduleType, planScheduleType_);
      DARABONBA_PTR_FROM_JSON(PlanStartDate, planStartDate_);
      DARABONBA_PTR_FROM_JSON(PlanStatus, planStatus_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
    };
    DescribeDBInstancePlansResponseBodyItemsPlanList() = default ;
    DescribeDBInstancePlansResponseBodyItemsPlanList(const DescribeDBInstancePlansResponseBodyItemsPlanList &) = default ;
    DescribeDBInstancePlansResponseBodyItemsPlanList(DescribeDBInstancePlansResponseBodyItemsPlanList &&) = default ;
    DescribeDBInstancePlansResponseBodyItemsPlanList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePlansResponseBodyItemsPlanList() = default ;
    DescribeDBInstancePlansResponseBodyItemsPlanList& operator=(const DescribeDBInstancePlansResponseBodyItemsPlanList &) = default ;
    DescribeDBInstancePlansResponseBodyItemsPlanList& operator=(DescribeDBInstancePlansResponseBodyItemsPlanList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->planConfig_ != nullptr && this->planDesc_ != nullptr && this->planEndDate_ != nullptr && this->planId_ != nullptr && this->planName_ != nullptr
        && this->planScheduleType_ != nullptr && this->planStartDate_ != nullptr && this->planStatus_ != nullptr && this->planType_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // planConfig Field Functions 
    bool hasPlanConfig() const { return this->planConfig_ != nullptr;};
    void deletePlanConfig() { this->planConfig_ = nullptr;};
    inline string planConfig() const { DARABONBA_PTR_GET_DEFAULT(planConfig_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanConfig(string planConfig) { DARABONBA_PTR_SET_VALUE(planConfig_, planConfig) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string planDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planEndDate Field Functions 
    bool hasPlanEndDate() const { return this->planEndDate_ != nullptr;};
    void deletePlanEndDate() { this->planEndDate_ = nullptr;};
    inline string planEndDate() const { DARABONBA_PTR_GET_DEFAULT(planEndDate_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanEndDate(string planEndDate) { DARABONBA_PTR_SET_VALUE(planEndDate_, planEndDate) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planScheduleType Field Functions 
    bool hasPlanScheduleType() const { return this->planScheduleType_ != nullptr;};
    void deletePlanScheduleType() { this->planScheduleType_ = nullptr;};
    inline string planScheduleType() const { DARABONBA_PTR_GET_DEFAULT(planScheduleType_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanScheduleType(string planScheduleType) { DARABONBA_PTR_SET_VALUE(planScheduleType_, planScheduleType) };


    // planStartDate Field Functions 
    bool hasPlanStartDate() const { return this->planStartDate_ != nullptr;};
    void deletePlanStartDate() { this->planStartDate_ = nullptr;};
    inline string planStartDate() const { DARABONBA_PTR_GET_DEFAULT(planStartDate_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanStartDate(string planStartDate) { DARABONBA_PTR_SET_VALUE(planStartDate_, planStartDate) };


    // planStatus Field Functions 
    bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
    void deletePlanStatus() { this->planStatus_ = nullptr;};
    inline string planStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline DescribeDBInstancePlansResponseBodyItemsPlanList& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


  protected:
    // The instance ID.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The execution information of the plan.
    std::shared_ptr<string> planConfig_ = nullptr;
    // The description of the plan.
    std::shared_ptr<string> planDesc_ = nullptr;
    // The end time of the plan. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > 
    // 
    // *   This parameter is returned only for the plans that are periodically executed.
    // 
    // *   If you did not specify the end time when you created the plan, this parameter is not returned.
    std::shared_ptr<string> planEndDate_ = nullptr;
    // The plan ID.
    std::shared_ptr<string> planId_ = nullptr;
    // The name of the plan.
    std::shared_ptr<string> planName_ = nullptr;
    // The execution mode of the plan. Valid values:
    // 
    // *   **Postpone**: The plan is executed later.
    // *   **Regular**: The plan is executed periodically.
    std::shared_ptr<string> planScheduleType_ = nullptr;
    // The start time of the plan. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    // 
    // > 
    // 
    // *   This parameter is returned only for the plans that are periodically executed.
    // 
    // *   If you did not specify the start time when you created the plan, the current time is returned.
    std::shared_ptr<string> planStartDate_ = nullptr;
    // The status of the plan. Valid values:
    // 
    // *   **active**
    // *   **cancel**
    // *   **deleted**
    // *   **finished**
    std::shared_ptr<string> planStatus_ = nullptr;
    // The type of the plan. Valid values:
    // 
    // *   **PauseResume**: pauses and resumes an instance.
    // *   **Resize**: scales an instance.
    std::shared_ptr<string> planType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
