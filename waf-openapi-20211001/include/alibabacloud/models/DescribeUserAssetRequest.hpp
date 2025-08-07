// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeUserAssetRequest() = default ;
    DescribeUserAssetRequest(const DescribeUserAssetRequest &) = default ;
    DescribeUserAssetRequest(DescribeUserAssetRequest &&) = default ;
    DescribeUserAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAssetRequest() = default ;
    DescribeUserAssetRequest& operator=(const DescribeUserAssetRequest &) = default ;
    DescribeUserAssetRequest& operator=(DescribeUserAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->dataType_ != nullptr && this->days_ != nullptr && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeUserAssetRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeUserAssetRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline string days() const { DARABONBA_PTR_GET_DEFAULT(days_, "") };
    inline DescribeUserAssetRequest& setDays(string days) { DARABONBA_PTR_SET_VALUE(days_, days) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUserAssetRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeUserAssetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeUserAssetRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The ID of the hybrid cloud cluster.
    // >For hybrid cloud scenarios only, you can call the [DescribeHybridCloudClusters](https://help.aliyun.com/document_detail/2849376.html) operation to query the hybrid cloud clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the statistics. Valid values:
    // 
    // *   **asset_num**: total number of APIs
    // *   **asset_active**: number of active APIs
    // *   **asset_newborn**: number of new APIs
    // *   **asset_offline**: number of deactivated APIs
    // *   **asset_bot**: number of APIs that are called by bots
    // *   **asset_cross_border**: number of APIs that are called for cross-border data transfer
    // *   **sensitive_api**: number of response-sensitive APIs
    // *   **sensitive_domain**: number of response-sensitive domain names
    // 
    // This parameter is required.
    std::shared_ptr<string> dataType_ = nullptr;
    // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    // >Notice: The parameter has been deprecated.
    std::shared_ptr<string> days_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland
    // *   **ap-southeast-1**: outside the Chinese mainland
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
