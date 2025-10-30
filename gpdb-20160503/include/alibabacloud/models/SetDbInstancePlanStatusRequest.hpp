// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDBINSTANCEPLANSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDBINSTANCEPLANSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class SetDBInstancePlanStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDBInstancePlanStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PlanStatus, planStatus_);
    };
    friend void from_json(const Darabonba::Json& j, SetDBInstancePlanStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PlanStatus, planStatus_);
    };
    SetDBInstancePlanStatusRequest() = default ;
    SetDBInstancePlanStatusRequest(const SetDBInstancePlanStatusRequest &) = default ;
    SetDBInstancePlanStatusRequest(SetDBInstancePlanStatusRequest &&) = default ;
    SetDBInstancePlanStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDBInstancePlanStatusRequest() = default ;
    SetDBInstancePlanStatusRequest& operator=(const SetDBInstancePlanStatusRequest &) = default ;
    SetDBInstancePlanStatusRequest& operator=(SetDBInstancePlanStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->ownerId_ == nullptr && return this->planId_ == nullptr && return this->planStatus_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline SetDBInstancePlanStatusRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetDBInstancePlanStatusRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline SetDBInstancePlanStatusRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planStatus Field Functions 
    bool hasPlanStatus() const { return this->planStatus_ != nullptr;};
    void deletePlanStatus() { this->planStatus_ = nullptr;};
    inline string planStatus() const { DARABONBA_PTR_GET_DEFAULT(planStatus_, "") };
    inline SetDBInstancePlanStatusRequest& setPlanStatus(string planStatus) { DARABONBA_PTR_SET_VALUE(planStatus_, planStatus) };


  protected:
    // The ID of the instance.
    // 
    // >  You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a specific region, including instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the plan.
    // 
    // >  You can call the [DescribeDBInstancePlans](https://help.aliyun.com/document_detail/449398.html) operation to query the details of plans, including plan IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> planId_ = nullptr;
    // Specifies whether to enable or disable the plan. Valid values:
    // 
    // *   **disable**: disables the plan.
    // *   **enable**: enables the plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> planStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
