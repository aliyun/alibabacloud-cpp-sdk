// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterProxyType, clusterProxyType_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterProxyType, clusterProxyType_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeHybridCloudGroupsRequest() = default ;
    DescribeHybridCloudGroupsRequest(const DescribeHybridCloudGroupsRequest &) = default ;
    DescribeHybridCloudGroupsRequest(DescribeHybridCloudGroupsRequest &&) = default ;
    DescribeHybridCloudGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudGroupsRequest() = default ;
    DescribeHybridCloudGroupsRequest& operator=(const DescribeHybridCloudGroupsRequest &) = default ;
    DescribeHybridCloudGroupsRequest& operator=(DescribeHybridCloudGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterProxyType_ != nullptr && this->groupName_ != nullptr && this->groupType_ != nullptr && this->instanceId_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline DescribeHybridCloudGroupsRequest& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterProxyType Field Functions 
    bool hasClusterProxyType() const { return this->clusterProxyType_ != nullptr;};
    void deleteClusterProxyType() { this->clusterProxyType_ = nullptr;};
    inline string clusterProxyType() const { DARABONBA_PTR_GET_DEFAULT(clusterProxyType_, "") };
    inline DescribeHybridCloudGroupsRequest& setClusterProxyType(string clusterProxyType) { DARABONBA_PTR_SET_VALUE(clusterProxyType_, clusterProxyType) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline int32_t groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, 0) };
    inline DescribeHybridCloudGroupsRequest& setGroupName(int32_t groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeHybridCloudGroupsRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHybridCloudGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHybridCloudGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHybridCloudGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeHybridCloudGroupsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeHybridCloudGroupsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The ID of the hybrid cloud cluster.
    std::shared_ptr<int64_t> clusterId_ = nullptr;
    // The type of proxy cluster that is used. Valid values:
    // 
    // *   **service**: service-based traffic mirroring.
    // *   **cname**: reverse proxy.
    std::shared_ptr<string> clusterProxyType_ = nullptr;
    // The name of the node group that you want to query.
    std::shared_ptr<int32_t> groupName_ = nullptr;
    // The type of the node group. Valid values:
    // 
    // *   **protect**
    // *   **control**
    // *   **storage**
    // *   **controlStorage**
    std::shared_ptr<string> groupType_ = nullptr;
    // The ID of the WAF instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to obtain the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou:** the Chinese mainland.
    // *   **ap-southeast-1:** outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
