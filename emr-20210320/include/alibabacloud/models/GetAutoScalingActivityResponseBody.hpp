// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGACTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGACTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScalingActivityResult.hpp>
#include <alibabacloud/models/ScalingRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetAutoScalingActivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingActivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivity, scalingActivity_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingActivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivity, scalingActivity_);
    };
    GetAutoScalingActivityResponseBody() = default ;
    GetAutoScalingActivityResponseBody(const GetAutoScalingActivityResponseBody &) = default ;
    GetAutoScalingActivityResponseBody(GetAutoScalingActivityResponseBody &&) = default ;
    GetAutoScalingActivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingActivityResponseBody() = default ;
    GetAutoScalingActivityResponseBody& operator=(const GetAutoScalingActivityResponseBody &) = default ;
    GetAutoScalingActivityResponseBody& operator=(GetAutoScalingActivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingActivity : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingActivity& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
        DARABONBA_PTR_TO_JSON(ActivityResults, activityResults_);
        DARABONBA_PTR_TO_JSON(ActivityState, activityState_);
        DARABONBA_PTR_TO_JSON(ActivityType, activityType_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExpectNum, expectNum_);
        DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(RuleDetail, ruleDetail_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingActivity& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
        DARABONBA_PTR_FROM_JSON(ActivityResults, activityResults_);
        DARABONBA_PTR_FROM_JSON(ActivityState, activityState_);
        DARABONBA_PTR_FROM_JSON(ActivityType, activityType_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExpectNum, expectNum_);
        DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
        DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(RuleDetail, ruleDetail_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      ScalingActivity() = default ;
      ScalingActivity(const ScalingActivity &) = default ;
      ScalingActivity(ScalingActivity &&) = default ;
      ScalingActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingActivity() = default ;
      ScalingActivity& operator=(const ScalingActivity &) = default ;
      ScalingActivity& operator=(ScalingActivity &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityResults_ == nullptr && this->activityState_ == nullptr && this->activityType_ == nullptr && this->clusterId_ == nullptr && this->description_ == nullptr
        && this->endTime_ == nullptr && this->expectNum_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr && this->operationId_ == nullptr
        && this->policyType_ == nullptr && this->ruleDetail_ == nullptr && this->ruleName_ == nullptr && this->startTime_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
      inline ScalingActivity& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // activityResults Field Functions 
      bool hasActivityResults() const { return this->activityResults_ != nullptr;};
      void deleteActivityResults() { this->activityResults_ = nullptr;};
      inline const vector<ScalingActivityResult> & getActivityResults() const { DARABONBA_PTR_GET_CONST(activityResults_, vector<ScalingActivityResult>) };
      inline vector<ScalingActivityResult> getActivityResults() { DARABONBA_PTR_GET(activityResults_, vector<ScalingActivityResult>) };
      inline ScalingActivity& setActivityResults(const vector<ScalingActivityResult> & activityResults) { DARABONBA_PTR_SET_VALUE(activityResults_, activityResults) };
      inline ScalingActivity& setActivityResults(vector<ScalingActivityResult> && activityResults) { DARABONBA_PTR_SET_RVALUE(activityResults_, activityResults) };


      // activityState Field Functions 
      bool hasActivityState() const { return this->activityState_ != nullptr;};
      void deleteActivityState() { this->activityState_ = nullptr;};
      inline string getActivityState() const { DARABONBA_PTR_GET_DEFAULT(activityState_, "") };
      inline ScalingActivity& setActivityState(string activityState) { DARABONBA_PTR_SET_VALUE(activityState_, activityState) };


      // activityType Field Functions 
      bool hasActivityType() const { return this->activityType_ != nullptr;};
      void deleteActivityType() { this->activityType_ = nullptr;};
      inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
      inline ScalingActivity& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ScalingActivity& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ScalingActivity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ScalingActivity& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // expectNum Field Functions 
      bool hasExpectNum() const { return this->expectNum_ != nullptr;};
      void deleteExpectNum() { this->expectNum_ = nullptr;};
      inline int32_t getExpectNum() const { DARABONBA_PTR_GET_DEFAULT(expectNum_, 0) };
      inline ScalingActivity& setExpectNum(int32_t expectNum) { DARABONBA_PTR_SET_VALUE(expectNum_, expectNum) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline ScalingActivity& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline ScalingActivity& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline ScalingActivity& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline ScalingActivity& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // ruleDetail Field Functions 
      bool hasRuleDetail() const { return this->ruleDetail_ != nullptr;};
      void deleteRuleDetail() { this->ruleDetail_ = nullptr;};
      inline const ScalingRule & getRuleDetail() const { DARABONBA_PTR_GET_CONST(ruleDetail_, ScalingRule) };
      inline ScalingRule getRuleDetail() { DARABONBA_PTR_GET(ruleDetail_, ScalingRule) };
      inline ScalingActivity& setRuleDetail(const ScalingRule & ruleDetail) { DARABONBA_PTR_SET_VALUE(ruleDetail_, ruleDetail) };
      inline ScalingActivity& setRuleDetail(ScalingRule && ruleDetail) { DARABONBA_PTR_SET_RVALUE(ruleDetail_, ruleDetail) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ScalingActivity& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ScalingActivity& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The ID of the scaling activity.
      shared_ptr<string> activityId_ {};
      // The list of instances involved in the scaling activity.
      shared_ptr<vector<ScalingActivityResult>> activityResults_ {};
      // The state of the scaling activity. Valid values:
      // 
      // - REJECTED: rejected.
      // 
      // - SUCCESSFUL: successful.
      // 
      // - FAILED: failed.
      // 
      // - IN_PROGRESS: in progress.
      shared_ptr<string> activityState_ {};
      // The type of the scaling activity. Valid values:
      // 
      // - SCALE_OUT: scale-out.
      // 
      // - SCALE_IN: scale-in.
      shared_ptr<string> activityType_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The description of the scaling activity.
      shared_ptr<string> description_ {};
      // The end time of the scaling activity.
      shared_ptr<int64_t> endTime_ {};
      // The number of instances that are added or removed.
      shared_ptr<int32_t> expectNum_ {};
      // The node group ID.
      shared_ptr<string> nodeGroupId_ {};
      // The name of the node group.
      shared_ptr<string> nodeGroupName_ {};
      // The operation ID.
      shared_ptr<string> operationId_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
      // The details of the scaling rule.
      shared_ptr<ScalingRule> ruleDetail_ {};
      // The name of the scaling rule.
      shared_ptr<string> ruleName_ {};
      // The start time of the scaling activity.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scalingActivity_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoScalingActivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivity Field Functions 
    bool hasScalingActivity() const { return this->scalingActivity_ != nullptr;};
    void deleteScalingActivity() { this->scalingActivity_ = nullptr;};
    inline const GetAutoScalingActivityResponseBody::ScalingActivity & getScalingActivity() const { DARABONBA_PTR_GET_CONST(scalingActivity_, GetAutoScalingActivityResponseBody::ScalingActivity) };
    inline GetAutoScalingActivityResponseBody::ScalingActivity getScalingActivity() { DARABONBA_PTR_GET(scalingActivity_, GetAutoScalingActivityResponseBody::ScalingActivity) };
    inline GetAutoScalingActivityResponseBody& setScalingActivity(const GetAutoScalingActivityResponseBody::ScalingActivity & scalingActivity) { DARABONBA_PTR_SET_VALUE(scalingActivity_, scalingActivity) };
    inline GetAutoScalingActivityResponseBody& setScalingActivity(GetAutoScalingActivityResponseBody::ScalingActivity && scalingActivity) { DARABONBA_PTR_SET_RVALUE(scalingActivity_, scalingActivity) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the scaling activity.
    shared_ptr<GetAutoScalingActivityResponseBody::ScalingActivity> scalingActivity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
