// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPDDOSTHRESHOLDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPDDOSTHRESHOLDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeIpDdosThresholdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpDdosThresholdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(DdosType, ddosType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpDdosThresholdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(DdosType, ddosType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
    };
    DescribeIpDdosThresholdRequest() = default ;
    DescribeIpDdosThresholdRequest(const DescribeIpDdosThresholdRequest &) = default ;
    DescribeIpDdosThresholdRequest(DescribeIpDdosThresholdRequest &&) = default ;
    DescribeIpDdosThresholdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpDdosThresholdRequest() = default ;
    DescribeIpDdosThresholdRequest& operator=(const DescribeIpDdosThresholdRequest &) = default ;
    DescribeIpDdosThresholdRequest& operator=(DescribeIpDdosThresholdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosRegionId_ != nullptr
        && this->ddosType_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->internetIp_ != nullptr; };
    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeIpDdosThresholdRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // ddosType Field Functions 
    bool hasDdosType() const { return this->ddosType_ != nullptr;};
    void deleteDdosType() { this->ddosType_ = nullptr;};
    inline string ddosType() const { DARABONBA_PTR_GET_DEFAULT(ddosType_, "") };
    inline DescribeIpDdosThresholdRequest& setDdosType(string ddosType) { DARABONBA_PTR_SET_VALUE(ddosType_, ddosType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeIpDdosThresholdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeIpDdosThresholdRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeIpDdosThresholdRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


  protected:
    // The region ID of the asset.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
    // The type of the threshold. Valid values:
    // 
    // *   **defense**: traffic scrubbing threshold
    // *   **blackhole**: DDoS mitigation threshold
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosType_ = nullptr;
    // The ID of the asset.
    // 
    // > You can call the [DescribeInstanceIpAddress](https://help.aliyun.com/document_detail/429562.html) operation to query the IDs of ECS instances, SLB instances, and EIPs within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the asset that is assigned a public IP address. Valid values:
    // 
    // *   **ecs**: ECS instances.
    // *   **slb**: SLB instances.
    // *   **eip**: EIPs.
    // *   **ipv6**: IPv6 gateways.
    // *   **swas**: simple application servers.
    // *   **waf**: Web Application Firewall (WAF) instances of the Exclusive edition.
    // *   **ga_basic**: Global Accelerator (GA) instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IP address of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> internetIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
