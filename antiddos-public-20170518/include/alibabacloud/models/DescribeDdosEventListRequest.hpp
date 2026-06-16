// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosEventListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosEventListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryDays, queryDays_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosEventListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryDays, queryDays_);
    };
    DescribeDdosEventListRequest() = default ;
    DescribeDdosEventListRequest(const DescribeDdosEventListRequest &) = default ;
    DescribeDdosEventListRequest(DescribeDdosEventListRequest &&) = default ;
    DescribeDdosEventListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosEventListRequest() = default ;
    DescribeDdosEventListRequest& operator=(const DescribeDdosEventListRequest &) = default ;
    DescribeDdosEventListRequest& operator=(DescribeDdosEventListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ddosRegionId_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->internetIp_ == nullptr && this->pageSize_ == nullptr
        && this->queryDays_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDdosEventListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string getDdosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeDdosEventListRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDdosEventListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDdosEventListRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeDdosEventListRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDdosEventListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryDays Field Functions 
    bool hasQueryDays() const { return this->queryDays_ != nullptr;};
    void deleteQueryDays() { this->queryDays_ = nullptr;};
    inline int32_t getQueryDays() const { DARABONBA_PTR_GET_DEFAULT(queryDays_, 0) };
    inline DescribeDdosEventListRequest& setQueryDays(int32_t queryDays) { DARABONBA_PTR_SET_VALUE(queryDays_, queryDays) };


  protected:
    // The number of the page to return for a paged query. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The region ID of the asset that is assigned a public IP address.
    // 
    // > Call [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) to query all region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> ddosRegionId_ {};
    // The ID of the instance for the asset that is assigned a public IP address.
    // 
    // > Call [DescribeInstance](https://help.aliyun.com/document_detail/354191.html) to query the IDs of the ECS, SLB, and EIP instances that belong to your Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The instance type of the asset that is assigned a public IP address. Valid values:
    // 
    // - **ecs**: an Elastic Compute Service (ECS) instance.
    // 
    // - **slb**: a Server Load Balancer (SLB) instance.
    // 
    // - **eip**: an elastic IP address (EIP) instance.
    // 
    // - **ipv6**: an IPv6 Gateway instance.
    // 
    // - **swas**: a simple application server instance.
    // 
    // - **waf**: a dedicated Web Application Firewall (WAF) instance.
    // 
    // - **ga_basic**: a Global Accelerator instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The IP address of the asset that is assigned a public IP address.
    shared_ptr<string> internetIp_ {};
    // The number of attack events to return on each page for a paged query. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
    // The number of days to query backwards from the current time. Default value: 7.
    shared_ptr<int32_t> queryDays_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
