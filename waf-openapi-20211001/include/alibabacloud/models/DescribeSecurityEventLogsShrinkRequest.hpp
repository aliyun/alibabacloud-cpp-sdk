// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventLogsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventLogsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventLogsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeSecurityEventLogsShrinkRequest() = default ;
    DescribeSecurityEventLogsShrinkRequest(const DescribeSecurityEventLogsShrinkRequest &) = default ;
    DescribeSecurityEventLogsShrinkRequest(DescribeSecurityEventLogsShrinkRequest &&) = default ;
    DescribeSecurityEventLogsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventLogsShrinkRequest() = default ;
    DescribeSecurityEventLogsShrinkRequest& operator=(const DescribeSecurityEventLogsShrinkRequest &) = default ;
    DescribeSecurityEventLogsShrinkRequest& operator=(DescribeSecurityEventLogsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterShrink_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline DescribeSecurityEventLogsShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventLogsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSecurityEventLogsShrinkRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSecurityEventLogsShrinkRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventLogsShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventLogsShrinkRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. Multiple conditions are evaluated by using a logical AND.
    // 
    // This parameter is required.
    shared_ptr<string> filterShrink_ {};
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. Default value: **1**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Maximum value: **100**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: The Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
