// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACESRESPONSEBODYNETWORKINTERFACESETSNETWORKINTERFACESET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets.hpp>
#include <alibabacloud/models/DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets.hpp>
#include <alibabacloud/models/DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(PrimaryIp, primaryIp_);
      DARABONBA_PTR_TO_JSON(PrimaryIpType, primaryIpType_);
      DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryIp, primaryIp_);
      DARABONBA_PTR_FROM_JSON(PrimaryIpType, primaryIpType_);
      DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet &&) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet() = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& operator=(const DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet &) = default ;
    DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& operator=(DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->description_ != nullptr && this->ensRegionId_ != nullptr && this->instanceId_ != nullptr && this->ipv6Sets_ != nullptr && this->macAddress_ != nullptr
        && this->networkId_ != nullptr && this->networkInterfaceId_ != nullptr && this->networkInterfaceName_ != nullptr && this->primaryIp_ != nullptr && this->primaryIpType_ != nullptr
        && this->privateIpSets_ != nullptr && this->securityGroupIds_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->vSwitchId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets & ipv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets) };
    inline Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets ipv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setIpv6Sets(const Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setIpv6Sets(Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string macAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // primaryIp Field Functions 
    bool hasPrimaryIp() const { return this->primaryIp_ != nullptr;};
    void deletePrimaryIp() { this->primaryIp_ = nullptr;};
    inline string primaryIp() const { DARABONBA_PTR_GET_DEFAULT(primaryIp_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setPrimaryIp(string primaryIp) { DARABONBA_PTR_SET_VALUE(primaryIp_, primaryIp) };


    // primaryIpType Field Functions 
    bool hasPrimaryIpType() const { return this->primaryIpType_ != nullptr;};
    void deletePrimaryIpType() { this->primaryIpType_ = nullptr;};
    inline string primaryIpType() const { DARABONBA_PTR_GET_DEFAULT(primaryIpType_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setPrimaryIpType(string primaryIpType) { DARABONBA_PTR_SET_VALUE(primaryIpType_, primaryIpType) };


    // privateIpSets Field Functions 
    bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
    void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
    inline const Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets & privateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets) };
    inline Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets privateIpSets() { DARABONBA_PTR_GET(privateIpSets_, Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setPrivateIpSets(const Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setPrivateIpSets(Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds) };
    inline Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setSecurityGroupIds(const Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setSecurityGroupIds(Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSet& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The time when the ENI was created. Specify the time in the ISO 8601 standard in the yyyy-MM-ddThh:mmZ format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of ENI.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the instance to which the ENI is bound.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IPv6 addresses of the ENIs.
    std::shared_ptr<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetIpv6Sets> ipv6Sets_ = nullptr;
    // The MAC address of the ENI.
    std::shared_ptr<string> macAddress_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The ID of the ENI.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The ENI name.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> primaryIp_ = nullptr;
    // The primary private IP address. Valid values:
    // 
    // *   **Public**: public IP address.
    // *   **Private**: internal IP address.
    std::shared_ptr<string> primaryIpType_ = nullptr;
    // Details about the private IP address.
    std::shared_ptr<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetPrivateIpSets> privateIpSets_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<Models::DescribeNetworkInterfacesResponseBodyNetworkInterfaceSetsNetworkInterfaceSetSecurityGroupIds> securityGroupIds_ = nullptr;
    // The status of the ENI. Valid values:
    // 
    // *   Available: The ENI is available.
    // *   Attaching: The ENI is being attached to an instance.
    // *   InUse: The ENI is attached to an instance.
    // *   Detaching: The ENI is being detached from an instance.
    // *   Deleting: The ENI is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the ENI. Valid values:
    // 
    // *   Primary
    // *   Secondary
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
