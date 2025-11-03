// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6ADDRESSESRESPONSEBODYIPV6ADDRESSESIPV6ADDRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth.hpp>
#include <alibabacloud/models/DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_TO_JSON(AssociatedInstanceId, associatedInstanceId_);
      DARABONBA_PTR_TO_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressDescription, ipv6AddressDescription_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressName, ipv6AddressName_);
      DARABONBA_PTR_TO_JSON(Ipv6GatewayId, ipv6GatewayId_);
      DARABONBA_PTR_TO_JSON(Ipv6InternetBandwidth, ipv6InternetBandwidth_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RealBandwidth, realBandwidth_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(AllocationTime, allocationTime_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceId, associatedInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssociatedInstanceType, associatedInstanceType_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressDescription, ipv6AddressDescription_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressId, ipv6AddressId_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressName, ipv6AddressName_);
      DARABONBA_PTR_FROM_JSON(Ipv6GatewayId, ipv6GatewayId_);
      DARABONBA_PTR_FROM_JSON(Ipv6InternetBandwidth, ipv6InternetBandwidth_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RealBandwidth, realBandwidth_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address &&) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address() = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& operator=(const DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address &) = default ;
    DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& operator=(DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && return this->allocationTime_ == nullptr && return this->associatedInstanceId_ == nullptr && return this->associatedInstanceType_ == nullptr && return this->ipv6Address_ == nullptr && return this->ipv6AddressDescription_ == nullptr
        && return this->ipv6AddressId_ == nullptr && return this->ipv6AddressName_ == nullptr && return this->ipv6GatewayId_ == nullptr && return this->ipv6InternetBandwidth_ == nullptr && return this->ipv6Isp_ == nullptr
        && return this->networkType_ == nullptr && return this->realBandwidth_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serviceManaged_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string addressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // allocationTime Field Functions 
    bool hasAllocationTime() const { return this->allocationTime_ != nullptr;};
    void deleteAllocationTime() { this->allocationTime_ = nullptr;};
    inline string allocationTime() const { DARABONBA_PTR_GET_DEFAULT(allocationTime_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setAllocationTime(string allocationTime) { DARABONBA_PTR_SET_VALUE(allocationTime_, allocationTime) };


    // associatedInstanceId Field Functions 
    bool hasAssociatedInstanceId() const { return this->associatedInstanceId_ != nullptr;};
    void deleteAssociatedInstanceId() { this->associatedInstanceId_ = nullptr;};
    inline string associatedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceId_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setAssociatedInstanceId(string associatedInstanceId) { DARABONBA_PTR_SET_VALUE(associatedInstanceId_, associatedInstanceId) };


    // associatedInstanceType Field Functions 
    bool hasAssociatedInstanceType() const { return this->associatedInstanceType_ != nullptr;};
    void deleteAssociatedInstanceType() { this->associatedInstanceType_ = nullptr;};
    inline string associatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(associatedInstanceType_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setAssociatedInstanceType(string associatedInstanceType) { DARABONBA_PTR_SET_VALUE(associatedInstanceType_, associatedInstanceType) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline string ipv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


    // ipv6AddressDescription Field Functions 
    bool hasIpv6AddressDescription() const { return this->ipv6AddressDescription_ != nullptr;};
    void deleteIpv6AddressDescription() { this->ipv6AddressDescription_ = nullptr;};
    inline string ipv6AddressDescription() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressDescription_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6AddressDescription(string ipv6AddressDescription) { DARABONBA_PTR_SET_VALUE(ipv6AddressDescription_, ipv6AddressDescription) };


    // ipv6AddressId Field Functions 
    bool hasIpv6AddressId() const { return this->ipv6AddressId_ != nullptr;};
    void deleteIpv6AddressId() { this->ipv6AddressId_ = nullptr;};
    inline string ipv6AddressId() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressId_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6AddressId(string ipv6AddressId) { DARABONBA_PTR_SET_VALUE(ipv6AddressId_, ipv6AddressId) };


    // ipv6AddressName Field Functions 
    bool hasIpv6AddressName() const { return this->ipv6AddressName_ != nullptr;};
    void deleteIpv6AddressName() { this->ipv6AddressName_ = nullptr;};
    inline string ipv6AddressName() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressName_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6AddressName(string ipv6AddressName) { DARABONBA_PTR_SET_VALUE(ipv6AddressName_, ipv6AddressName) };


    // ipv6GatewayId Field Functions 
    bool hasIpv6GatewayId() const { return this->ipv6GatewayId_ != nullptr;};
    void deleteIpv6GatewayId() { this->ipv6GatewayId_ = nullptr;};
    inline string ipv6GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv6GatewayId_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6GatewayId(string ipv6GatewayId) { DARABONBA_PTR_SET_VALUE(ipv6GatewayId_, ipv6GatewayId) };


    // ipv6InternetBandwidth Field Functions 
    bool hasIpv6InternetBandwidth() const { return this->ipv6InternetBandwidth_ != nullptr;};
    void deleteIpv6InternetBandwidth() { this->ipv6InternetBandwidth_ = nullptr;};
    inline const Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth & ipv6InternetBandwidth() const { DARABONBA_PTR_GET_CONST(ipv6InternetBandwidth_, Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth) };
    inline Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth ipv6InternetBandwidth() { DARABONBA_PTR_GET(ipv6InternetBandwidth_, Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6InternetBandwidth(const Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth & ipv6InternetBandwidth) { DARABONBA_PTR_SET_VALUE(ipv6InternetBandwidth_, ipv6InternetBandwidth) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6InternetBandwidth(Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth && ipv6InternetBandwidth) { DARABONBA_PTR_SET_RVALUE(ipv6InternetBandwidth_, ipv6InternetBandwidth) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string ipv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // realBandwidth Field Functions 
    bool hasRealBandwidth() const { return this->realBandwidth_ != nullptr;};
    void deleteRealBandwidth() { this->realBandwidth_ = nullptr;};
    inline int32_t realBandwidth() const { DARABONBA_PTR_GET_DEFAULT(realBandwidth_, 0) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setRealBandwidth(int32_t realBandwidth) { DARABONBA_PTR_SET_VALUE(realBandwidth_, realBandwidth) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline int32_t serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, 0) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setServiceManaged(int32_t serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags) };
    inline Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setTags(const Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setTags(Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6Address& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The type of IPv6 address. Valid values:
    // 
    // *   IPv6Address (default): indicates a single IPv6 IP.
    // *   IPv6Prefix: indicates IPv6 CIDR.
    std::shared_ptr<string> addressType_ = nullptr;
    // The time when the IPv6 address was created.
    std::shared_ptr<string> allocationTime_ = nullptr;
    // The ID of the instance associated with the IPv6 address.
    std::shared_ptr<string> associatedInstanceId_ = nullptr;
    // The type of instance associated with the IPv6 address.
    std::shared_ptr<string> associatedInstanceType_ = nullptr;
    // The IPv6 address.
    std::shared_ptr<string> ipv6Address_ = nullptr;
    // The description of the IPv6 address.
    std::shared_ptr<string> ipv6AddressDescription_ = nullptr;
    // The ID of the IPv6 address.
    std::shared_ptr<string> ipv6AddressId_ = nullptr;
    // The name of the IPv6 address.
    std::shared_ptr<string> ipv6AddressName_ = nullptr;
    // The ID of the IPv6 gateway to which the IPv6 address belongs.
    std::shared_ptr<string> ipv6GatewayId_ = nullptr;
    // The Internet bandwidth of the IPv6 address.
    std::shared_ptr<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressIpv6InternetBandwidth> ipv6InternetBandwidth_ = nullptr;
    // The ISP of the IPv6 address. Valid values:
    // 
    // *   **BGP** (default)
    // *   **ChinaMobile**
    // *   **ChinaUnicom**
    // *   **ChinaTelecom**
    std::shared_ptr<string> ipv6Isp_ = nullptr;
    // The type of connection supported by the IPv6 address. Valid values:
    // 
    // *   **Private**
    // *   **Public**
    std::shared_ptr<string> networkType_ = nullptr;
    // The peak bandwidth of the IPv6 address.
    std::shared_ptr<int32_t> realBandwidth_ = nullptr;
    // The ID of the resource group to which the IPv6 gateway belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the instance is managed. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> serviceManaged_ = nullptr;
    // The status of the IPv6 address.
    // 
    // *   **Pending**
    // *   **Available**
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<Models::DescribeIpv6AddressesResponseBodyIpv6AddressesIpv6AddressTags> tags_ = nullptr;
    // The ID of the vSwitch to which the IPv6 address belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC to which the IPv6 address belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
