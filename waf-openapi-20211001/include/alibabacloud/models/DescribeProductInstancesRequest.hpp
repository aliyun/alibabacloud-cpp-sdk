// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeProductInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceAccessStatus, resourceInstanceAccessStatus_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceIp, resourceInstanceIp_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceIp, resourceIp_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_TO_JSON(ResourceRegionId, resourceRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerUserId, ownerUserId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceAccessStatus, resourceInstanceAccessStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceIp, resourceInstanceIp_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceIp, resourceIp_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceProduct, resourceProduct_);
      DARABONBA_PTR_FROM_JSON(ResourceRegionId, resourceRegionId_);
    };
    DescribeProductInstancesRequest() = default ;
    DescribeProductInstancesRequest(const DescribeProductInstancesRequest &) = default ;
    DescribeProductInstancesRequest(DescribeProductInstancesRequest &&) = default ;
    DescribeProductInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductInstancesRequest() = default ;
    DescribeProductInstancesRequest& operator=(const DescribeProductInstancesRequest &) = default ;
    DescribeProductInstancesRequest& operator=(DescribeProductInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ownerUserId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceInstanceAccessStatus_ == nullptr
        && this->resourceInstanceId_ == nullptr && this->resourceInstanceIp_ == nullptr && this->resourceInstanceName_ == nullptr && this->resourceIp_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->resourceName_ == nullptr && this->resourceProduct_ == nullptr && this->resourceRegionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeProductInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerUserId Field Functions 
    bool hasOwnerUserId() const { return this->ownerUserId_ != nullptr;};
    void deleteOwnerUserId() { this->ownerUserId_ = nullptr;};
    inline string getOwnerUserId() const { DARABONBA_PTR_GET_DEFAULT(ownerUserId_, "") };
    inline DescribeProductInstancesRequest& setOwnerUserId(string ownerUserId) { DARABONBA_PTR_SET_VALUE(ownerUserId_, ownerUserId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeProductInstancesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeProductInstancesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeProductInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInstanceAccessStatus Field Functions 
    bool hasResourceInstanceAccessStatus() const { return this->resourceInstanceAccessStatus_ != nullptr;};
    void deleteResourceInstanceAccessStatus() { this->resourceInstanceAccessStatus_ = nullptr;};
    inline string getResourceInstanceAccessStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceAccessStatus_, "") };
    inline DescribeProductInstancesRequest& setResourceInstanceAccessStatus(string resourceInstanceAccessStatus) { DARABONBA_PTR_SET_VALUE(resourceInstanceAccessStatus_, resourceInstanceAccessStatus) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeProductInstancesRequest& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceIp Field Functions 
    bool hasResourceInstanceIp() const { return this->resourceInstanceIp_ != nullptr;};
    void deleteResourceInstanceIp() { this->resourceInstanceIp_ = nullptr;};
    inline string getResourceInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceIp_, "") };
    inline DescribeProductInstancesRequest& setResourceInstanceIp(string resourceInstanceIp) { DARABONBA_PTR_SET_VALUE(resourceInstanceIp_, resourceInstanceIp) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeProductInstancesRequest& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceIp Field Functions 
    bool hasResourceIp() const { return this->resourceIp_ != nullptr;};
    void deleteResourceIp() { this->resourceIp_ = nullptr;};
    inline string getResourceIp() const { DARABONBA_PTR_GET_DEFAULT(resourceIp_, "") };
    inline DescribeProductInstancesRequest& setResourceIp(string resourceIp) { DARABONBA_PTR_SET_VALUE(resourceIp_, resourceIp) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeProductInstancesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeProductInstancesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceProduct Field Functions 
    bool hasResourceProduct() const { return this->resourceProduct_ != nullptr;};
    void deleteResourceProduct() { this->resourceProduct_ = nullptr;};
    inline string getResourceProduct() const { DARABONBA_PTR_GET_DEFAULT(resourceProduct_, "") };
    inline DescribeProductInstancesRequest& setResourceProduct(string resourceProduct) { DARABONBA_PTR_SET_VALUE(resourceProduct_, resourceProduct) };


    // resourceRegionId Field Functions 
    bool hasResourceRegionId() const { return this->resourceRegionId_ != nullptr;};
    void deleteResourceRegionId() { this->resourceRegionId_ = nullptr;};
    inline string getResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(resourceRegionId_, "") };
    inline DescribeProductInstancesRequest& setResourceRegionId(string resourceRegionId) { DARABONBA_PTR_SET_VALUE(resourceRegionId_, resourceRegionId) };


  protected:
    // The ID of the WAF instance.
    // 
    // >  You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the Alibaba Cloud account to which the resource belongs.
    shared_ptr<string> ownerUserId_ {};
    // The page number. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: **10**.
    shared_ptr<int64_t> pageSize_ {};
    // The region in which the WAF instance is deployed. Valid values:
    // 
    // *   **cn-hangzhou**: Chinese mainland.
    // *   **ap-southeast-1**: outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceInstanceAccessStatus_ {};
    // The ID of the instance.
    shared_ptr<string> resourceInstanceId_ {};
    // The IP address of the instance that is added to WAF.
    shared_ptr<string> resourceInstanceIp_ {};
    // The name of the instance that is added to WAF.
    shared_ptr<string> resourceInstanceName_ {};
    // The public IP address of the instance.
    shared_ptr<string> resourceIp_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The name of the instance.
    shared_ptr<string> resourceName_ {};
    // The cloud service to which the instance belongs. Valid values:
    // 
    // *   **clb4**: Layer 4 Classic Load Balancer (CLB).
    // *   **clb7**: Layer 7 CLB.
    // *   **ecs**: Elastic Compute Service (ECS).
    shared_ptr<string> resourceProduct_ {};
    // The region ID of the instance. Valid values:
    // 
    // *   **cn-chengdu**: China (Chengdu).
    // *   **cn-beijing**: China (Beijing).
    // *   **cn-zhangjiakou**: China (Zhangjiakou).
    // *   **cn-hangzhou**: China (Hangzhou).
    // *   **cn-shanghai**: China (Shanghai).
    // *   **cn-shenzhen**: China (Shenzhen).
    // *   **cn-qingdao**: China (Qingdao).
    // *   **cn-hongkong**: China (Hong Kong).
    // *   **ap-southeast-3**: Malaysia (Kuala Lumpur).
    // *   **ap-southeast-5**: Indonesia (Jakarta).
    shared_ptr<string> resourceRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
