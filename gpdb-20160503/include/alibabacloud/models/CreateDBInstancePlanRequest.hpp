// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCEPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCEPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateDBInstancePlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstancePlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlanConfig, planConfig_);
      DARABONBA_PTR_TO_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(PlanEndDate, planEndDate_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(PlanScheduleType, planScheduleType_);
      DARABONBA_PTR_TO_JSON(PlanStartDate, planStartDate_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstancePlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlanConfig, planConfig_);
      DARABONBA_PTR_FROM_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(PlanEndDate, planEndDate_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(PlanScheduleType, planScheduleType_);
      DARABONBA_PTR_FROM_JSON(PlanStartDate, planStartDate_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
    };
    CreateDBInstancePlanRequest() = default ;
    CreateDBInstancePlanRequest(const CreateDBInstancePlanRequest &) = default ;
    CreateDBInstancePlanRequest(CreateDBInstancePlanRequest &&) = default ;
    CreateDBInstancePlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstancePlanRequest() = default ;
    CreateDBInstancePlanRequest& operator=(const CreateDBInstancePlanRequest &) = default ;
    CreateDBInstancePlanRequest& operator=(CreateDBInstancePlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ownerId_ == nullptr && this->planConfig_ == nullptr && this->planDesc_ == nullptr && this->planEndDate_ == nullptr && this->planName_ == nullptr
        && this->planScheduleType_ == nullptr && this->planStartDate_ == nullptr && this->planType_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateDBInstancePlanRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBInstancePlanRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // planConfig Field Functions 
    bool hasPlanConfig() const { return this->planConfig_ != nullptr;};
    void deletePlanConfig() { this->planConfig_ = nullptr;};
    inline string getPlanConfig() const { DARABONBA_PTR_GET_DEFAULT(planConfig_, "") };
    inline CreateDBInstancePlanRequest& setPlanConfig(string planConfig) { DARABONBA_PTR_SET_VALUE(planConfig_, planConfig) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string getPlanDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline CreateDBInstancePlanRequest& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planEndDate Field Functions 
    bool hasPlanEndDate() const { return this->planEndDate_ != nullptr;};
    void deletePlanEndDate() { this->planEndDate_ = nullptr;};
    inline string getPlanEndDate() const { DARABONBA_PTR_GET_DEFAULT(planEndDate_, "") };
    inline CreateDBInstancePlanRequest& setPlanEndDate(string planEndDate) { DARABONBA_PTR_SET_VALUE(planEndDate_, planEndDate) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline CreateDBInstancePlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planScheduleType Field Functions 
    bool hasPlanScheduleType() const { return this->planScheduleType_ != nullptr;};
    void deletePlanScheduleType() { this->planScheduleType_ = nullptr;};
    inline string getPlanScheduleType() const { DARABONBA_PTR_GET_DEFAULT(planScheduleType_, "") };
    inline CreateDBInstancePlanRequest& setPlanScheduleType(string planScheduleType) { DARABONBA_PTR_SET_VALUE(planScheduleType_, planScheduleType) };


    // planStartDate Field Functions 
    bool hasPlanStartDate() const { return this->planStartDate_ != nullptr;};
    void deletePlanStartDate() { this->planStartDate_ = nullptr;};
    inline string getPlanStartDate() const { DARABONBA_PTR_GET_DEFAULT(planStartDate_, "") };
    inline CreateDBInstancePlanRequest& setPlanStartDate(string planStartDate) { DARABONBA_PTR_SET_VALUE(planStartDate_, planStartDate) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline CreateDBInstancePlanRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances within a region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The execution information of the plan. Specify the parameter in the JSON format. The parameter value varies based on the values of **PlanType** and **PlanScheduleType**. The following section describes the PlanConfig parameter.
    // 
    // This parameter is required.
    shared_ptr<string> planConfig_ {};
    // The description of the plan.
    shared_ptr<string> planDesc_ {};
    // The end time of the plan. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC. The end time must be later than the start time.
    // 
    // > 
    // 
    // *   This parameter must be specified only when **PlanScheduleType** is set to **Regular**.
    // 
    // *   If you do not specify this parameter, the plan stops until the plan is deleted.
    shared_ptr<string> planEndDate_ {};
    // The name of the plan.
    // 
    // This parameter is required.
    shared_ptr<string> planName_ {};
    // The execution mode of the plan. Valid values:
    // 
    // *   **Postpone**: The plan is executed later.
    // *   **Regular**: The plan is executed periodically.
    // 
    // This parameter is required.
    shared_ptr<string> planScheduleType_ {};
    // The start time of the plan. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > 
    // 
    // *   This parameter must be specified only when **PlanScheduleType** is set to **Regular**.
    // 
    // *   If you do not specify this parameter, the current time is used.
    shared_ptr<string> planStartDate_ {};
    // The type of the plan. Valid values:
    // 
    // *   **PauseResume**: pauses and resumes an instance.
    // *   **Resize**: changes the number of compute nodes.
    // *   **ModifySpec**: changes compute node specifications.
    // 
    // > - You can specify the value to ModifySpec only for instances in elastic storage mode.
    // >- You can specify the value to ModifySpec only for instances in elastic storage mode.
    // 
    // This parameter is required.
    shared_ptr<string> planType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
