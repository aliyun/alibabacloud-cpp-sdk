// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSTATISTICSREQUEST_HPP_
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
  class DescribeApisecStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserStatusList, userStatusList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserStatusList, userStatusList_);
    };
    DescribeApisecStatisticsRequest() = default ;
    DescribeApisecStatisticsRequest(const DescribeApisecStatisticsRequest &) = default ;
    DescribeApisecStatisticsRequest(DescribeApisecStatisticsRequest &&) = default ;
    DescribeApisecStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecStatisticsRequest() = default ;
    DescribeApisecStatisticsRequest& operator=(const DescribeApisecStatisticsRequest &) = default ;
    DescribeApisecStatisticsRequest& operator=(DescribeApisecStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->startTime_ != nullptr
        && this->type_ != nullptr && this->userStatusList_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeApisecStatisticsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeApisecStatisticsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisecStatisticsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisecStatisticsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeApisecStatisticsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeApisecStatisticsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeApisecStatisticsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userStatusList Field Functions 
    bool hasUserStatusList() const { return this->userStatusList_ != nullptr;};
    void deleteUserStatusList() { this->userStatusList_ = nullptr;};
    inline const vector<string> & userStatusList() const { DARABONBA_PTR_GET_CONST(userStatusList_, vector<string>) };
    inline vector<string> userStatusList() { DARABONBA_PTR_GET(userStatusList_, vector<string>) };
    inline DescribeApisecStatisticsRequest& setUserStatusList(const vector<string> & userStatusList) { DARABONBA_PTR_SET_VALUE(userStatusList_, userStatusList) };
    inline DescribeApisecStatisticsRequest& setUserStatusList(vector<string> && userStatusList) { DARABONBA_PTR_SET_RVALUE(userStatusList_, userStatusList) };


  protected:
    // The ID of the hybrid cloud cluster.
    // 
    // >  This parameter is available only in hybrid cloud scenarios. You can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The region in which the Web Application Firewall (WAF) instance is deployed. Valid values:
    // 
    // * **cn-hangzhou**: Chinese mainland
    // * **ap-southeast-1**: outside the Chinese mainland
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The type of the statistics. Valid values:
    // 
    // *   **risk**: risk-related statistics.
    // *   **event**: event-related statistics.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<string>> userStatusList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
