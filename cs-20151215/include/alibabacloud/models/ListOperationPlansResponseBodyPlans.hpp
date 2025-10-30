// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPLANSRESPONSEBODYPLANS_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPLANSRESPONSEBODYPLANS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListOperationPlansResponseBodyPlans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationPlansResponseBodyPlans& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(plan_id, planId_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(target_id, targetId_);
      DARABONBA_PTR_TO_JSON(target_type, targetType_);
      DARABONBA_PTR_TO_JSON(task_id, taskId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationPlansResponseBodyPlans& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(plan_id, planId_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(target_id, targetId_);
      DARABONBA_PTR_FROM_JSON(target_type, targetType_);
      DARABONBA_PTR_FROM_JSON(task_id, taskId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListOperationPlansResponseBodyPlans() = default ;
    ListOperationPlansResponseBodyPlans(const ListOperationPlansResponseBodyPlans &) = default ;
    ListOperationPlansResponseBodyPlans(ListOperationPlansResponseBodyPlans &&) = default ;
    ListOperationPlansResponseBodyPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationPlansResponseBodyPlans() = default ;
    ListOperationPlansResponseBodyPlans& operator=(const ListOperationPlansResponseBodyPlans &) = default ;
    ListOperationPlansResponseBodyPlans& operator=(ListOperationPlansResponseBodyPlans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->created_ == nullptr && return this->endTime_ == nullptr && return this->planId_ == nullptr && return this->startTime_ == nullptr && return this->state_ == nullptr
        && return this->targetId_ == nullptr && return this->targetType_ == nullptr && return this->taskId_ == nullptr && return this->type_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListOperationPlansResponseBodyPlans& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline ListOperationPlansResponseBodyPlans& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListOperationPlansResponseBodyPlans& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ListOperationPlansResponseBodyPlans& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListOperationPlansResponseBodyPlans& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListOperationPlansResponseBodyPlans& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ListOperationPlansResponseBodyPlans& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListOperationPlansResponseBodyPlans& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListOperationPlansResponseBodyPlans& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListOperationPlansResponseBodyPlans& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The time when the operation plan was created.
    std::shared_ptr<string> created_ = nullptr;
    // The expected end time of the plan.
    std::shared_ptr<string> endTime_ = nullptr;
    // The operation plan ID.
    std::shared_ptr<string> planId_ = nullptr;
    // The expected start time of the plan.
    std::shared_ptr<string> startTime_ = nullptr;
    // The plan status. Valid values:
    // 
    // *   scheduled
    // *   Canceled
    std::shared_ptr<string> state_ = nullptr;
    // The target ID.
    std::shared_ptr<string> targetId_ = nullptr;
    // The target type.
    std::shared_ptr<string> targetType_ = nullptr;
    // The ID of the task generated by the execution plan.
    std::shared_ptr<string> taskId_ = nullptr;
    // The plan type. Valid values:
    // 
    // *   cluster_upgrade
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
