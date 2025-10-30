// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDBINSTANCEPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDBINSTANCEPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class UpdateDBInstancePlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDBInstancePlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlanConfig, planConfig_);
      DARABONBA_PTR_TO_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(PlanEndDate, planEndDate_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(PlanStartDate, planStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDBInstancePlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlanConfig, planConfig_);
      DARABONBA_PTR_FROM_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(PlanEndDate, planEndDate_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(PlanStartDate, planStartDate_);
    };
    UpdateDBInstancePlanRequest() = default ;
    UpdateDBInstancePlanRequest(const UpdateDBInstancePlanRequest &) = default ;
    UpdateDBInstancePlanRequest(UpdateDBInstancePlanRequest &&) = default ;
    UpdateDBInstancePlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDBInstancePlanRequest() = default ;
    UpdateDBInstancePlanRequest& operator=(const UpdateDBInstancePlanRequest &) = default ;
    UpdateDBInstancePlanRequest& operator=(UpdateDBInstancePlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->planConfig_ == nullptr && return this->planDesc_ == nullptr && return this->planEndDate_ == nullptr && return this->planId_ == nullptr
        && return this->planName_ == nullptr && return this->planStartDate_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpdateDBInstancePlanRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateDBInstancePlanRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // planConfig Field Functions 
    bool hasPlanConfig() const { return this->planConfig_ != nullptr;};
    void deletePlanConfig() { this->planConfig_ = nullptr;};
    inline string planConfig() const { DARABONBA_PTR_GET_DEFAULT(planConfig_, "") };
    inline UpdateDBInstancePlanRequest& setPlanConfig(string planConfig) { DARABONBA_PTR_SET_VALUE(planConfig_, planConfig) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string planDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline UpdateDBInstancePlanRequest& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planEndDate Field Functions 
    bool hasPlanEndDate() const { return this->planEndDate_ != nullptr;};
    void deletePlanEndDate() { this->planEndDate_ = nullptr;};
    inline string planEndDate() const { DARABONBA_PTR_GET_DEFAULT(planEndDate_, "") };
    inline UpdateDBInstancePlanRequest& setPlanEndDate(string planEndDate) { DARABONBA_PTR_SET_VALUE(planEndDate_, planEndDate) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline UpdateDBInstancePlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline UpdateDBInstancePlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planStartDate Field Functions 
    bool hasPlanStartDate() const { return this->planStartDate_ != nullptr;};
    void deletePlanStartDate() { this->planStartDate_ = nullptr;};
    inline string planStartDate() const { DARABONBA_PTR_GET_DEFAULT(planStartDate_, "") };
    inline UpdateDBInstancePlanRequest& setPlanStartDate(string planStartDate) { DARABONBA_PTR_SET_VALUE(planStartDate_, planStartDate) };


  protected:
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The execution information of the plan. Specify the parameter in the JSON format. The parameter value varies based on the values of **PlanType** and **PlanScheduleType**. The following section describes the PlanConfig parameter.
    std::shared_ptr<string> planConfig_ = nullptr;
    // The description of the plan.
    std::shared_ptr<string> planDesc_ = nullptr;
    // The end time of the plan. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC. The end time must be later than the start time.
    // 
    // > 
    // 
    // *   This parameter must be specified only for **periodically executed** plans.
    // 
    // *   If you do not specify this parameter, the plan stops until the plan is deleted.
    std::shared_ptr<string> planEndDate_ = nullptr;
    // The ID of the plan.
    // 
    // >  You can call the [DescribeDBInstancePlans](https://help.aliyun.com/document_detail/449398.html) operation to query the details of plans, including plan IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> planId_ = nullptr;
    // The name of the plan.
    std::shared_ptr<string> planName_ = nullptr;
    // The start time of the plan. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > 
    // 
    // *   This parameter must be specified only for **periodically executed** plans.
    // 
    // *   If you do not specify this parameter, the current time is used.
    std::shared_ptr<string> planStartDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
