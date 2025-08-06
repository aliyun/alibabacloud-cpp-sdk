// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEEIPADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEEIPADDRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceEipAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceEipAddress& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(IsSupportUnassociate, isSupportUnassociate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceEipAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(IsSupportUnassociate, isSupportUnassociate_);
    };
    DescribeInstancesResponseBodyInstancesInstanceEipAddress() = default ;
    DescribeInstancesResponseBodyInstancesInstanceEipAddress(const DescribeInstancesResponseBodyInstancesInstanceEipAddress &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceEipAddress(DescribeInstancesResponseBodyInstancesInstanceEipAddress &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceEipAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceEipAddress() = default ;
    DescribeInstancesResponseBodyInstancesInstanceEipAddress& operator=(const DescribeInstancesResponseBodyInstancesInstanceEipAddress &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceEipAddress& operator=(DescribeInstancesResponseBodyInstancesInstanceEipAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->bandwidth_ != nullptr && this->internetChargeType_ != nullptr && this->ipAddress_ != nullptr && this->isSupportUnassociate_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceEipAddress& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeInstancesResponseBodyInstancesInstanceEipAddress& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceEipAddress& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceEipAddress& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // isSupportUnassociate Field Functions 
    bool hasIsSupportUnassociate() const { return this->isSupportUnassociate_ != nullptr;};
    void deleteIsSupportUnassociate() { this->isSupportUnassociate_ = nullptr;};
    inline bool isSupportUnassociate() const { DARABONBA_PTR_GET_DEFAULT(isSupportUnassociate_, false) };
    inline DescribeInstancesResponseBodyInstancesInstanceEipAddress& setIsSupportUnassociate(bool isSupportUnassociate) { DARABONBA_PTR_SET_VALUE(isSupportUnassociate_, isSupportUnassociate) };


  protected:
    // The ID of the EIP.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The maximum public bandwidth of the EIP. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The metering method of the EIP. Valid values:
    // 
    // *   PayByBandwidth
    // *   PayByTraffic
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The EIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // Indicates whether the EIP can be disassociated.
    std::shared_ptr<bool> isSupportUnassociate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
