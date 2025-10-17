// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration.hpp>
#include <alibabacloud/models/ModifyNetworkInterfaceAttributeRequestEnhancedNetwork.hpp>
#include <alibabacloud/models/ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyNetworkInterfaceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkInterfaceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_TO_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_TO_JSON(TxQueueSize, txQueueSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkInterfaceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionTrackingConfiguration, connectionTrackingConfiguration_);
      DARABONBA_PTR_FROM_JSON(DeleteOnRelease, deleteOnRelease_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficConfig, networkInterfaceTrafficConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RxQueueSize, rxQueueSize_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
      DARABONBA_PTR_FROM_JSON(TxQueueSize, txQueueSize_);
    };
    ModifyNetworkInterfaceAttributeRequest() = default ;
    ModifyNetworkInterfaceAttributeRequest(const ModifyNetworkInterfaceAttributeRequest &) = default ;
    ModifyNetworkInterfaceAttributeRequest(ModifyNetworkInterfaceAttributeRequest &&) = default ;
    ModifyNetworkInterfaceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkInterfaceAttributeRequest() = default ;
    ModifyNetworkInterfaceAttributeRequest& operator=(const ModifyNetworkInterfaceAttributeRequest &) = default ;
    ModifyNetworkInterfaceAttributeRequest& operator=(ModifyNetworkInterfaceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionTrackingConfiguration_ == nullptr
        && return this->deleteOnRelease_ == nullptr && return this->description_ == nullptr && return this->enhancedNetwork_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->networkInterfaceName_ == nullptr
        && return this->networkInterfaceTrafficConfig_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->queueNumber_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->rxQueueSize_ == nullptr && return this->securityGroupId_ == nullptr && return this->sourceDestCheck_ == nullptr
        && return this->txQueueSize_ == nullptr; };
    // connectionTrackingConfiguration Field Functions 
    bool hasConnectionTrackingConfiguration() const { return this->connectionTrackingConfiguration_ != nullptr;};
    void deleteConnectionTrackingConfiguration() { this->connectionTrackingConfiguration_ = nullptr;};
    inline const ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration & connectionTrackingConfiguration() const { DARABONBA_PTR_GET_CONST(connectionTrackingConfiguration_, ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration) };
    inline ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration connectionTrackingConfiguration() { DARABONBA_PTR_GET(connectionTrackingConfiguration_, ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration) };
    inline ModifyNetworkInterfaceAttributeRequest& setConnectionTrackingConfiguration(const ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration & connectionTrackingConfiguration) { DARABONBA_PTR_SET_VALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };
    inline ModifyNetworkInterfaceAttributeRequest& setConnectionTrackingConfiguration(ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration && connectionTrackingConfiguration) { DARABONBA_PTR_SET_RVALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };


    // deleteOnRelease Field Functions 
    bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
    void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
    inline bool deleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
    inline ModifyNetworkInterfaceAttributeRequest& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enhancedNetwork Field Functions 
    bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
    void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
    inline const ModifyNetworkInterfaceAttributeRequestEnhancedNetwork & enhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, ModifyNetworkInterfaceAttributeRequestEnhancedNetwork) };
    inline ModifyNetworkInterfaceAttributeRequestEnhancedNetwork enhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, ModifyNetworkInterfaceAttributeRequestEnhancedNetwork) };
    inline ModifyNetworkInterfaceAttributeRequest& setEnhancedNetwork(const ModifyNetworkInterfaceAttributeRequestEnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
    inline ModifyNetworkInterfaceAttributeRequest& setEnhancedNetwork(ModifyNetworkInterfaceAttributeRequestEnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // networkInterfaceTrafficConfig Field Functions 
    bool hasNetworkInterfaceTrafficConfig() const { return this->networkInterfaceTrafficConfig_ != nullptr;};
    void deleteNetworkInterfaceTrafficConfig() { this->networkInterfaceTrafficConfig_ = nullptr;};
    inline const ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig() const { DARABONBA_PTR_GET_CONST(networkInterfaceTrafficConfig_, ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig) };
    inline ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig networkInterfaceTrafficConfig() { DARABONBA_PTR_GET(networkInterfaceTrafficConfig_, ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig) };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceTrafficConfig(const ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceTrafficConfig(ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig && networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_RVALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyNetworkInterfaceAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t queueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline ModifyNetworkInterfaceAttributeRequest& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyNetworkInterfaceAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rxQueueSize Field Functions 
    bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
    void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
    inline int32_t rxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
    inline ModifyNetworkInterfaceAttributeRequest& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const vector<string> & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
    inline vector<string> securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
    inline ModifyNetworkInterfaceAttributeRequest& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline ModifyNetworkInterfaceAttributeRequest& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool sourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline ModifyNetworkInterfaceAttributeRequest& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // txQueueSize Field Functions 
    bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
    void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
    inline int32_t txQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
    inline ModifyNetworkInterfaceAttributeRequest& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


  protected:
    // The connection tracking configuration of the ENI.
    std::shared_ptr<ModifyNetworkInterfaceAttributeRequestConnectionTrackingConfiguration> connectionTrackingConfiguration_ = nullptr;
    // Specifies whether to release the ENI when the associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> deleteOnRelease_ = nullptr;
    // The description of the ENI. The description must be 2 to 255 characters in length and cannot start with [http:// or https://](http://https://。).
    // 
    // This parameter is left empty by default.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<ModifyNetworkInterfaceAttributeRequestEnhancedNetwork> enhancedNetwork_ = nullptr;
    // The ID of the ENI.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The name of the ENI. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is left empty by default.
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The communication parameters of the ENI.
    std::shared_ptr<ModifyNetworkInterfaceAttributeRequestNetworkInterfaceTrafficConfig> networkInterfaceTrafficConfig_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of queues supported by the ENI. Valid values: 1 to 2048.
    // 
    // *   You can change the number of queues supported by an ENI only when the ENI is in the `Available` state or the ENI is attached (`InUse`) to an instance that is in the `Stopped` state.
    // *   The number of queues supported by the ENI cannot exceed the maximum number of queues that the instance type allows for each ENI. The total number of queues on all ENIs on an instance cannot exceed the queue quota that the instance type supports. To query the maximum number of queues per ENI and the queue quota for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation and check the `MaximumQueueNumberPerEni` and `TotalEniQueueQuantity` values in the response.
    std::shared_ptr<int32_t> queueNumber_ = nullptr;
    // The region ID of the ENI. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The receive (Rx) queue depth of the ENI.
    // 
    // Take note of the following items:
    // 
    // *   The Rx queue depth of an ENI must be the same as the transmit (Tx) queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Rx queue depth yields higher inbound throughput but consumes more memory.
    std::shared_ptr<int32_t> rxQueueSize_ = nullptr;
    // The IDs of the security groups to which to add the secondary ENI. The secondary ENI is added to the specified security groups and removed from the original security groups.
    // 
    // *   The valid values of N vary based on the maximum number of security groups to which an ENI can be added. For more information, see the [Security group limits](~~25412#SecurityGroupQuota~~) section of the "Limits and quotas" topic.
    // *   The new security groups take effect after a short delay.
    std::shared_ptr<vector<string>> securityGroupId_ = nullptr;
    // Source and destination IP address check We recommend that you enable the feature to improve network security. Valid value:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  This feature is available only in some regions. Before you use this method, read [Source and destination IP address check](https://help.aliyun.com/document_detail/2863210.html).
    std::shared_ptr<bool> sourceDestCheck_ = nullptr;
    // The Tx queue depth of the ENI.
    // 
    // Take note of the following items:
    // 
    // *   The Tx queue depth of an ENI must be the same as the Rx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Tx queue depth yields higher outbound throughput but consumes more memory.
    std::shared_ptr<int32_t> txQueueSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
