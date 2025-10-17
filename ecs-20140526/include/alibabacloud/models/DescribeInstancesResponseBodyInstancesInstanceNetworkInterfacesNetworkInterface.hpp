// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKINTERFACESNETWORKINTERFACE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKINTERFACESNETWORKINTERFACE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface() = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface(const DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface(DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface() = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& operator=(const DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& operator=(DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4PrefixSets_ == nullptr
        && return this->ipv6PrefixSets_ == nullptr && return this->ipv6Sets_ == nullptr && return this->macAddress_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->primaryIpAddress_ == nullptr
        && return this->privateIpSets_ == nullptr && return this->type_ == nullptr; };
    // ipv4PrefixSets Field Functions 
    bool hasIpv4PrefixSets() const { return this->ipv4PrefixSets_ != nullptr;};
    void deleteIpv4PrefixSets() { this->ipv4PrefixSets_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets & ipv4PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets ipv4PrefixSets() { DARABONBA_PTR_GET(ipv4PrefixSets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setIpv4PrefixSets(const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets & ipv4PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSets_, ipv4PrefixSets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setIpv4PrefixSets(Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets && ipv4PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSets_, ipv4PrefixSets) };


    // ipv6PrefixSets Field Functions 
    bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
    void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets & ipv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets ipv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setIpv6PrefixSets(const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setIpv6PrefixSets(Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets & ipv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets ipv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setIpv6Sets(const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setIpv6Sets(Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string macAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // primaryIpAddress Field Functions 
    bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
    void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
    inline string primaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


    // privateIpSets Field Functions 
    bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
    void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets & privateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets privateIpSets() { DARABONBA_PTR_GET(privateIpSets_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setPrivateIpSets(const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setPrivateIpSets(Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterface& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IPv4 prefixes of the ENI. This parameter has a value only when `AdditionalAttributes.N` is set to `NETWORK_PRIMARY_ENI_IP`.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv4PrefixSets> ipv4PrefixSets_ = nullptr;
    // The IPv6 prefixes of the ENI. This parameter has a value only when `AdditionalAttributes.N` is set to `NETWORK_PRIMARY_ENI_IP`.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6PrefixSets> ipv6PrefixSets_ = nullptr;
    // The IPv6 addresses of the ENI. This parameter has a value only when `AdditionalAttributes.N` is set to `NETWORK_PRIMARY_ENI_IP`.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfaceIpv6Sets> ipv6Sets_ = nullptr;
    // The MAC address of the ENI.
    std::shared_ptr<string> macAddress_ = nullptr;
    // The ID of the ENI.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The primary private IP address of the ENI.
    std::shared_ptr<string> primaryIpAddress_ = nullptr;
    // The private IP addresses of the ENI.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkInterfacesNetworkInterfacePrivateIpSets> privateIpSets_ = nullptr;
    // The type of the ENI. Valid values:
    // 
    // *   Primary
    // *   Secondary
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
