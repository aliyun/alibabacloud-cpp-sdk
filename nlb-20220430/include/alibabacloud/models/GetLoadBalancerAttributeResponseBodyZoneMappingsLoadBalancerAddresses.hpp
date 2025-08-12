// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYZONEMAPPINGSLOADBALANCERADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_GETLOADBALANCERATTRIBUTERESPONSEBODYZONEMAPPINGSLOADBALANCERADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(EniId, eniId_);
      DARABONBA_PTR_TO_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
      DARABONBA_PTR_TO_JSON(PrivateIPv4Address, privateIPv4Address_);
      DARABONBA_PTR_TO_JSON(PrivateIPv4HcStatus, privateIPv4HcStatus_);
      DARABONBA_PTR_TO_JSON(PrivateIPv6HcStatus, privateIPv6HcStatus_);
      DARABONBA_PTR_TO_JSON(PublicIPv4Address, publicIPv4Address_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(EniId, eniId_);
      DARABONBA_PTR_FROM_JSON(Ipv4LocalAddresses, ipv4LocalAddresses_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Ipv6LocalAddresses, ipv6LocalAddresses_);
      DARABONBA_PTR_FROM_JSON(PrivateIPv4Address, privateIPv4Address_);
      DARABONBA_PTR_FROM_JSON(PrivateIPv4HcStatus, privateIPv4HcStatus_);
      DARABONBA_PTR_FROM_JSON(PrivateIPv6HcStatus, privateIPv6HcStatus_);
      DARABONBA_PTR_FROM_JSON(PublicIPv4Address, publicIPv4Address_);
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
    virtual bool empty() const override { this->allocationId_ != nullptr
        && this->eniId_ != nullptr && this->ipv4LocalAddresses_ != nullptr && this->ipv6Address_ != nullptr && this->ipv6LocalAddresses_ != nullptr && this->privateIPv4Address_ != nullptr
        && this->privateIPv4HcStatus_ != nullptr && this->privateIPv6HcStatus_ != nullptr && this->publicIPv4Address_ != nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // eniId Field Functions 
    bool hasEniId() const { return this->eniId_ != nullptr;};
    void deleteEniId() { this->eniId_ = nullptr;};
    inline string eniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


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


    // ipv6LocalAddresses Field Functions 
    bool hasIpv6LocalAddresses() const { return this->ipv6LocalAddresses_ != nullptr;};
    void deleteIpv6LocalAddresses() { this->ipv6LocalAddresses_ = nullptr;};
    inline const vector<string> & ipv6LocalAddresses() const { DARABONBA_PTR_GET_CONST(ipv6LocalAddresses_, vector<string>) };
    inline vector<string> ipv6LocalAddresses() { DARABONBA_PTR_GET(ipv6LocalAddresses_, vector<string>) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv6LocalAddresses(const vector<string> & ipv6LocalAddresses) { DARABONBA_PTR_SET_VALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setIpv6LocalAddresses(vector<string> && ipv6LocalAddresses) { DARABONBA_PTR_SET_RVALUE(ipv6LocalAddresses_, ipv6LocalAddresses) };


    // privateIPv4Address Field Functions 
    bool hasPrivateIPv4Address() const { return this->privateIPv4Address_ != nullptr;};
    void deletePrivateIPv4Address() { this->privateIPv4Address_ = nullptr;};
    inline string privateIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4Address_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setPrivateIPv4Address(string privateIPv4Address) { DARABONBA_PTR_SET_VALUE(privateIPv4Address_, privateIPv4Address) };


    // privateIPv4HcStatus Field Functions 
    bool hasPrivateIPv4HcStatus() const { return this->privateIPv4HcStatus_ != nullptr;};
    void deletePrivateIPv4HcStatus() { this->privateIPv4HcStatus_ = nullptr;};
    inline string privateIPv4HcStatus() const { DARABONBA_PTR_GET_DEFAULT(privateIPv4HcStatus_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setPrivateIPv4HcStatus(string privateIPv4HcStatus) { DARABONBA_PTR_SET_VALUE(privateIPv4HcStatus_, privateIPv4HcStatus) };


    // privateIPv6HcStatus Field Functions 
    bool hasPrivateIPv6HcStatus() const { return this->privateIPv6HcStatus_ != nullptr;};
    void deletePrivateIPv6HcStatus() { this->privateIPv6HcStatus_ = nullptr;};
    inline string privateIPv6HcStatus() const { DARABONBA_PTR_GET_DEFAULT(privateIPv6HcStatus_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setPrivateIPv6HcStatus(string privateIPv6HcStatus) { DARABONBA_PTR_SET_VALUE(privateIPv6HcStatus_, privateIPv6HcStatus) };


    // publicIPv4Address Field Functions 
    bool hasPublicIPv4Address() const { return this->publicIPv4Address_ != nullptr;};
    void deletePublicIPv4Address() { this->publicIPv4Address_ = nullptr;};
    inline string publicIPv4Address() const { DARABONBA_PTR_GET_DEFAULT(publicIPv4Address_, "") };
    inline GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses& setPublicIPv4Address(string publicIPv4Address) { DARABONBA_PTR_SET_VALUE(publicIPv4Address_, publicIPv4Address) };


  protected:
    // The ID of the elastic IP address (EIP).
    std::shared_ptr<string> allocationId_ = nullptr;
    // The ID of the elastic network interface (ENI).
    std::shared_ptr<string> eniId_ = nullptr;
    // The IPv4 link-local addresses. The IP addresses that the NLB instance uses to communicate with the backend servers.
    std::shared_ptr<vector<string>> ipv4LocalAddresses_ = nullptr;
    // The IPv6 address of the NLB instance.
    std::shared_ptr<string> ipv6Address_ = nullptr;
    // The IPv6 link-local addresses. The IP addresses that the NLB instance uses to communicate with the backend servers.
    std::shared_ptr<vector<string>> ipv6LocalAddresses_ = nullptr;
    // The private IPv4 address of the NLB instance.
    std::shared_ptr<string> privateIPv4Address_ = nullptr;
    // The health status of the private IPv4 address of the NLB instance. Valid values:
    // 
    // *   **Healthy**
    // *   **Unhealthy**
    // 
    // > This parameter is returned only when the **Status** of the zone is **Active**.
    std::shared_ptr<string> privateIPv4HcStatus_ = nullptr;
    // The health status of the IPv6 address of the NLB instance. Valid values:
    // 
    // *   **Healthy**
    // *   **Unhealthy**
    // 
    // > This parameter is returned only when the **Status** of the zone is **Active**.
    std::shared_ptr<string> privateIPv6HcStatus_ = nullptr;
    // The public IPv4 address of the NLB instance.
    std::shared_ptr<string> publicIPv4Address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
