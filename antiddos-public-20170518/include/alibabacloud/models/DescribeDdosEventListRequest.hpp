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
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->ddosRegionId_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->internetIp_ != nullptr && this->pageSize_ != nullptr
        && this->queryDays_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDdosEventListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeDdosEventListRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDdosEventListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeDdosEventListRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeDdosEventListRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDdosEventListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryDays Field Functions 
    bool hasQueryDays() const { return this->queryDays_ != nullptr;};
    void deleteQueryDays() { this->queryDays_ = nullptr;};
    inline int32_t queryDays() const { DARABONBA_PTR_GET_DEFAULT(queryDays_, 0) };
    inline DescribeDdosEventListRequest& setQueryDays(int32_t queryDays) { DARABONBA_PTR_SET_VALUE(queryDays_, queryDays) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The region ID of the asset to query.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
    // The ID of asset to query.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/354191.html) operation to query the IDs of ECS instances, SLB instances, and EIPs within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the asset to query. Valid values:
    // 
    // *   **ecs**: an Elastic Compute Service (ECS) instance.
    // *   **slb**: a Server Load Balancer (SLB) instance.
    // *   **eip**: an elastic IP address (EIP).
    // *   **ipv6**: an IPv6 gateway.
    // *   **swas**: a simple application server.
    // *   **waf**: a Web Application Firewall (WAF) instance of the Exclusive edition.
    // *   **ga_basic**: a Global Accelerator (GA) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IP address of the asset to query.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> queryDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
