// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListAutoScalingActivitiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingActivitiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivities, scalingActivities_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAutoScalingActivitiesResponseBody() = default ;
    ListAutoScalingActivitiesResponseBody(const ListAutoScalingActivitiesResponseBody &) = default ;
    ListAutoScalingActivitiesResponseBody(ListAutoScalingActivitiesResponseBody &&) = default ;
    ListAutoScalingActivitiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingActivitiesResponseBody() = default ;
    ListAutoScalingActivitiesResponseBody& operator=(const ListAutoScalingActivitiesResponseBody &) = default ;
    ListAutoScalingActivitiesResponseBody& operator=(ListAutoScalingActivitiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingActivities : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingActivities& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ScalingActivities& obj) { 
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
      ScalingActivities() = default ;
      ScalingActivities(const ScalingActivities &) = default ;
      ScalingActivities(ScalingActivities &&) = default ;
      ScalingActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingActivities() = default ;
      ScalingActivities& operator=(const ScalingActivities &) = default ;
      ScalingActivities& operator=(ScalingActivities &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceTypeDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceTypeDetails& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(OnDemandInstanceIds, onDemandInstanceIds_);
          DARABONBA_PTR_TO_JSON(SpotInstanceIds, spotInstanceIds_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceTypeDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(OnDemandInstanceIds, onDemandInstanceIds_);
          DARABONBA_PTR_FROM_JSON(SpotInstanceIds, spotInstanceIds_);
        };
        InstanceTypeDetails() = default ;
        InstanceTypeDetails(const InstanceTypeDetails &) = default ;
        InstanceTypeDetails(InstanceTypeDetails &&) = default ;
        InstanceTypeDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceTypeDetails() = default ;
        InstanceTypeDetails& operator=(const InstanceTypeDetails &) = default ;
        InstanceTypeDetails& operator=(InstanceTypeDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->onDemandInstanceIds_ == nullptr && this->spotInstanceIds_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline InstanceTypeDetails& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // onDemandInstanceIds Field Functions 
        bool hasOnDemandInstanceIds() const { return this->onDemandInstanceIds_ != nullptr;};
        void deleteOnDemandInstanceIds() { this->onDemandInstanceIds_ = nullptr;};
        inline const vector<string> & getOnDemandInstanceIds() const { DARABONBA_PTR_GET_CONST(onDemandInstanceIds_, vector<string>) };
        inline vector<string> getOnDemandInstanceIds() { DARABONBA_PTR_GET(onDemandInstanceIds_, vector<string>) };
        inline InstanceTypeDetails& setOnDemandInstanceIds(const vector<string> & onDemandInstanceIds) { DARABONBA_PTR_SET_VALUE(onDemandInstanceIds_, onDemandInstanceIds) };
        inline InstanceTypeDetails& setOnDemandInstanceIds(vector<string> && onDemandInstanceIds) { DARABONBA_PTR_SET_RVALUE(onDemandInstanceIds_, onDemandInstanceIds) };


        // spotInstanceIds Field Functions 
        bool hasSpotInstanceIds() const { return this->spotInstanceIds_ != nullptr;};
        void deleteSpotInstanceIds() { this->spotInstanceIds_ = nullptr;};
        inline const vector<string> & getSpotInstanceIds() const { DARABONBA_PTR_GET_CONST(spotInstanceIds_, vector<string>) };
        inline vector<string> getSpotInstanceIds() { DARABONBA_PTR_GET(spotInstanceIds_, vector<string>) };
        inline InstanceTypeDetails& setSpotInstanceIds(const vector<string> & spotInstanceIds) { DARABONBA_PTR_SET_VALUE(spotInstanceIds_, spotInstanceIds) };
        inline InstanceTypeDetails& setSpotInstanceIds(vector<string> && spotInstanceIds) { DARABONBA_PTR_SET_RVALUE(spotInstanceIds_, spotInstanceIds) };


      protected:
        shared_ptr<string> instanceType_ {};
        shared_ptr<vector<string>> onDemandInstanceIds_ {};
        shared_ptr<vector<string>> spotInstanceIds_ {};
      };

      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->activityState_ == nullptr && this->activityType_ == nullptr && this->clusterId_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr
        && this->expectNum_ == nullptr && this->instanceTypeDetails_ == nullptr && this->instanceTypeToNum_ == nullptr && this->nodeGroupId_ == nullptr && this->nodeGroupName_ == nullptr
        && this->operationId_ == nullptr && this->policyType_ == nullptr && this->ruleName_ == nullptr && this->startTime_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline string getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, "") };
      inline ScalingActivities& setActivityId(string activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // activityState Field Functions 
      bool hasActivityState() const { return this->activityState_ != nullptr;};
      void deleteActivityState() { this->activityState_ = nullptr;};
      inline string getActivityState() const { DARABONBA_PTR_GET_DEFAULT(activityState_, "") };
      inline ScalingActivities& setActivityState(string activityState) { DARABONBA_PTR_SET_VALUE(activityState_, activityState) };


      // activityType Field Functions 
      bool hasActivityType() const { return this->activityType_ != nullptr;};
      void deleteActivityType() { this->activityType_ = nullptr;};
      inline string getActivityType() const { DARABONBA_PTR_GET_DEFAULT(activityType_, "") };
      inline ScalingActivities& setActivityType(string activityType) { DARABONBA_PTR_SET_VALUE(activityType_, activityType) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline ScalingActivities& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ScalingActivities& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline ScalingActivities& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // expectNum Field Functions 
      bool hasExpectNum() const { return this->expectNum_ != nullptr;};
      void deleteExpectNum() { this->expectNum_ = nullptr;};
      inline int32_t getExpectNum() const { DARABONBA_PTR_GET_DEFAULT(expectNum_, 0) };
      inline ScalingActivities& setExpectNum(int32_t expectNum) { DARABONBA_PTR_SET_VALUE(expectNum_, expectNum) };


      // instanceTypeDetails Field Functions 
      bool hasInstanceTypeDetails() const { return this->instanceTypeDetails_ != nullptr;};
      void deleteInstanceTypeDetails() { this->instanceTypeDetails_ = nullptr;};
      inline const vector<ScalingActivities::InstanceTypeDetails> & getInstanceTypeDetails() const { DARABONBA_PTR_GET_CONST(instanceTypeDetails_, vector<ScalingActivities::InstanceTypeDetails>) };
      inline vector<ScalingActivities::InstanceTypeDetails> getInstanceTypeDetails() { DARABONBA_PTR_GET(instanceTypeDetails_, vector<ScalingActivities::InstanceTypeDetails>) };
      inline ScalingActivities& setInstanceTypeDetails(const vector<ScalingActivities::InstanceTypeDetails> & instanceTypeDetails) { DARABONBA_PTR_SET_VALUE(instanceTypeDetails_, instanceTypeDetails) };
      inline ScalingActivities& setInstanceTypeDetails(vector<ScalingActivities::InstanceTypeDetails> && instanceTypeDetails) { DARABONBA_PTR_SET_RVALUE(instanceTypeDetails_, instanceTypeDetails) };


      // instanceTypeToNum Field Functions 
      bool hasInstanceTypeToNum() const { return this->instanceTypeToNum_ != nullptr;};
      void deleteInstanceTypeToNum() { this->instanceTypeToNum_ = nullptr;};
      inline const map<string, int32_t> & getInstanceTypeToNum() const { DARABONBA_PTR_GET_CONST(instanceTypeToNum_, map<string, int32_t>) };
      inline map<string, int32_t> getInstanceTypeToNum() { DARABONBA_PTR_GET(instanceTypeToNum_, map<string, int32_t>) };
      inline ScalingActivities& setInstanceTypeToNum(const map<string, int32_t> & instanceTypeToNum) { DARABONBA_PTR_SET_VALUE(instanceTypeToNum_, instanceTypeToNum) };
      inline ScalingActivities& setInstanceTypeToNum(map<string, int32_t> && instanceTypeToNum) { DARABONBA_PTR_SET_RVALUE(instanceTypeToNum_, instanceTypeToNum) };


      // nodeGroupId Field Functions 
      bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
      void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
      inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
      inline ScalingActivities& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


      // nodeGroupName Field Functions 
      bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
      void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
      inline string getNodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
      inline ScalingActivities& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline ScalingActivities& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline ScalingActivities& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline ScalingActivities& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline ScalingActivities& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The ID of the scaling activity.
      shared_ptr<string> activityId_ {};
      // The status of the scaling activity. Valid values:
      // 
      // - REJECTED: The scaling activity is rejected.
      // 
      // - SUCCESSFUL: The scaling activity is successful.
      // 
      // - FAILED: The scaling activity failed.
      // 
      // - IN_PROGRESS: The scaling activity is in progress.
      shared_ptr<string> activityState_ {};
      // The type of the scaling activity. Valid values:
      // 
      // - SCALE_OUT: Scale-out.
      // 
      // - SCALE_IN: Scale-in.
      shared_ptr<string> activityType_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The description of the scaling activity.
      shared_ptr<string> description_ {};
      // The end time of the scaling activity. The unit is milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The number of instances to be added or removed in this scaling activity.
      shared_ptr<int32_t> expectNum_ {};
      shared_ptr<vector<ScalingActivities::InstanceTypeDetails>> instanceTypeDetails_ {};
      shared_ptr<map<string, int32_t>> instanceTypeToNum_ {};
      // The node group ID.
      shared_ptr<string> nodeGroupId_ {};
      // The name of the node group.
      shared_ptr<string> nodeGroupName_ {};
      // The operation ID.
      shared_ptr<string> operationId_ {};
      shared_ptr<string> policyType_ {};
      // The name of the scaling rule.
      shared_ptr<string> ruleName_ {};
      // The start time of the scaling activity. The unit is milliseconds.
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->scalingActivities_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoScalingActivitiesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoScalingActivitiesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutoScalingActivitiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivities Field Functions 
    bool hasScalingActivities() const { return this->scalingActivities_ != nullptr;};
    void deleteScalingActivities() { this->scalingActivities_ = nullptr;};
    inline const vector<ListAutoScalingActivitiesResponseBody::ScalingActivities> & getScalingActivities() const { DARABONBA_PTR_GET_CONST(scalingActivities_, vector<ListAutoScalingActivitiesResponseBody::ScalingActivities>) };
    inline vector<ListAutoScalingActivitiesResponseBody::ScalingActivities> getScalingActivities() { DARABONBA_PTR_GET(scalingActivities_, vector<ListAutoScalingActivitiesResponseBody::ScalingActivities>) };
    inline ListAutoScalingActivitiesResponseBody& setScalingActivities(const vector<ListAutoScalingActivitiesResponseBody::ScalingActivities> & scalingActivities) { DARABONBA_PTR_SET_VALUE(scalingActivities_, scalingActivities) };
    inline ListAutoScalingActivitiesResponseBody& setScalingActivities(vector<ListAutoScalingActivitiesResponseBody::ScalingActivities> && scalingActivities) { DARABONBA_PTR_SET_RVALUE(scalingActivities_, scalingActivities) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAutoScalingActivitiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned for this request.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of scaling activities.
    shared_ptr<vector<ListAutoScalingActivitiesResponseBody::ScalingActivities>> scalingActivities_ {};
    // The total number of entries that meet the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
