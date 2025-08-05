// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILRESPONSEBODYTRAFFICLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILRESPONSEBODYTRAFFICLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayTrafficDetailResponseBodyTrafficList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayTrafficDetailResponseBodyTrafficList& obj) { 
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(ProtectionDuration, protectionDuration_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(TrafficDay, trafficDay_);
      DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayTrafficDetailResponseBodyTrafficList& obj) { 
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(ProtectionDuration, protectionDuration_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(TrafficDay, trafficDay_);
      DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
    };
    DescribePostpayTrafficDetailResponseBodyTrafficList() = default ;
    DescribePostpayTrafficDetailResponseBodyTrafficList(const DescribePostpayTrafficDetailResponseBodyTrafficList &) = default ;
    DescribePostpayTrafficDetailResponseBodyTrafficList(DescribePostpayTrafficDetailResponseBodyTrafficList &&) = default ;
    DescribePostpayTrafficDetailResponseBodyTrafficList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayTrafficDetailResponseBodyTrafficList() = default ;
    DescribePostpayTrafficDetailResponseBodyTrafficList& operator=(const DescribePostpayTrafficDetailResponseBodyTrafficList &) = default ;
    DescribePostpayTrafficDetailResponseBodyTrafficList& operator=(DescribePostpayTrafficDetailResponseBodyTrafficList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inBytes_ != nullptr
        && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->outBytes_ != nullptr && this->protectionDuration_ != nullptr && this->regionNo_ != nullptr
        && this->resourceId_ != nullptr && this->totalBytes_ != nullptr && this->trafficDay_ != nullptr && this->trafficType_ != nullptr; };
    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // protectionDuration Field Functions 
    bool hasProtectionDuration() const { return this->protectionDuration_ != nullptr;};
    void deleteProtectionDuration() { this->protectionDuration_ = nullptr;};
    inline int64_t protectionDuration() const { DARABONBA_PTR_GET_DEFAULT(protectionDuration_, 0L) };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setProtectionDuration(int64_t protectionDuration) { DARABONBA_PTR_SET_VALUE(protectionDuration_, protectionDuration) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // trafficDay Field Functions 
    bool hasTrafficDay() const { return this->trafficDay_ != nullptr;};
    void deleteTrafficDay() { this->trafficDay_ = nullptr;};
    inline string trafficDay() const { DARABONBA_PTR_GET_DEFAULT(trafficDay_, "") };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setTrafficDay(string trafficDay) { DARABONBA_PTR_SET_VALUE(trafficDay_, trafficDay) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline string trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
    inline DescribePostpayTrafficDetailResponseBodyTrafficList& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    // The inbound network throughput, which indicates the total number of bytes that are received Unit: bytes.
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The asset type. This value takes effect only for the Internet firewall.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The outbound network throughput, which indicates the total number of bytes that are sent. Unit: bytes.
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    // Protection duration. Unit: hours.
    std::shared_ptr<int64_t> protectionDuration_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionNo_ = nullptr;
    // The resource ID. The resource ID for the Internet firewall is the public IP address that is protected the Internet firewall, and the resource ID for a NAT firewall is the instance ID of the NAT firewall.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The total inbound and outbound network throughput, which indicates the total number of bytes that are received and sent. Unit: bytes.
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
    // The date on which the statistics are collected.
    std::shared_ptr<string> trafficDay_ = nullptr;
    // The traffic type. Valid values:
    // 
    // *   **EIP_TRAFFIC**: traffic for the Internet firewall
    // *   **NatGateway_TRAFFIC**: traffic for NAT firewalls
    // *   **VPC_TRAFFIC**: traffic for VPC firewalls
    std::shared_ptr<string> trafficType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
