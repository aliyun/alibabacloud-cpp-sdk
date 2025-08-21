// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeCapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BegTime, begTime_);
      DARABONBA_PTR_TO_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BegTime, begTime_);
      DARABONBA_PTR_FROM_JSON(DdosRegionId, ddosRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
    };
    DescribeCapRequest() = default ;
    DescribeCapRequest(const DescribeCapRequest &) = default ;
    DescribeCapRequest(DescribeCapRequest &&) = default ;
    DescribeCapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapRequest() = default ;
    DescribeCapRequest& operator=(const DescribeCapRequest &) = default ;
    DescribeCapRequest& operator=(DescribeCapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begTime_ != nullptr
        && this->ddosRegionId_ != nullptr && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->internetIp_ != nullptr; };
    // begTime Field Functions 
    bool hasBegTime() const { return this->begTime_ != nullptr;};
    void deleteBegTime() { this->begTime_ = nullptr;};
    inline int64_t begTime() const { DARABONBA_PTR_GET_DEFAULT(begTime_, 0L) };
    inline DescribeCapRequest& setBegTime(int64_t begTime) { DARABONBA_PTR_SET_VALUE(begTime_, begTime) };


    // ddosRegionId Field Functions 
    bool hasDdosRegionId() const { return this->ddosRegionId_ != nullptr;};
    void deleteDdosRegionId() { this->ddosRegionId_ = nullptr;};
    inline string ddosRegionId() const { DARABONBA_PTR_GET_DEFAULT(ddosRegionId_, "") };
    inline DescribeCapRequest& setDdosRegionId(string ddosRegionId) { DARABONBA_PTR_SET_VALUE(ddosRegionId_, ddosRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCapRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeCapRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeCapRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


  protected:
    // The start time of the DDoS attack event. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // > You can call the [DescribeDdosEventList](https://help.aliyun.com/document_detail/354236.html) operation to query the start time of each DDoS attack event that occurred on an asset.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> begTime_ = nullptr;
    // The region ID of the asset that is under DDoS attacks. The asset is assigned a public IP address.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/353250.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> ddosRegionId_ = nullptr;
    // The ID of the asset that is under DDoS attacks.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/354191.html) operation to query the IDs of ECS instances, SLB instances, and EIPs within the current Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the asset that is under DDoS attacks. The asset is assigned a public IP address. Valid values:
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
    // The public IP address of the asset that is under DDoS attacks.
    std::shared_ptr<string> internetIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
