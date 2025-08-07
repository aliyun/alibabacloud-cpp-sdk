// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVESTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVESTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StatisticType, statisticType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StatisticType, statisticType_);
    };
    DescribeSensitiveStatisticRequest() = default ;
    DescribeSensitiveStatisticRequest(const DescribeSensitiveStatisticRequest &) = default ;
    DescribeSensitiveStatisticRequest(DescribeSensitiveStatisticRequest &&) = default ;
    DescribeSensitiveStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveStatisticRequest() = default ;
    DescribeSensitiveStatisticRequest& operator=(const DescribeSensitiveStatisticRequest &) = default ;
    DescribeSensitiveStatisticRequest& operator=(DescribeSensitiveStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->resourceManagerResourceGroupId_ != nullptr && this->startTime_ != nullptr && this->statisticType_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeSensitiveStatisticRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSensitiveStatisticRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSensitiveStatisticRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSensitiveStatisticRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSensitiveStatisticRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSensitiveStatisticRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSensitiveStatisticRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSensitiveStatisticRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statisticType Field Functions 
    bool hasStatisticType() const { return this->statisticType_ != nullptr;};
    void deleteStatisticType() { this->statisticType_ = nullptr;};
    inline string statisticType() const { DARABONBA_PTR_GET_DEFAULT(statisticType_, "") };
    inline DescribeSensitiveStatisticRequest& setStatisticType(string statisticType) { DARABONBA_PTR_SET_VALUE(statisticType_, statisticType) };


  protected:
    // The ID of the hybrid cloud cluster.
    // >For hybrid cloud scenarios only, you can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query the hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The end of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region in which the Web Application Firewall (WAF) instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The type of the statistics. Valid values:
    // 
    // *   **ip**: IP address
    // *   **host**: domain name
    // *   **sensitive_code**: sensitive data type
    // *   **api**: sensitive data-related API
    std::shared_ptr<string> statisticType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
