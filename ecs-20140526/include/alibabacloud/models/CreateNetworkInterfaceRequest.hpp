// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceRequestConnectionTrackingConfiguration.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceRequestEnhancedNetwork.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig.hpp>
#include <alibabacloud/models/CreateNetworkInterfaceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_TO_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_TO_JSON(Ipv4PrefixCount, ipv4PrefixCount_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(Ipv6Prefix, ipv6Prefix_);
      DARABONBA_PTR_TO_JSON(Ipv6PrefixCount, ipv6PrefixCount_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_TO_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TxQueueSize, txQueueSize_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Visible, visible_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_FROM_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_FROM_JSON(Ipv4PrefixCount, ipv4PrefixCount_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(Ipv6Prefix, ipv6Prefix_);
      DARABONBA_PTR_FROM_JSON(Ipv6PrefixCount, ipv6PrefixCount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_FROM_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TxQueueSize, txQueueSize_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Visible, visible_);
    };
    CreateNetworkInterfaceRequest() = default ;
    CreateNetworkInterfaceRequest(const CreateNetworkInterfaceRequest &) = default ;
    CreateNetworkInterfaceRequest(CreateNetworkInterfaceRequest &&) = default ;
    CreateNetworkInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfaceRequest() = default ;
    CreateNetworkInterfaceRequest& operator=(const CreateNetworkInterfaceRequest &) = default ;
    CreateNetworkInterfaceRequest& operator=(CreateNetworkInterfaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessType_ == nullptr
        && return this->clientToken_ == nullptr && return this->connectionTrackingConfiguration_ == nullptr && return this->deleteOnRelease_ == nullptr && return this->description_ == nullptr && return this->enhancedNetwork_ == nullptr
        && return this->instanceType_ == nullptr && return this->ipv4Prefix_ == nullptr && return this->ipv4PrefixCount_ == nullptr && return this->ipv6Address_ == nullptr && return this->ipv6AddressCount_ == nullptr
        && return this->ipv6Prefix_ == nullptr && return this->ipv6PrefixCount_ == nullptr && return this->networkInterfaceName_ == nullptr && return this->networkInterfaceTrafficConfig_ == nullptr && return this->networkInterfaceTrafficMode_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->primaryIpAddress_ == nullptr && return this->privateIpAddress_ == nullptr && return this->queueNumber_ == nullptr
        && return this->queuePairNumber_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->rxQueueSize_ == nullptr && return this->secondaryPrivateIpAddressCount_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupIds_ == nullptr && return this->sourceDestCheck_ == nullptr
        && return this->tag_ == nullptr && return this->txQueueSize_ == nullptr && return this->vSwitchId_ == nullptr && return this->visible_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateNetworkInterfaceRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNetworkInterfaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionTrackingConfiguration Field Functions 
    bool hasConnectionTrackingConfiguration() const { return this->connectionTrackingConfiguration_ != nullptr;};
    void deleteConnectionTrackingConfiguration() { this->connectionTrackingConfiguration_ = nullptr;};
    inline const CreateNetworkInterfaceRequestConnectionTrackingConfiguration & connectionTrackingConfiguration() const { DARABONBA_PTR_GET_CONST(connectionTrackingConfiguration_, CreateNetworkInterfaceRequestConnectionTrackingConfiguration) };
    inline CreateNetworkInterfaceRequestConnectionTrackingConfiguration connectionTrackingConfiguration() { DARABONBA_PTR_GET(connectionTrackingConfiguration_, CreateNetworkInterfaceRequestConnectionTrackingConfiguration) };
    inline CreateNetworkInterfaceRequest& setConnectionTrackingConfiguration(const CreateNetworkInterfaceRequestConnectionTrackingConfiguration & connectionTrackingConfiguration) { DARABONBA_PTR_SET_VALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };
    inline CreateNetworkInterfaceRequest& setConnectionTrackingConfiguration(CreateNetworkInterfaceRequestConnectionTrackingConfiguration && connectionTrackingConfiguration) { DARABONBA_PTR_SET_RVALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };


    // deleteOnRelease Field Functions 
    bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
    void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
    inline bool deleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
    inline CreateNetworkInterfaceRequest& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkInterfaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enhancedNetwork Field Functions 
    bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
    void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
    inline const CreateNetworkInterfaceRequestEnhancedNetwork & enhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, CreateNetworkInterfaceRequestEnhancedNetwork) };
    inline CreateNetworkInterfaceRequestEnhancedNetwork enhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, CreateNetworkInterfaceRequestEnhancedNetwork) };
    inline CreateNetworkInterfaceRequest& setEnhancedNetwork(const CreateNetworkInterfaceRequestEnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
    inline CreateNetworkInterfaceRequest& setEnhancedNetwork(CreateNetworkInterfaceRequestEnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateNetworkInterfaceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline const vector<string> & ipv4Prefix() const { DARABONBA_PTR_GET_CONST(ipv4Prefix_, vector<string>) };
    inline vector<string> ipv4Prefix() { DARABONBA_PTR_GET(ipv4Prefix_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setIpv4Prefix(const vector<string> & ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };
    inline CreateNetworkInterfaceRequest& setIpv4Prefix(vector<string> && ipv4Prefix) { DARABONBA_PTR_SET_RVALUE(ipv4Prefix_, ipv4Prefix) };


    // ipv4PrefixCount Field Functions 
    bool hasIpv4PrefixCount() const { return this->ipv4PrefixCount_ != nullptr;};
    void deleteIpv4PrefixCount() { this->ipv4PrefixCount_ = nullptr;};
    inline int32_t ipv4PrefixCount() const { DARABONBA_PTR_GET_DEFAULT(ipv4PrefixCount_, 0) };
    inline CreateNetworkInterfaceRequest& setIpv4PrefixCount(int32_t ipv4PrefixCount) { DARABONBA_PTR_SET_VALUE(ipv4PrefixCount_, ipv4PrefixCount) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline const vector<string> & ipv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<string>) };
    inline vector<string> ipv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setIpv6Address(const vector<string> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
    inline CreateNetworkInterfaceRequest& setIpv6Address(vector<string> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t ipv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateNetworkInterfaceRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // ipv6Prefix Field Functions 
    bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
    void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
    inline const vector<string> & ipv6Prefix() const { DARABONBA_PTR_GET_CONST(ipv6Prefix_, vector<string>) };
    inline vector<string> ipv6Prefix() { DARABONBA_PTR_GET(ipv6Prefix_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setIpv6Prefix(const vector<string> & ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };
    inline CreateNetworkInterfaceRequest& setIpv6Prefix(vector<string> && ipv6Prefix) { DARABONBA_PTR_SET_RVALUE(ipv6Prefix_, ipv6Prefix) };


    // ipv6PrefixCount Field Functions 
    bool hasIpv6PrefixCount() const { return this->ipv6PrefixCount_ != nullptr;};
    void deleteIpv6PrefixCount() { this->ipv6PrefixCount_ = nullptr;};
    inline int32_t ipv6PrefixCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6PrefixCount_, 0) };
    inline CreateNetworkInterfaceRequest& setIpv6PrefixCount(int32_t ipv6PrefixCount) { DARABONBA_PTR_SET_VALUE(ipv6PrefixCount_, ipv6PrefixCount) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // networkInterfaceTrafficConfig Field Functions 
    bool hasNetworkInterfaceTrafficConfig() const { return this->networkInterfaceTrafficConfig_ != nullptr;};
    void deleteNetworkInterfaceTrafficConfig() { this->networkInterfaceTrafficConfig_ = nullptr;};
    inline const CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig() const { DARABONBA_PTR_GET_CONST(networkInterfaceTrafficConfig_, CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig) };
    inline CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig networkInterfaceTrafficConfig() { DARABONBA_PTR_GET(networkInterfaceTrafficConfig_, CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig) };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceTrafficConfig(const CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceTrafficConfig(CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig && networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_RVALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };


    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string networkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNetworkInterfaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNetworkInterfaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // primaryIpAddress Field Functions 
    bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
    void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
    inline string primaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
    inline CreateNetworkInterfaceRequest& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const vector<string> & privateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<string>) };
    inline vector<string> privateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setPrivateIpAddress(const vector<string> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline CreateNetworkInterfaceRequest& setPrivateIpAddress(vector<string> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t queueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline CreateNetworkInterfaceRequest& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t queuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline CreateNetworkInterfaceRequest& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateNetworkInterfaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNetworkInterfaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNetworkInterfaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rxQueueSize Field Functions 
    bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
    void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
    inline int32_t rxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
    inline CreateNetworkInterfaceRequest& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


    // secondaryPrivateIpAddressCount Field Functions 
    bool hasSecondaryPrivateIpAddressCount() const { return this->secondaryPrivateIpAddressCount_ != nullptr;};
    void deleteSecondaryPrivateIpAddressCount() { this->secondaryPrivateIpAddressCount_ = nullptr;};
    inline int32_t secondaryPrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(secondaryPrivateIpAddressCount_, 0) };
    inline CreateNetworkInterfaceRequest& setSecondaryPrivateIpAddressCount(int32_t secondaryPrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(secondaryPrivateIpAddressCount_, secondaryPrivateIpAddressCount) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateNetworkInterfaceRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateNetworkInterfaceRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool sourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline CreateNetworkInterfaceRequest& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkInterfaceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkInterfaceRequestTag>) };
    inline vector<CreateNetworkInterfaceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkInterfaceRequestTag>) };
    inline CreateNetworkInterfaceRequest& setTag(const vector<CreateNetworkInterfaceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkInterfaceRequest& setTag(vector<CreateNetworkInterfaceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // txQueueSize Field Functions 
    bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
    void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
    inline int32_t txQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
    inline CreateNetworkInterfaceRequest& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNetworkInterfaceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool visible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline CreateNetworkInterfaceRequest& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


  protected:
    // > This parameter is no longer used.
    std::shared_ptr<string> businessType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The connection tracking configurations of the ENI.
    // 
    // Before you use this parameter, learn about how to manage connection timeout periods. For more information, see [Manage connection timeout periods](https://help.aliyun.com/document_detail/2865958.html).
    std::shared_ptr<CreateNetworkInterfaceRequestConnectionTrackingConfiguration> connectionTrackingConfiguration_ = nullptr;
    // Specifies whether to release the ENI when the associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> deleteOnRelease_ = nullptr;
    // The description of the ENI. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // 
    // This parameter is empty by default.
    std::shared_ptr<string> description_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<CreateNetworkInterfaceRequestEnhancedNetwork> enhancedNetwork_ = nullptr;
    // The type of the ENI. Valid values:
    // 
    // *   Secondary: secondary ENI.
    // *   Trunk: trunk ENI. This value is in invitational preview.
    // 
    // Default value: Secondary.
    std::shared_ptr<string> instanceType_ = nullptr;
    // IPv4 prefixes to assign to the ENI. Valid values of N: 1 to 10.
    // 
    // >  To assign IPv4 prefixes to the ENI, you must specify the Ipv4Prefix.N or Ipv4PrefixCount parameter, but not both.
    std::shared_ptr<vector<string>> ipv4Prefix_ = nullptr;
    // The number of IPv4 prefixes to assign to the ENI. Valid values: 1 to 10.
    // 
    // >  To assign IPv4 prefixes to the ENI, you must specify the Ipv4Prefix.N or Ipv4PrefixCount parameter, but not both.
    std::shared_ptr<int32_t> ipv4PrefixCount_ = nullptr;
    // IPv6 addresses to assign to the ENI. Valid values of N: 1 to 10.
    // 
    // Example: Ipv6Address.1=2001:db8:1234:1a00::\\*\\*\\*\\*
    // 
    // >  To assign IPv6 addresses to the ENI, you must specify the `Ipv6Addresses.N` or `Ipv6AddressCount` parameter, but not both.
    std::shared_ptr<vector<string>> ipv6Address_ = nullptr;
    // The number of IPv6 addresses to randomly generate for the ENI. Valid values: 1 to 10.
    // 
    // >  To assign IPv6 addresses to the ENI, you must specify the `Ipv6Addresses.N` or `Ipv6AddressCount` parameter, but not both.
    std::shared_ptr<int32_t> ipv6AddressCount_ = nullptr;
    // IPv6 prefixes to assign to the ENI. Valid values of N: 1 to 10.
    // 
    // >  To assign IPv6 prefixes to the ENI, you must specify the Ipv6Prefix.N or Ipv6PrefixCount parameter, but not both.
    std::shared_ptr<vector<string>> ipv6Prefix_ = nullptr;
    // The number of IPv6 prefixes to assign to the ENI. Valid values: 1 to 10.
    // 
    // >  To assign IPv6 prefixes to the ENI, you must specify the Ipv6Prefix.N or Ipv6PrefixCount parameter, but not both.
    std::shared_ptr<int32_t> ipv6PrefixCount_ = nullptr;
    // The name of the ENI. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is left empty by default.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The communication settings of the ENI.
    std::shared_ptr<CreateNetworkInterfaceRequestNetworkInterfaceTrafficConfig> networkInterfaceTrafficConfig_ = nullptr;
    // The communication mode of the ENI. Valid values:
    // 
    // *   Standard: uses the TCP communication mode.
    // *   HighPerformance: uses the remote direct memory access (RDMA) communication mode with Elastic RDMA Interface (ERI) enabled.
    // 
    // >  ENIs in RDMA mode can be attached only to instances of the instance types that support ERIs. The number of ENIs in RDMA mode that are attached to an instance cannot exceed the maximum number of ENIs that the instance type supports. For more information, see [Overview of ECS instance families](https://help.aliyun.com/document_detail/25378.html) and [Configure eRDMA on an enterprise-level instance](https://help.aliyun.com/document_detail/336853.html).
    // 
    // Default value: Standard.
    std::shared_ptr<string> networkInterfaceTrafficMode_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The primary private IP address of the ENI.
    // 
    // The specified IP address must be an idle IP address within the CIDR block of the vSwitch. If you do not specify this parameter, a random idle IP address within the vSwitch CIDR block is assigned to the ENI.
    std::shared_ptr<string> primaryIpAddress_ = nullptr;
    // Secondary private IP addresses to assign to the ENI. The IP addresses must be idle IP addresses in the CIDR block of the vSwitch with which to associate the ENI. Valid values of N: 0 to 10.
    // 
    // >  To assign secondary private IP addresses to the ENI, you can specify the `PrivateIpAddress.N` or `SecondaryPrivateIpAddressCount` parameter, but not both.
    std::shared_ptr<vector<string>> privateIpAddress_ = nullptr;
    // The number of queues supported by the ENI. Valid values: 1 to 2048.
    // 
    // When you attach the ENI to an instance, make sure that the value of this parameter is less than the maximum number of queues per ENI that is allowed for the instance type. To view the maximum number of queues per ENI allowed for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation and then check the return value of `MaximumQueueNumberPerEni`.
    // 
    // This parameter is left empty by default. If you do not specify this parameter, the default number of queues per ENI for the instance type of an instance is used when you attach the ENI to the instance. To view the default number of queues per ENI for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation and then check the return value of `SecondaryEniQueueNumber`.
    std::shared_ptr<int32_t> queueNumber_ = nullptr;
    // The number of queue pairs (QPs) supported by the elastic RDMA interface (ERI).
    // 
    // If you want to attach multiple ERIs to an instance, we recommend that you specify QueuePairNumber for each ERI based on the value of `QueuePairNumber` supported by the instance type and the number of ERIs that you want to use. Make sure that the total number of QPs of all ERIs does not exceed the maximum number of QPs supported by the instance type. For information about the maximum number of QPs supported by an instance type, see [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html).
    // 
    // >  If you do not specify QueuePairNumber for an ERI, the maximum number of QPs supported by the instance type may be used as the number of QPs supported by the ERI. In this case, you cannot attach an additional ERI to the instance. However, you can attach other types of ENIs to the instance.
    std::shared_ptr<int32_t> queuePairNumber_ = nullptr;
    // The region in which to create the ENI. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which you want to assign the ENI. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the most recent resource group list.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The receive (Rx) queue depth of the ENI.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   The Rx queue depth of an ENI must be the same as the Tx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Rx queue depth yields higher inbound throughput but consumes more memory.
    // 
    // >  This parameter is not publicly available.
    std::shared_ptr<int32_t> rxQueueSize_ = nullptr;
    // The number of private IP addresses to be assigned by ECS. Valid values: 1 to 49.
    std::shared_ptr<int32_t> secondaryPrivateIpAddressCount_ = nullptr;
    // The ID of the security group to which to assign the ENI. The security group and the ENI must belong to the same VPC.
    // 
    // > You must specify `SecurityGroupId` or `SecurityGroupIds.N` but not both.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The IDs of security groups to which to assign the ENI. The security groups and the ENI must belong to the same VPC. The valid values of N are determined based on the maximum number of security groups to which an ENI can be assigned. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
    // 
    // >  You must specify `SecurityGroupId` or `SecurityGroupIds.N` but not both.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // Specifies whether to enable the source and destination IP address check feature. We recommend that you enable the feature to improve network security. Valid value:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  This feature is available only in some regions. Before you use this method, read [Source and destination IP address check](https://help.aliyun.com/document_detail/2863210.html).
    std::shared_ptr<bool> sourceDestCheck_ = nullptr;
    // The tags to add to the ENI.
    std::shared_ptr<vector<CreateNetworkInterfaceRequestTag>> tag_ = nullptr;
    // The transmit (Tx) queue depth of the ENI.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   The Tx queue depth of an ENI must be the same as the Rx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Tx queue depth yields higher outbound throughput but consumes more memory.
    // 
    // >  This parameter is not publicly available.
    std::shared_ptr<int32_t> txQueueSize_ = nullptr;
    // The ID of the vSwitch to which to connect the ENI. Private IP addresses are assigned to the ENI from within the CIDR block of the vSwitch.
    // 
    // >  A secondary ENI can be attached to only an instance that is in the same zone as the ENI. The instance and the ENI can be connected to different vSwitches.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // > This parameter is no longer used.
    std::shared_ptr<bool> visible_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
