// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWARMPOOLINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWARMPOOLINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeWarmPoolInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWarmPoolInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(WarmPoolInstances, warmPoolInstances_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWarmPoolInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(WarmPoolInstances, warmPoolInstances_);
    };
    DescribeWarmPoolInstancesResponseBody() = default ;
    DescribeWarmPoolInstancesResponseBody(const DescribeWarmPoolInstancesResponseBody &) = default ;
    DescribeWarmPoolInstancesResponseBody(DescribeWarmPoolInstancesResponseBody &&) = default ;
    DescribeWarmPoolInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWarmPoolInstancesResponseBody() = default ;
    DescribeWarmPoolInstancesResponseBody& operator=(const DescribeWarmPoolInstancesResponseBody &) = default ;
    DescribeWarmPoolInstancesResponseBody& operator=(DescribeWarmPoolInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WarmPoolInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WarmPoolInstances& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
        DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
        DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_TO_JSON(ScalingActivityId, scalingActivityId_);
        DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(ScalingInstanceId, scalingInstanceId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, WarmPoolInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
        DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
        DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        DARABONBA_PTR_FROM_JSON(ScalingActivityId, scalingActivityId_);
        DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(ScalingInstanceId, scalingInstanceId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      WarmPoolInstances() = default ;
      WarmPoolInstances(const WarmPoolInstances &) = default ;
      WarmPoolInstances(WarmPoolInstances &&) = default ;
      WarmPoolInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WarmPoolInstances() = default ;
      WarmPoolInstances& operator=(const WarmPoolInstances &) = default ;
      WarmPoolInstances& operator=(WarmPoolInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->instanceId_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateVersion_ == nullptr && this->lifecycleState_ == nullptr && this->privateIpAddress_ == nullptr
        && this->scalingActivityId_ == nullptr && this->scalingConfigurationId_ == nullptr && this->scalingGroupId_ == nullptr && this->scalingInstanceId_ == nullptr && this->zoneId_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline WarmPoolInstances& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline WarmPoolInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // launchTemplateId Field Functions 
      bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
      void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
      inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
      inline WarmPoolInstances& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


      // launchTemplateVersion Field Functions 
      bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
      void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
      inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
      inline WarmPoolInstances& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


      // lifecycleState Field Functions 
      bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
      void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
      inline string getLifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
      inline WarmPoolInstances& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


      // privateIpAddress Field Functions 
      bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
      void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
      inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
      inline WarmPoolInstances& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      // scalingActivityId Field Functions 
      bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
      void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
      inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
      inline WarmPoolInstances& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


      // scalingConfigurationId Field Functions 
      bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
      void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
      inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
      inline WarmPoolInstances& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline WarmPoolInstances& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // scalingInstanceId Field Functions 
      bool hasScalingInstanceId() const { return this->scalingInstanceId_ != nullptr;};
      void deleteScalingInstanceId() { this->scalingInstanceId_ = nullptr;};
      inline string getScalingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(scalingInstanceId_, "") };
      inline WarmPoolInstances& setScalingInstanceId(string scalingInstanceId) { DARABONBA_PTR_SET_VALUE(scalingInstanceId_, scalingInstanceId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline WarmPoolInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The time when the ECS instance was added to the warm pool, accurate to the second. The time is in UTC and follows the ISO 8601 standard in the YYYY-MM-DDTHH:mm:ssZ format.
      shared_ptr<string> createdTime_ {};
      // The ID of the ECS instance.
      shared_ptr<string> instanceId_ {};
      // The ID of the instance launch template.
      shared_ptr<string> launchTemplateId_ {};
      // The version of the instance launch template.
      shared_ptr<string> launchTemplateVersion_ {};
      // The lifecycle state of the ECS instance in the warm pool. Valid values:
      // 
      // - Pending: The ECS instance is being added to the warm pool.
      // 
      // - Pending:Wait: The addition of the ECS instance is suspended. If a lifecycle hook that applies to scale-out activities for the warm pool is created in the scaling group, the ECS instance is suspended when it is added to the warm pool and waits for the lifecycle hook to time out.
      // 
      // - Removing: The ECS instance is being removed from the warm pool.
      // 
      // - Removing:Wait: The removal of the ECS instance is suspended. If a lifecycle hook that applies to scale-in activities for the warm pool is created in the scaling group, the ECS instance is suspended when it is removed from the warm pool and waits for the lifecycle hook to time out.
      // 
      // - Running: The ECS instance is successfully added to the warm pool and is in the running state.
      // 
      // - Stopped: The ECS instance is successfully added to the warm pool and is in the economical mode.
      shared_ptr<string> lifecycleState_ {};
      // The private IP address of the instance.
      shared_ptr<string> privateIpAddress_ {};
      // The ID of the scaling activity when the ECS instance was added to the warm pool.
      shared_ptr<string> scalingActivityId_ {};
      // The ID of the associated scaling configuration.
      shared_ptr<string> scalingConfigurationId_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The instance identity in the scaling group, which corresponds one-to-one with the ID of the ECS instance.
      shared_ptr<string> scalingInstanceId_ {};
      // The zone ID of the ECS instance.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->scalingGroupId_ == nullptr && this->warmPoolInstances_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeWarmPoolInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWarmPoolInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeWarmPoolInstancesResponseBody& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // warmPoolInstances Field Functions 
    bool hasWarmPoolInstances() const { return this->warmPoolInstances_ != nullptr;};
    void deleteWarmPoolInstances() { this->warmPoolInstances_ = nullptr;};
    inline const vector<DescribeWarmPoolInstancesResponseBody::WarmPoolInstances> & getWarmPoolInstances() const { DARABONBA_PTR_GET_CONST(warmPoolInstances_, vector<DescribeWarmPoolInstancesResponseBody::WarmPoolInstances>) };
    inline vector<DescribeWarmPoolInstancesResponseBody::WarmPoolInstances> getWarmPoolInstances() { DARABONBA_PTR_GET(warmPoolInstances_, vector<DescribeWarmPoolInstancesResponseBody::WarmPoolInstances>) };
    inline DescribeWarmPoolInstancesResponseBody& setWarmPoolInstances(const vector<DescribeWarmPoolInstancesResponseBody::WarmPoolInstances> & warmPoolInstances) { DARABONBA_PTR_SET_VALUE(warmPoolInstances_, warmPoolInstances) };
    inline DescribeWarmPoolInstancesResponseBody& setWarmPoolInstances(vector<DescribeWarmPoolInstancesResponseBody::WarmPoolInstances> && warmPoolInstances) { DARABONBA_PTR_SET_RVALUE(warmPoolInstances_, warmPoolInstances) };


  protected:
    // The token for the next query. An empty NextToken value indicates that no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the scaling group.
    shared_ptr<string> scalingGroupId_ {};
    // The list of ECS instances in the warm pool.
    shared_ptr<vector<DescribeWarmPoolInstancesResponseBody::WarmPoolInstances>> warmPoolInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
