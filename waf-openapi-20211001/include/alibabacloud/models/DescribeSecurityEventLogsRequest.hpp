// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityEventLogsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeSecurityEventLogsRequest() = default ;
    DescribeSecurityEventLogsRequest(const DescribeSecurityEventLogsRequest &) = default ;
    DescribeSecurityEventLogsRequest(DescribeSecurityEventLogsRequest &&) = default ;
    DescribeSecurityEventLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventLogsRequest() = default ;
    DescribeSecurityEventLogsRequest& operator=(const DescribeSecurityEventLogsRequest &) = default ;
    DescribeSecurityEventLogsRequest& operator=(DescribeSecurityEventLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->instanceId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeSecurityEventLogsRequestFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeSecurityEventLogsRequestFilter) };
    inline DescribeSecurityEventLogsRequestFilter filter() { DARABONBA_PTR_GET(filter_, DescribeSecurityEventLogsRequestFilter) };
    inline DescribeSecurityEventLogsRequest& setFilter(const DescribeSecurityEventLogsRequestFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeSecurityEventLogsRequest& setFilter(DescribeSecurityEventLogsRequestFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventLogsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeSecurityEventLogsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSecurityEventLogsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSecurityEventLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeSecurityEventLogsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // The filter conditions for the query. Multiple conditions are evaluated by using a logical AND.
    // 
    // This parameter is required.
    std::shared_ptr<DescribeSecurityEventLogsRequestFilter> filter_ = nullptr;
    // The ID of the Web Application Firewall (WAF) instance.
    // 
    // >  You can call the [DescribeInstanceInfo](https://help.aliyun.com/document_detail/140857.html) operation to query the ID of the WAF instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number. Default value: **1**.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: **100**.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID of the WAF instance. Valid values:
    // 
    // *   **cn-hangzhou**: The Chinese mainland.
    // *   **ap-southeast-1**: Outside the Chinese mainland.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
