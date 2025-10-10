// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYZONEMAPPINGSLOADBALANCERADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYZONEMAPPINGSLOADBALANCERADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(EipType, eipType_);
      DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_TO_JSON(IntranetAddressHcStatus, intranetAddressHcStatus_);
      DARABONBA_PTR_TO_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressHcStatus, ipv6AddressHcStatus_);
      DARABONBA_PTR_TO_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(EipType, eipType_);
      DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_FROM_JSON(IntranetAddressHcStatus, intranetAddressHcStatus_);
      DARABONBA_PTR_FROM_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressHcStatus, ipv6AddressHcStatus_);
      DARABONBA_PTR_FROM_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
    };
    GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses(const GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses &) = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses(GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses &&) = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& operator=(const GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses &) = default ;
    GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& operator=(GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->allocationId_ != nullptr && this->eipType_ != nullptr && this->intranetAddress_ != nullptr && this->intranetAddressHcStatus_ != nullptr && this->ipv4LocalAddresses_ != nullptr
        && this->ipv6Address_ != nullptr && this->ipv6AddressHcStatus_ != nullptr && this->ipv6LocalAddresses_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string address() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // eipType Field Functions 
    bool hasEipType() const { return this->eipType_ != nullptr;};
    void deleteEipType() { this->eipType_ = nullptr;};
    inline string eipType() const { DARABONBA_PTR_GET_DEFAULT(eipType_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setEipType(string eipType) { DARABONBA_PTR_SET_VALUE(eipType_, eipType) };


    // intranetAddress Field Functions 
    bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
    void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
    inline string intranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


    // intranetAddressHcStatus Field Functions 
    bool hasIntranetAddressHcStatus() const { return this->intranetAddressHcStatus_ != nullptr;};
    void deleteIntranetAddressHcStatus() { this->intranetAddressHcStatus_ = nullptr;};
    inline string intranetAddressHcStatus() const { DARABONBA_PTR_GET_DEFAULT(intranetAddressHcStatus_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIntranetAddressHcStatus(string intranetAddressHcStatus) { DARABONBA_PTR_SET_VALUE(intranetAddressHcStatus_, intranetAddressHcStatus) };


    // ipv4LocalAddresses Field Functions 
    bool hasIpv4LocalAddresses() const { return this->ipv4LocalAddresses_ != nullptr;};
    void deleteIpv4LocalAddresses() { this->ipv4LocalAddresses_ = nullptr;};
    inline const vector<string> & ipv4LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv4LocalAddresses_, vector<string>) };
    inline vector<string> ipv4LocalAddresses() { DARABONBA_PTR_GET(ipv4LocalAddresses_, vector<string>) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv4LocalAddresses(const vector<string> & ipv4LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv4LocalAddresses(vector<string> && ipv4LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv4LocalAddresses_, ipv4LocalAddresses) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline string ipv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


    // ipv6AddressHcStatus Field Functions 
    bool hasIpv6AddressHcStatus() const { return this->ipv6AddressHcStatus_ != nullptr;};
    void deleteIpv6AddressHcStatus() { this->ipv6AddressHcStatus_ = nullptr;};
    inline string ipv6AddressHcStatus() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressHcStatus_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv6AddressHcStatus(string ipv6AddressHcStatus) { DARABONBA_PTR_SET_VALUE(ipv6AddressHcStatus_, ipv6AddressHcStatus) };


    // ipv6LocalAddresses Field Functions 
    bool hasIpv6LocalAddresses() const { return this->ipv6LocalAddresses_ != nullptr;};
    void deleteIpv6LocalAddresses() { this->ipv6LocalAddresses_ = nullptr;};
    inline const vector<string> & ipv6LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv6LocalAddresses_, vector<string>) };
    inline vector<string> ipv6LocalAddresses() { DARABONBA_PTR_GET(ipv6LocalAddresses_, vector<string>) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv6LocalAddresses(const vector<string> & ipv6LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv6LocalAddresses(vector<string> && ipv6LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };


  protected:
    // An IPv4 address.
    // 
    // This parameter takes effect when **AddressIPVersion** is set to **IPv4** or **DualStack**. The network type is determined by the value of **AddressType**.
    std::shared_ptr<string> address_ = nullptr;
    // The elastic IP address (EIP).
    std::shared_ptr<string> allocationId_ = nullptr;
    // The type of EIP. Valid values:
    // 
    // *   **Common**: an EIP.
    // *   **Anycast**: an Anycast EIP.
    // 
    // >  For more information about the regions in which ALB supports Anycast EIPs, see [Limits](https://help.aliyun.com/document_detail/460727.html).
    std::shared_ptr<string> eipType_ = nullptr;
    // The private IPv4 address.
    std::shared_ptr<string> intranetAddress_ = nullptr;
    // The health status of the private IPv4 address of the ALB instance. 
    // This parameter is returned only when the Status of the zone is Active.Valid values:
    // 
    // - **Healthy**
    // 
    // - **Unhealthy**
    std::shared_ptr<string> intranetAddressHcStatus_ = nullptr;
    // The IPv4 link-local addresses. The IP addresses that the ALB instance uses to communicate with the backend servers.
    std::shared_ptr<vector<string>> ipv4LocalAddresses_ = nullptr;
    // An IPv6 address.
    // 
    // This parameter takes effect only when **AddressIPVersion** is set to **DualStack**. The network type is determined by the value of **Ipv6AddressType**.
    std::shared_ptr<string> ipv6Address_ = nullptr;
    // The health status of the private IPv6 address of the ALB instance. 
    // This parameter is returned only when the Status of the zone is Active.Valid values:
    // 
    // - **Healthy**
    // 
    // - **Unhealthy**
    std::shared_ptr<string> ipv6AddressHcStatus_ = nullptr;
    // The IPv6 link-local addresses. The IP addresses that the ALB instance uses to communicate with the backend servers.
    std::shared_ptr<vector<string>> ipv6LocalAddresses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
