// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(DdosStatus, ddosStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(DdosStatus, ddosStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeInstanceRequest() = default ;
    DescribeInstanceRequest(const DescribeInstanceRequest &) = default ;
    DescribeInstanceRequest(DescribeInstanceRequest &&) = default ;
    DescribeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRequest() = default ;
    DescribeInstanceRequest& operator=(const DescribeInstanceRequest &) = default ;
    DescribeInstanceRequest& operator=(DescribeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->ddosRegionId_ == nullptr && this->ddosStatus_ == nullptr && this->instanceId_ == nullptr && this->instanceIp_ == nullptr && this->instanceName_ == nullptr
        && this->instanceType_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeInstanceRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string getDdosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeInstanceRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // ddosStatus Field Functions 
    bool hasDdosStatus() const { return this->ddosStatus_ != nullptr;};
    void deleteDdosStatus() { this->ddosStatus_ = nullptr;};
    inline string getDdosStatus() const { DARABONBA_PTR_GET_DEFAULT(ddosStatus_, "") };
    inline DescribeInstanceRequest& setDdosStatus(string ddosStatus) { DARABONBA_PTR_SET_VALUE(ddosStatus_, ddosStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string getInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline DescribeInstanceRequest& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The region ID of the asset.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> ddosRegionId_ {};
    // The DDoS mitigation status of the asset. Valid values:
    // 
    // - **mitigating**: queries assets for which traffic scrubbing is triggered.
    // 
    // - **blackholed**: queries assets for which blackhole filtering is triggered.
    // 
    // - **normal**: queries assets that are not under DDoS attacks.
    shared_ptr<string> ddosStatus_ {};
    // The ID of the asset. The formats of asset IDs vary based on the value of the **InstanceType**. parameter.
    // 
    // - If you set **InstanceType** to **ecs**, specify the ID of the ECS instance. For example, you can specify i-bp1cb6x80tfgocid\\*\\*\\*\\*.
    // 
    // - If you set **InstanceType** to **slb**, specify the ID of the SLB instance. For example, you can specify alb-vn2dqg3v31y2vd\\*\\*\\*\\*.
    // 
    // - If you set **InstanceType** to **eip**, specify the ID of the EIP. For example, you can specify eip-j6ce6dcx9epi7rs46\\*\\*\\*\\*.
    shared_ptr<string> instanceId_ {};
    // The IP address of the asset.
    shared_ptr<string> instanceIp_ {};
    // The name of the asset.
    shared_ptr<string> instanceName_ {};
    // The type of the asset to query. Valid values:
    // 
    // - **ecs**: ECS instances.
    // 
    // - **slb**: SLB instances.
    // 
    // - **eip**: EIPs.
    // 
    // - **ipv6**: IPv6 gateways.
    // 
    // - **swas**: simple application servers.
    // 
    // - **waf**: Web Application Firewall (WAF) instances of the Exclusive edition.
    // 
    // - **ga_basic**: Global Accelerator (GA) instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The number of entries to return on each page. Default value: **10**.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
