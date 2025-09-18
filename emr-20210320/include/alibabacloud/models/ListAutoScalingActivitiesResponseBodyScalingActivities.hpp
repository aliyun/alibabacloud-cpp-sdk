// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIES_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODYSCALINGACTIVITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListAutoScalingActivitiesResponseBodyScalingActivities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingActivitiesResponseBodyScalingActivities& obj) { 
      DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
      DARABONBA_PTR_TO_JSON(ActivityState, activityState_);
      DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExpectNum, expectNum_);
      DARABONBA_PTR_TO_JSON(InstanceTypeDetails, instanceTypeDetails_);
      DARABONBA_PTR_TO_JSON(InstanceTypeToNum, instanceTypeToNum_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingActivitiesResponseBodyScalingActivities& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
      DARABONBA_PTR_FROM_JSON(ActivityState, activityState_);
      DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExpectNum, expectNum_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeDetails, instanceTypeDetails_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeToNum, instanceTypeToNum_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListAutoScalingActivitiesResponseBodyScalingActivities() = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivities(const ListAutoScalingActivitiesResponseBodyScalingActivities &) = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivities(ListAutoScalingActivitiesResponseBodyScalingActivities &&) = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingActivitiesResponseBodyScalingActivities() = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivities& operator=(const ListAutoScalingActivitiesResponseBodyScalingActivities &) = default ;
    ListAutoScalingActivitiesResponseBodyScalingActivities& operator=(ListAutoScalingActivitiesResponseBodyScalingActivities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activityId_ != nullptr
        && this->activityState_ != nullptr && this->activityType_ != nullptr && this->clusterId_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr
        && this->expectNum_ != nullptr && this->instanceTypeDetails_ != nullptr && this->instanceTypeToNum_ != nullptr && this->nodeGroupId_ != nullptr && this->nodeGroupName_ != nullptr
        && this->operationId_ != nullptr && this->policyType_ != nullptr && this->ruleName_ != nullptr && this->startTime_ != nullptr; };
    // activityId Field Functions 
    bool hasActivityId() const { return this->activityId_ != nullptr;};
    void deleteActivityId() { this->activityId_ = nullptr;};
    inline string activityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


    // activityState Field Functions 
    bool hasActivityState() const { return this->activityState_ != nullptr;};
    void deleteActivityState() { this->activityState_ = nullptr;};
    inline string activityState() const { DARABONBA_PTR_GET_DEFAULT(activityState_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setActivityState(string activityState) { DARABONBA_PTR_SET_VALUE(activityState_, activityState) };


    // activityType Field Functions 
    bool hasActivityType() const { return this->activityType_ != nullptr;};
    void deleteActivityType() { this->activityType_ = nullptr;};
    inline string activityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // expectNum Field Functions 
    bool hasExpectNum() const { return this->expectNum_ != nullptr;};
    void deleteExpectNum() { this->expectNum_ = nullptr;};
    inline int32_t expectNum() const { DARABONBA_PTR_GET_DEFAULT(expectNum_, 0) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setExpectNum(int32_t expectNum) { DARABONBA_PTR_SET_VALUE(expectNum_, expectNum) };


    // instanceTypeDetails Field Functions 
    bool hasInstanceTypeDetails() const { return this->instanceTypeDetails_ != nullptr;};
    void deleteInstanceTypeDetails() { this->instanceTypeDetails_ = nullptr;};
    inline const vector<Models::ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails> & instanceTypeDetails() const { DARABONBA_PTR_GET_CONST(instanceTypeDetails_, vector<Models::ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails>) };
    inline vector<Models::ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails> instanceTypeDetails() { DARABONBA_PTR_GET(instanceTypeDetails_, vector<Models::ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails>) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setInstanceTypeDetails(const vector<Models::ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails> & instanceTypeDetails) { DARABONBA_PTR_SET_VALUE(instanceTypeDetails_, instanceTypeDetails) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setInstanceTypeDetails(vector<Models::ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails> && instanceTypeDetails) { DARABONBA_PTR_SET_RVALUE(instanceTypeDetails_, instanceTypeDetails) };


    // instanceTypeToNum Field Functions 
    bool hasInstanceTypeToNum() const { return this->instanceTypeToNum_ != nullptr;};
    void deleteInstanceTypeToNum() { this->instanceTypeToNum_ = nullptr;};
    inline const map<string, int32_t> & instanceTypeToNum() const { DARABONBA_PTR_GET_CONST(instanceTypeToNum_, map<string, int32_t>) };
    inline map<string, int32_t> instanceTypeToNum() { DARABONBA_PTR_GET(instanceTypeToNum_, map<string, int32_t>) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setInstanceTypeToNum(const map<string, int32_t> & instanceTypeToNum) { DARABONBA_PTR_SET_VALUE(instanceTypeToNum_, instanceTypeToNum) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setInstanceTypeToNum(map<string, int32_t> && instanceTypeToNum) { DARABONBA_PTR_SET_RVALUE(instanceTypeToNum_, instanceTypeToNum) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAutoScalingActivitiesResponseBodyScalingActivities& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the scaling activity.
    std::shared_ptr<string> activityId_ = nullptr;
    // The status of the scaling activity. Valid values:
    // 
    // *   REJECTED
    // *   SUCCESSFUL
    // *   FAILED
    // *   IN_PROGRESS
    std::shared_ptr<string> activityState_ = nullptr;
    // The type of the scaling activity. Valid values:
    // 
    // *   SCALE_OUT
    // *   SCALE_IN
    std::shared_ptr<string> activityType_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The description of the scaling activity.
    std::shared_ptr<string> description_ = nullptr;
    // The end time of the scaling. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of added or removed instances.
    std::shared_ptr<int32_t> expectNum_ = nullptr;
    std::shared_ptr<vector<Models::ListAutoScalingActivitiesResponseBodyScalingActivitiesInstanceTypeDetails>> instanceTypeDetails_ = nullptr;
    std::shared_ptr<map<string, int32_t>> instanceTypeToNum_ = nullptr;
    // The ID of the node group.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The name of the node group.
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    // The operation ID.
    std::shared_ptr<string> operationId_ = nullptr;
    std::shared_ptr<string> policyType_ = nullptr;
    // The name of the scaling rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The start time of the scaling. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
