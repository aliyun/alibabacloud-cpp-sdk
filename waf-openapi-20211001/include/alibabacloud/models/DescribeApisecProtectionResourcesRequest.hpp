// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecProtectionResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecProtectionResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecProtectionResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeApisecProtectionResourcesRequest() = default ;
    DescribeApisecProtectionResourcesRequest(const DescribeApisecProtectionResourcesRequest &) = default ;
    DescribeApisecProtectionResourcesRequest(DescribeApisecProtectionResourcesRequest &&) = default ;
    DescribeApisecProtectionResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecProtectionResourcesRequest() = default ;
    DescribeApisecProtectionResourcesRequest& operator=(const DescribeApisecProtectionResourcesRequest &) = default ;
    DescribeApisecProtectionResourcesRequest& operator=(DescribeApisecProtectionResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apisecStatus_ != nullptr
        && this->instanceId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resource_ != nullptr
        && this->resourceManagerResourceGroupId_ != nullptr; };
    // apisecStatus Field Functions 
    bool hasApisecStatus() const { return this->apisecStatus_ != nullptr;};
    void deleteApisecStatus() { this->apisecStatus_ = nullptr;};
    inline int32_t apisecStatus() const { DARABONBA_PTR_GET_DEFAULT(apisecStatus_, 0) };
    inline DescribeApisecProtectionResourcesRequest& setApisecStatus(int32_t apisecStatus) { DARABONBA_PTR_SET_VALUE(apisecStatus_, apisecStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApisecProtectionResourcesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeApisecProtectionResourcesRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeApisecProtectionResourcesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApisecProtectionResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeApisecProtectionResourcesRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeApisecProtectionResourcesRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The switch of the API security module.
    std::shared_ptr<int32_t> apisecStatus_ = nullptr;
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
    // The name of the protected object.
    std::shared_ptr<string> resource_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
