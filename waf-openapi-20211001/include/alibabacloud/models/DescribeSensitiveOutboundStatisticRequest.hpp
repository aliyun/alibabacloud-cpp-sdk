// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDSTATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEOUTBOUNDSTATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveOutboundStatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveOutboundStatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_TO_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveOutboundStatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_FROM_JSON(OrderWay, orderWay_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SensitiveCode, sensitiveCode_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSensitiveOutboundStatisticRequest() = default ;
    DescribeSensitiveOutboundStatisticRequest(const DescribeSensitiveOutboundStatisticRequest &) = default ;
    DescribeSensitiveOutboundStatisticRequest(DescribeSensitiveOutboundStatisticRequest &&) = default ;
    DescribeSensitiveOutboundStatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveOutboundStatisticRequest() = default ;
    DescribeSensitiveOutboundStatisticRequest& operator=(const DescribeSensitiveOutboundStatisticRequest &) = default ;
    DescribeSensitiveOutboundStatisticRequest& operator=(DescribeSensitiveOutboundStatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->detectionResult_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->orderKey_ == nullptr && this->orderWay_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->sensitiveCode_ == nullptr
        && this->sensitiveLevel_ == nullptr && this->sensitiveType_ == nullptr && this->startTime_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // detectionResult Field Functions 
    bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
    void deleteDetectionResult() { this->detectionResult_ = nullptr;};
    inline string getDetectionResult() const { DARABONBA_PTR_GET_DEFAULT(detectionResult_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setDetectionResult(string detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSensitiveOutboundStatisticRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderKey Field Functions 
    bool hasOrderKey() const { return this->orderKey_ != nullptr;};
    void deleteOrderKey() { this->orderKey_ = nullptr;};
    inline string getOrderKey() const { DARABONBA_PTR_GET_DEFAULT(orderKey_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setOrderKey(string orderKey) { DARABONBA_PTR_SET_VALUE(orderKey_, orderKey) };


    // orderWay Field Functions 
    bool hasOrderWay() const { return this->orderWay_ != nullptr;};
    void deleteOrderWay() { this->orderWay_ = nullptr;};
    inline string getOrderWay() const { DARABONBA_PTR_GET_DEFAULT(orderWay_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setOrderWay(string orderWay) { DARABONBA_PTR_SET_VALUE(orderWay_, orderWay) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSensitiveOutboundStatisticRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSensitiveOutboundStatisticRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // sensitiveCode Field Functions 
    bool hasSensitiveCode() const { return this->sensitiveCode_ != nullptr;};
    void deleteSensitiveCode() { this->sensitiveCode_ = nullptr;};
    inline string getSensitiveCode() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCode_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setSensitiveCode(string sensitiveCode) { DARABONBA_PTR_SET_VALUE(sensitiveCode_, sensitiveCode) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // sensitiveType Field Functions 
    bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
    void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
    inline string getSensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
    inline DescribeSensitiveOutboundStatisticRequest& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSensitiveOutboundStatisticRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the hybrid cloud cluster.
    // >For hybrid cloud scenarios only, you can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query the hybrid cloud clusters.
    shared_ptr<string> clusterId_ {};
    // The evaluation result. Valid values:
    // 
    // *   **report**: Risks exist in cross-border data transfer.
    // *   **none**: No risks exist in cross-border data transfer.
    shared_ptr<string> detectionResult_ {};
    // The end of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    // 
    // >  You can query only data of the previous month, previous 3 months, previous 6 months, previous 12 months, and data generated since January 1 of last year for compliance check. You must specify a valid time range.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the sorting field. Valid values:
    // 
    // *   **total_count** (default): total number of data entries
    // *   **outbound_count**: total number of data entries that are transferred across borders
    shared_ptr<string> orderKey_ {};
    // The sorting method. Valid values:
    // 
    // *   **desc** (default): in descending order
    // *   **asc**: in ascending order
    shared_ptr<string> orderWay_ {};
    // The page number. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: **10**.
    shared_ptr<int64_t> pageSize_ {};
    // The region in which the Web Application Firewall (WAF) instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The type of the sensitive data. Separate multiple types with commas (,).
    // 
    // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of sensitive data. Only built-in types of sensitive data are supported for this operation.
    shared_ptr<string> sensitiveCode_ {};
    // The sensitivity level. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    shared_ptr<string> sensitiveLevel_ {};
    // The type of the information. Valid values:
    // 
    // *   **info** (default): full personal information
    // *   **sensitive**: sensitive personal information
    shared_ptr<string> sensitiveType_ {};
    // The beginning of the time range to query. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    // 
    // >  You can query only data of the previous month, previous 3 months, previous 6 months, previous 12 months, and data generated since January 1 of last year for compliance check. You must specify a valid time range.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
