// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserEventTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEventTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserStatusList, userStatusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEventTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserStatusList, userStatusList_);
    };
    DescribeUserEventTypeRequest() = default ;
    DescribeUserEventTypeRequest(const DescribeUserEventTypeRequest &) = default ;
    DescribeUserEventTypeRequest(DescribeUserEventTypeRequest &&) = default ;
    DescribeUserEventTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEventTypeRequest() = default ;
    DescribeUserEventTypeRequest& operator=(const DescribeUserEventTypeRequest &) = default ;
    DescribeUserEventTypeRequest& operator=(DescribeUserEventTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->startTime_ != nullptr
        && this->userStatusList_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeUserEventTypeRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeUserEventTypeRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUserEventTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserEventTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeUserEventTypeRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUserEventTypeRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userStatusList Field Functions 
    bool hasUserStatusList() const { return this->userStatusList_ != nullptr;};
    void deleteUserStatusList() { this->userStatusList_ = nullptr;};
    inline const vector<string> & userStatusList() const { DARABONBA_PTR_GET_CONST(userStatusList_, vector<string>) };
    inline vector<string> userStatusList() { DARABONBA_PTR_GET(userStatusList_, vector<string>) };
    inline DescribeUserEventTypeRequest& setUserStatusList(const vector<string> & userStatusList) { DARABONBA_PTR_SET_VALUE(userStatusList_, userStatusList) };
    inline DescribeUserEventTypeRequest& setUserStatusList(vector<string> && userStatusList) { DARABONBA_PTR_SET_RVALUE(userStatusList_, userStatusList) };


  protected:
    // The ID of the hybrid cloud cluster.
    // >For hybrid cloud scenarios only, you can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query the hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the Web Application Firewall (WAF) instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<vector<string>> userStatusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
