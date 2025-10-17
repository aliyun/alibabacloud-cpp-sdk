// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyAttachment.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedPublicIp, associatedPublicIp_);
      DARABONBA_PTR_TO_JSON(Attachment, attachment_);
      DARABONBA_PTR_TO_JSON(BondInterfaceSpecification, bondInterfaceSpecification_);
      DARABONBA_PTR_TO_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_TO_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
      DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TcpOptionAddressEnabled, tcpOptionAddressEnabled_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedPublicIp, associatedPublicIp_);
      DARABONBA_PTR_FROM_JSON(Attachment, attachment_);
      DARABONBA_PTR_FROM_JSON(BondInterfaceSpecification, bondInterfaceSpecification_);
      DARABONBA_PTR_FROM_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixSets, ipv4PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixSets, ipv6PrefixSets_);
      DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
      DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
      DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(ServiceID, serviceID_);
      DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
      DARABONBA_PTR_FROM_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
      DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TcpOptionAddressEnabled, tcpOptionAddressEnabled_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeNetworkInterfaceAttributeResponseBody() = default ;
    DescribeNetworkInterfaceAttributeResponseBody(const DescribeNetworkInterfaceAttributeResponseBody &) = default ;
    DescribeNetworkInterfaceAttributeResponseBody(DescribeNetworkInterfaceAttributeResponseBody &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBody() = default ;
    DescribeNetworkInterfaceAttributeResponseBody& operator=(const DescribeNetworkInterfaceAttributeResponseBody &) = default ;
    DescribeNetworkInterfaceAttributeResponseBody& operator=(DescribeNetworkInterfaceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedPublicIp_ == nullptr
        && return this->attachment_ == nullptr && return this->bondInterfaceSpecification_ == nullptr && return this->connectionTrackingConfiguration_ == nullptr && return this->creationTime_ == nullptr && return this->deleteOnRelease_ == nullptr
        && return this->description_ == nullptr && return this->enhancedNetwork_ == nullptr && return this->instanceId_ == nullptr && return this->ipv4PrefixSets_ == nullptr && return this->ipv6PrefixSets_ == nullptr
        && return this->ipv6Sets_ == nullptr && return this->macAddress_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->networkInterfaceName_ == nullptr && return this->networkInterfaceTrafficConfig_ == nullptr
        && return this->networkInterfaceTrafficMode_ == nullptr && return this->ownerId_ == nullptr && return this->privateIpAddress_ == nullptr && return this->privateIpSets_ == nullptr && return this->queueNumber_ == nullptr
        && return this->queuePairNumber_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupIds_ == nullptr && return this->serviceID_ == nullptr
        && return this->serviceManaged_ == nullptr && return this->slaveInterfaceSpecification_ == nullptr && return this->sourceDestCheck_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr
        && return this->tcpOptionAddressEnabled_ == nullptr && return this->type_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // associatedPublicIp Field Functions 
    bool hasAssociatedPublicIp() const { return this->associatedPublicIp_ != nullptr;};
    void deleteAssociatedPublicIp() { this->associatedPublicIp_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp & associatedPublicIp() const { DARABONBA_PTR_GET_CONST(associatedPublicIp_, DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp associatedPublicIp() { DARABONBA_PTR_GET(associatedPublicIp_, DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAssociatedPublicIp(const DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp & associatedPublicIp) { DARABONBA_PTR_SET_VALUE(associatedPublicIp_, associatedPublicIp) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAssociatedPublicIp(DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp && associatedPublicIp) { DARABONBA_PTR_SET_RVALUE(associatedPublicIp_, associatedPublicIp) };


    // attachment Field Functions 
    bool hasAttachment() const { return this->attachment_ != nullptr;};
    void deleteAttachment() { this->attachment_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyAttachment & attachment() const { DARABONBA_PTR_GET_CONST(attachment_, DescribeNetworkInterfaceAttributeResponseBodyAttachment) };
    inline DescribeNetworkInterfaceAttributeResponseBodyAttachment attachment() { DARABONBA_PTR_GET(attachment_, DescribeNetworkInterfaceAttributeResponseBodyAttachment) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAttachment(const DescribeNetworkInterfaceAttributeResponseBodyAttachment & attachment) { DARABONBA_PTR_SET_VALUE(attachment_, attachment) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setAttachment(DescribeNetworkInterfaceAttributeResponseBodyAttachment && attachment) { DARABONBA_PTR_SET_RVALUE(attachment_, attachment) };


    // bondInterfaceSpecification Field Functions 
    bool hasBondInterfaceSpecification() const { return this->bondInterfaceSpecification_ != nullptr;};
    void deleteBondInterfaceSpecification() { this->bondInterfaceSpecification_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification & bondInterfaceSpecification() const { DARABONBA_PTR_GET_CONST(bondInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification bondInterfaceSpecification() { DARABONBA_PTR_GET(bondInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setBondInterfaceSpecification(const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification & bondInterfaceSpecification) { DARABONBA_PTR_SET_VALUE(bondInterfaceSpecification_, bondInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setBondInterfaceSpecification(DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification && bondInterfaceSpecification) { DARABONBA_PTR_SET_RVALUE(bondInterfaceSpecification_, bondInterfaceSpecification) };


    // connectionTrackingConfiguration Field Functions 
    bool hasConnectionTrackingConfiguration() const { return this->connectionTrackingConfiguration_ != nullptr;};
    void deleteConnectionTrackingConfiguration() { this->connectionTrackingConfiguration_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration & connectionTrackingConfiguration() const { DARABONBA_PTR_GET_CONST(connectionTrackingConfiguration_, DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration) };
    inline DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration connectionTrackingConfiguration() { DARABONBA_PTR_GET(connectionTrackingConfiguration_, DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setConnectionTrackingConfiguration(const DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration & connectionTrackingConfiguration) { DARABONBA_PTR_SET_VALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setConnectionTrackingConfiguration(DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration && connectionTrackingConfiguration) { DARABONBA_PTR_SET_RVALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deleteOnRelease Field Functions 
    bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
    void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
    inline bool deleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enhancedNetwork Field Functions 
    bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
    void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork & enhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork) };
    inline DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork enhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setEnhancedNetwork(const DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setEnhancedNetwork(DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ipv4PrefixSets Field Functions 
    bool hasIpv4PrefixSets() const { return this->ipv4PrefixSets_ != nullptr;};
    void deleteIpv4PrefixSets() { this->ipv4PrefixSets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets & ipv4PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv4PrefixSets_, DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets ipv4PrefixSets() { DARABONBA_PTR_GET(ipv4PrefixSets_, DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv4PrefixSets(const DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets & ipv4PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv4PrefixSets_, ipv4PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv4PrefixSets(DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets && ipv4PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv4PrefixSets_, ipv4PrefixSets) };


    // ipv6PrefixSets Field Functions 
    bool hasIpv6PrefixSets() const { return this->ipv6PrefixSets_ != nullptr;};
    void deleteIpv6PrefixSets() { this->ipv6PrefixSets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets & ipv6PrefixSets() const { DARABONBA_PTR_GET_CONST(ipv6PrefixSets_, DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets ipv6PrefixSets() { DARABONBA_PTR_GET(ipv6PrefixSets_, DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6PrefixSets(const DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets & ipv6PrefixSets) { DARABONBA_PTR_SET_VALUE(ipv6PrefixSets_, ipv6PrefixSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6PrefixSets(DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets && ipv6PrefixSets) { DARABONBA_PTR_SET_RVALUE(ipv6PrefixSets_, ipv6PrefixSets) };


    // ipv6Sets Field Functions 
    bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
    void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets & ipv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets) };
    inline DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets ipv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6Sets(const DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setIpv6Sets(DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


    // macAddress Field Functions 
    bool hasMacAddress() const { return this->macAddress_ != nullptr;};
    void deleteMacAddress() { this->macAddress_ = nullptr;};
    inline string macAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // networkInterfaceTrafficConfig Field Functions 
    bool hasNetworkInterfaceTrafficConfig() const { return this->networkInterfaceTrafficConfig_ != nullptr;};
    void deleteNetworkInterfaceTrafficConfig() { this->networkInterfaceTrafficConfig_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig() const { DARABONBA_PTR_GET_CONST(networkInterfaceTrafficConfig_, DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig networkInterfaceTrafficConfig() { DARABONBA_PTR_GET(networkInterfaceTrafficConfig_, DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceTrafficConfig(const DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceTrafficConfig(DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig && networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_RVALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };


    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // privateIpSets Field Functions 
    bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
    void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets & privateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets) };
    inline DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets privateIpSets() { DARABONBA_PTR_GET(privateIpSets_, DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setPrivateIpSets(const DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setPrivateIpSets(DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t queueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t queuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds) };
    inline DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSecurityGroupIds(const DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSecurityGroupIds(DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // serviceID Field Functions 
    bool hasServiceID() const { return this->serviceID_ != nullptr;};
    void deleteServiceID() { this->serviceID_ = nullptr;};
    inline int64_t serviceID() const { DARABONBA_PTR_GET_DEFAULT(serviceID_, 0L) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setServiceID(int64_t serviceID) { DARABONBA_PTR_SET_VALUE(serviceID_, serviceID) };


    // serviceManaged Field Functions 
    bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
    void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
    inline bool serviceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


    // slaveInterfaceSpecification Field Functions 
    bool hasSlaveInterfaceSpecification() const { return this->slaveInterfaceSpecification_ != nullptr;};
    void deleteSlaveInterfaceSpecification() { this->slaveInterfaceSpecification_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification & slaveInterfaceSpecification() const { DARABONBA_PTR_GET_CONST(slaveInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification slaveInterfaceSpecification() { DARABONBA_PTR_GET(slaveInterfaceSpecification_, DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSlaveInterfaceSpecification(const DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification & slaveInterfaceSpecification) { DARABONBA_PTR_SET_VALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSlaveInterfaceSpecification(DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification && slaveInterfaceSpecification) { DARABONBA_PTR_SET_RVALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool sourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeNetworkInterfaceAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeNetworkInterfaceAttributeResponseBodyTags) };
    inline DescribeNetworkInterfaceAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeNetworkInterfaceAttributeResponseBodyTags) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setTags(const DescribeNetworkInterfaceAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNetworkInterfaceAttributeResponseBody& setTags(DescribeNetworkInterfaceAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tcpOptionAddressEnabled Field Functions 
    bool hasTcpOptionAddressEnabled() const { return this->tcpOptionAddressEnabled_ != nullptr;};
    void deleteTcpOptionAddressEnabled() { this->tcpOptionAddressEnabled_ = nullptr;};
    inline string tcpOptionAddressEnabled() const { DARABONBA_PTR_GET_DEFAULT(tcpOptionAddressEnabled_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setTcpOptionAddressEnabled(string tcpOptionAddressEnabled) { DARABONBA_PTR_SET_VALUE(tcpOptionAddressEnabled_, tcpOptionAddressEnabled) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Details about the elastic IP address (EIP) that is associated with the secondary private IP address of the ENI.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyAssociatedPublicIp> associatedPublicIp_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyAttachment> attachment_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification> bondInterfaceSpecification_ = nullptr;
    // The connection tracking configurations of the ENI.
    // 
    // Before you use this parameter, learn about how to manage connection timeout periods. For more information, see [Manage connection timeout periods](https://help.aliyun.com/document_detail/2865958.html).
    // 
    // >  This parameter is returned only if `Attribute` is set to `connectionTrackingConfiguration`.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyConnectionTrackingConfiguration> connectionTrackingConfiguration_ = nullptr;
    // The time when the ENI was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether to retain the ENI when the associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> deleteOnRelease_ = nullptr;
    // The description of the ENI.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyEnhancedNetwork> enhancedNetwork_ = nullptr;
    // The ID of the instance to which the ENI is attached.
    // 
    // >  If the ENI is managed and controlled by other Alibaba Cloud services, no instance ID is returned.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IPv4 prefixes of the ENI.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyIpv4PrefixSets> ipv4PrefixSets_ = nullptr;
    // The IPv6 prefixes of the ENI.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyIpv6PrefixSets> ipv6PrefixSets_ = nullptr;
    // The IPv6 addresses of the ENI.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyIpv6Sets> ipv6Sets_ = nullptr;
    // The media access control (MAC) address of the ENI.
    std::shared_ptr<string> macAddress_ = nullptr;
    // The ID of the ENI.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The name of the ENI.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The communication settings of the ENI.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyNetworkInterfaceTrafficConfig> networkInterfaceTrafficConfig_ = nullptr;
    // The communication mode of the ENI. Valid values:
    // 
    // *   Standard: The TCP communication mode is used.
    // *   HighPerformance: The Elastic RDMA Interface (ERI) feature is enabled and the remote direct memory access (RDMA) communication mode is used.
    // 
    // >  This parameter can have a value of HighPerformance only when the ENI is attached to a c7re RDMA-enhanced instance.
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    // The ID of the account to which the ENI belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The private IP address of the ENI.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // The private IP addresses of the ENI.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyPrivateIpSets> privateIpSets_ = nullptr;
    // The number of queues supported by the ENI.
    // 
    // *   For a primary ENI: The default number of queues that the instance type supports for the ENI is returned.
    // 
    // *   For a secondary ENI:
    // 
    //     *   When the ENI is in the InUse state, the following situations occur for the QueueNumber parameter:
    // 
    //         *   If the number of queues supported by the ENI has not been modified, the default number of queues that the instance type supports for the ENI is returned.
    //         *   If the number of queues supported by the ENI has been modified, the new number of queues is returned.
    // 
    //     *   When the ENI is in the Available state, the following situations occur for the QueueNumber parameter:
    // 
    //         *   If the number of queues supported by the ENI has not been modified, the return value is empty.
    //         *   If the number of queues supported by the ENI has been modified, the new number of queues is returned.
    std::shared_ptr<int32_t> queueNumber_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<int32_t> queuePairNumber_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group to which the instance belongs. If this parameter is specified to query ENIs, up to 1,000 ENIs that belong to the specified resource group can be displayed in the response.
    // 
    // >  ENIs in the default resource group are displayed in the response regardless of how this parameter is set.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The IDs of the security groups to which the ENI belongs.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds> securityGroupIds_ = nullptr;
    // The ID of the distributor to which the ENI belongs.
    std::shared_ptr<int64_t> serviceID_ = nullptr;
    // Indicates whether the user of the ENI is an Alibaba Cloud service or a distributor.
    std::shared_ptr<bool> serviceManaged_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification> slaveInterfaceSpecification_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<bool> sourceDestCheck_ = nullptr;
    // The state of the ENI. Valid values:
    // 
    // *   Available: The ENI is not attached to an instance.
    // *   Attaching: The ENI is being attached to an instance.
    // *   InUse: The ENI is attached to an instance.
    // *   Detaching: The ENI is being detached from an instance.
    // *   Deleting: The ENI is being deleted.
    // 
    // This parameter is empty by default, which indicates that all states are queried.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the ENI.
    std::shared_ptr<DescribeNetworkInterfaceAttributeResponseBodyTags> tags_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> tcpOptionAddressEnabled_ = nullptr;
    // The type of the ENI. Valid values:
    // 
    // *   Primary
    // *   Secondary
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the vSwitch to which the ENI is connected.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the ENI belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID of the ENI.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
