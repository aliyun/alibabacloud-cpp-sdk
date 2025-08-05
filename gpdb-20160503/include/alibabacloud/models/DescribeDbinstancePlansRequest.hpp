// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstancePlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlanCreateDate, planCreateDate_);
      DARABONBA_PTR_TO_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanScheduleType, planScheduleType_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlanCreateDate, planCreateDate_);
      DARABONBA_PTR_FROM_JSON(PlanDesc, planDesc_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanScheduleType, planScheduleType_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
    };
    DescribeDBInstancePlansRequest() = default ;
    DescribeDBInstancePlansRequest(const DescribeDBInstancePlansRequest &) = default ;
    DescribeDBInstancePlansRequest(DescribeDBInstancePlansRequest &&) = default ;
    DescribeDBInstancePlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePlansRequest() = default ;
    DescribeDBInstancePlansRequest& operator=(const DescribeDBInstancePlansRequest &) = default ;
    DescribeDBInstancePlansRequest& operator=(DescribeDBInstancePlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->ownerId_ != nullptr && this->planCreateDate_ != nullptr && this->planDesc_ != nullptr && this->planId_ != nullptr && this->planScheduleType_ != nullptr
        && this->planType_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancePlansRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDBInstancePlansRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // planCreateDate Field Functions 
    bool hasPlanCreateDate() const { return this->planCreateDate_ != nullptr;};
    void deletePlanCreateDate() { this->planCreateDate_ = nullptr;};
    inline string planCreateDate() const { DARABONBA_PTR_GET_DEFAULT(planCreateDate_, "") };
    inline DescribeDBInstancePlansRequest& setPlanCreateDate(string planCreateDate) { DARABONBA_PTR_SET_VALUE(planCreateDate_, planCreateDate) };


    // planDesc Field Functions 
    bool hasPlanDesc() const { return this->planDesc_ != nullptr;};
    void deletePlanDesc() { this->planDesc_ = nullptr;};
    inline string planDesc() const { DARABONBA_PTR_GET_DEFAULT(planDesc_, "") };
    inline DescribeDBInstancePlansRequest& setPlanDesc(string planDesc) { DARABONBA_PTR_SET_VALUE(planDesc_, planDesc) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DescribeDBInstancePlansRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planScheduleType Field Functions 
    bool hasPlanScheduleType() const { return this->planScheduleType_ != nullptr;};
    void deletePlanScheduleType() { this->planScheduleType_ = nullptr;};
    inline string planScheduleType() const { DARABONBA_PTR_GET_DEFAULT(planScheduleType_, "") };
    inline DescribeDBInstancePlansRequest& setPlanScheduleType(string planScheduleType) { DARABONBA_PTR_SET_VALUE(planScheduleType_, planScheduleType) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string planType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline DescribeDBInstancePlansRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


  protected:
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the information about all AnalyticDB for PostgreSQL instances within a region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The time that is used to filter plans. If you specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format, the plans that are created before this time are returned. The time must be in UTC. If you do not specify this parameter, all plans are returned.
    std::shared_ptr<string> planCreateDate_ = nullptr;
    // The description of the plan.
    std::shared_ptr<string> planDesc_ = nullptr;
    // The plan ID.
    // 
    // > You can call the [DescribeDBInstancePlans](https://help.aliyun.com/document_detail/449398.html) operation to query the information about plans, including plan IDs.
    std::shared_ptr<string> planId_ = nullptr;
    // The execution mode of the plan. Valid values:
    // 
    // *   **Postpone**: The plan is executed later.
    // *   **Regular**: The plan is executed periodically.
    std::shared_ptr<string> planScheduleType_ = nullptr;
    // The type of the plan. Valid values:
    // 
    // *   **PauseResume**: pauses and resumes an instance.
    // *   **Resize**: scales an instance.
    // *   **ModifySpec**: changes compute node specifications.
    std::shared_ptr<string> planType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
