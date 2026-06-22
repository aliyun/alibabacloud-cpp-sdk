// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOSCALINGACTIVITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListAutoScalingActivitiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoScalingActivitiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceChargeTypes, instanceChargeTypes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityStates, scalingActivityStates_);
      DARABONBA_PTR_TO_JSON(ScalingActivityType, scalingActivityType_);
      DARABONBA_PTR_TO_JSON(ScalingPolicyType, scalingPolicyType_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoScalingActivitiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeTypes, instanceChargeTypes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityStates, scalingActivityStates_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityType, scalingActivityType_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicyType, scalingPolicyType_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListAutoScalingActivitiesRequest() = default ;
    ListAutoScalingActivitiesRequest(const ListAutoScalingActivitiesRequest &) = default ;
    ListAutoScalingActivitiesRequest(ListAutoScalingActivitiesRequest &&) = default ;
    ListAutoScalingActivitiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoScalingActivitiesRequest() = default ;
    ListAutoScalingActivitiesRequest& operator=(const ListAutoScalingActivitiesRequest &) = default ;
    ListAutoScalingActivitiesRequest& operator=(ListAutoScalingActivitiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->endTime_ == nullptr && this->instanceChargeTypes_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodeGroupId_ == nullptr
        && this->regionId_ == nullptr && this->scalingActivityStates_ == nullptr && this->scalingActivityType_ == nullptr && this->scalingPolicyType_ == nullptr && this->scalingRuleName_ == nullptr
        && this->startTime_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListAutoScalingActivitiesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAutoScalingActivitiesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceChargeTypes Field Functions 
    bool hasInstanceChargeTypes() const { return this->instanceChargeTypes_ != nullptr;};
    void deleteInstanceChargeTypes() { this->instanceChargeTypes_ = nullptr;};
    inline const vector<string> & getInstanceChargeTypes() const { DARABONBA_PTR_GET_CONST(instanceChargeTypes_, vector<string>) };
    inline vector<string> getInstanceChargeTypes() { DARABONBA_PTR_GET(instanceChargeTypes_, vector<string>) };
    inline ListAutoScalingActivitiesRequest& setInstanceChargeTypes(const vector<string> & instanceChargeTypes) { DARABONBA_PTR_SET_VALUE(instanceChargeTypes_, instanceChargeTypes) };
    inline ListAutoScalingActivitiesRequest& setInstanceChargeTypes(vector<string> && instanceChargeTypes) { DARABONBA_PTR_SET_RVALUE(instanceChargeTypes_, instanceChargeTypes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoScalingActivitiesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoScalingActivitiesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ListAutoScalingActivitiesRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAutoScalingActivitiesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingActivityStates Field Functions 
    bool hasScalingActivityStates() const { return this->scalingActivityStates_ != nullptr;};
    void deleteScalingActivityStates() { this->scalingActivityStates_ = nullptr;};
    inline const vector<string> & getScalingActivityStates() const { DARABONBA_PTR_GET_CONST(scalingActivityStates_, vector<string>) };
    inline vector<string> getScalingActivityStates() { DARABONBA_PTR_GET(scalingActivityStates_, vector<string>) };
    inline ListAutoScalingActivitiesRequest& setScalingActivityStates(const vector<string> & scalingActivityStates) { DARABONBA_PTR_SET_VALUE(scalingActivityStates_, scalingActivityStates) };
    inline ListAutoScalingActivitiesRequest& setScalingActivityStates(vector<string> && scalingActivityStates) { DARABONBA_PTR_SET_RVALUE(scalingActivityStates_, scalingActivityStates) };


    // scalingActivityType Field Functions 
    bool hasScalingActivityType() const { return this->scalingActivityType_ != nullptr;};
    void deleteScalingActivityType() { this->scalingActivityType_ = nullptr;};
    inline string getScalingActivityType() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityType_, "") };
    inline ListAutoScalingActivitiesRequest& setScalingActivityType(string scalingActivityType) { DARABONBA_PTR_SET_VALUE(scalingActivityType_, scalingActivityType) };


    // scalingPolicyType Field Functions 
    bool hasScalingPolicyType() const { return this->scalingPolicyType_ != nullptr;};
    void deleteScalingPolicyType() { this->scalingPolicyType_ = nullptr;};
    inline string getScalingPolicyType() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyType_, "") };
    inline ListAutoScalingActivitiesRequest& setScalingPolicyType(string scalingPolicyType) { DARABONBA_PTR_SET_VALUE(scalingPolicyType_, scalingPolicyType) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ListAutoScalingActivitiesRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAutoScalingActivitiesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The end timestamp for querying the creation time of scaling activities. The unit is milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The billing method of the instance. Valid values:
    // 
    // - ONDEMAND: Pay-as-you-go instance.
    // 
    // - SPOT: Spot instance.The default value is null, which means all billing methods are selected.Example: ["ONDEMAND", "SPOT"]
    shared_ptr<vector<string>> instanceChargeTypes_ {};
    // The maximum number of records to return in a single request.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position from which the query starts.
    shared_ptr<string> nextToken_ {};
    // The node group ID.
    shared_ptr<string> nodeGroupId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The status of the scaling activity. The number of elements in the array can range from 1 to 20.
    shared_ptr<vector<string>> scalingActivityStates_ {};
    // The type of the scaling activity. Valid values:
    // 
    // - SCALE_OUT: Scale-out.
    // 
    // - SCALE_IN: Scale-in.
    shared_ptr<string> scalingActivityType_ {};
    shared_ptr<string> scalingPolicyType_ {};
    // The name of the scaling rule.
    shared_ptr<string> scalingRuleName_ {};
    // The start timestamp for querying the creation time of scaling activities. The unit is milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
