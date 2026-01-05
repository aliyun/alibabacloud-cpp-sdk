// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N to add to the ENI. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the ENI. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class NetworkInterfaceTrafficConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfaceTrafficConfig& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
        DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
        DARABONBA_PTR_TO_JSON(RxQueueSize, rxQueueSize_);
        DARABONBA_PTR_TO_JSON(TxQueueSize, txQueueSize_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfaceTrafficConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
        DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
        DARABONBA_PTR_FROM_JSON(RxQueueSize, rxQueueSize_);
        DARABONBA_PTR_FROM_JSON(TxQueueSize, txQueueSize_);
      };
      NetworkInterfaceTrafficConfig() = default ;
      NetworkInterfaceTrafficConfig(const NetworkInterfaceTrafficConfig &) = default ;
      NetworkInterfaceTrafficConfig(NetworkInterfaceTrafficConfig &&) = default ;
      NetworkInterfaceTrafficConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfaceTrafficConfig() = default ;
      NetworkInterfaceTrafficConfig& operator=(const NetworkInterfaceTrafficConfig &) = default ;
      NetworkInterfaceTrafficConfig& operator=(NetworkInterfaceTrafficConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->networkInterfaceTrafficMode_ == nullptr
        && this->queueNumber_ == nullptr && this->queuePairNumber_ == nullptr && this->rxQueueSize_ == nullptr && this->txQueueSize_ == nullptr; };
      // networkInterfaceTrafficMode Field Functions 
      bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
      void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
      inline string getNetworkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
      inline NetworkInterfaceTrafficConfig& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


      // queueNumber Field Functions 
      bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
      void deleteQueueNumber() { this->queueNumber_ = nullptr;};
      inline int32_t getQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
      inline NetworkInterfaceTrafficConfig& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


      // queuePairNumber Field Functions 
      bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
      void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
      inline int32_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
      inline NetworkInterfaceTrafficConfig& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


      // rxQueueSize Field Functions 
      bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
      void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
      inline int32_t getRxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
      inline NetworkInterfaceTrafficConfig& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


      // txQueueSize Field Functions 
      bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
      void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
      inline int32_t getTxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
      inline NetworkInterfaceTrafficConfig& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


    protected:
      // The communication mode of the ENI.
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The number of queues supported by the ENI.
      shared_ptr<int32_t> queueNumber_ {};
      // The number of QPs supported by the ERI.
      shared_ptr<int32_t> queuePairNumber_ {};
      // The Rx queue depth of the ENI.
      // 
      // >  This parameter is in invitational preview and is not publicly available. To use this parameter, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
      // 
      // When you specify this parameter, take note of the following items:
      // 
      // *   This parameter is applicable only to 7th-generation or later ECS instance types.
      // *   This parameter is applicable to Linux images.
      // *   A larger Rx queue depth yields higher inbound throughput and reduces packet loss rates but consumes more memory.
      shared_ptr<int32_t> rxQueueSize_ {};
      // The Tx queue depth of the ENI.
      // 
      // >  This parameter is in invitational preview and is not publicly available. To use this parameter, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
      // 
      // When you specify this parameter, take note of the following items:
      // 
      // *   This parameter is applicable only to 7th-generation or later ECS instance types.
      // *   This parameter is applicable to Linux images.
      // *   A larger Tx queue depth yields higher outbound throughput and reduces packet loss rates but consumes more memory.
      shared_ptr<int32_t> txQueueSize_ {};
    };

    class EnhancedNetwork : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EnhancedNetwork& obj) { 
        DARABONBA_PTR_TO_JSON(EnableRss, enableRss_);
        DARABONBA_PTR_TO_JSON(EnableSriov, enableSriov_);
        DARABONBA_PTR_TO_JSON(VirtualFunctionQuantity, virtualFunctionQuantity_);
        DARABONBA_PTR_TO_JSON(VirtualFunctionTotalQueueNumber, virtualFunctionTotalQueueNumber_);
      };
      friend void from_json(const Darabonba::Json& j, EnhancedNetwork& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableRss, enableRss_);
        DARABONBA_PTR_FROM_JSON(EnableSriov, enableSriov_);
        DARABONBA_PTR_FROM_JSON(VirtualFunctionQuantity, virtualFunctionQuantity_);
        DARABONBA_PTR_FROM_JSON(VirtualFunctionTotalQueueNumber, virtualFunctionTotalQueueNumber_);
      };
      EnhancedNetwork() = default ;
      EnhancedNetwork(const EnhancedNetwork &) = default ;
      EnhancedNetwork(EnhancedNetwork &&) = default ;
      EnhancedNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EnhancedNetwork() = default ;
      EnhancedNetwork& operator=(const EnhancedNetwork &) = default ;
      EnhancedNetwork& operator=(EnhancedNetwork &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableRss_ == nullptr
        && this->enableSriov_ == nullptr && this->virtualFunctionQuantity_ == nullptr && this->virtualFunctionTotalQueueNumber_ == nullptr; };
      // enableRss Field Functions 
      bool hasEnableRss() const { return this->enableRss_ != nullptr;};
      void deleteEnableRss() { this->enableRss_ = nullptr;};
      inline bool getEnableRss() const { DARABONBA_PTR_GET_DEFAULT(enableRss_, false) };
      inline EnhancedNetwork& setEnableRss(bool enableRss) { DARABONBA_PTR_SET_VALUE(enableRss_, enableRss) };


      // enableSriov Field Functions 
      bool hasEnableSriov() const { return this->enableSriov_ != nullptr;};
      void deleteEnableSriov() { this->enableSriov_ = nullptr;};
      inline bool getEnableSriov() const { DARABONBA_PTR_GET_DEFAULT(enableSriov_, false) };
      inline EnhancedNetwork& setEnableSriov(bool enableSriov) { DARABONBA_PTR_SET_VALUE(enableSriov_, enableSriov) };


      // virtualFunctionQuantity Field Functions 
      bool hasVirtualFunctionQuantity() const { return this->virtualFunctionQuantity_ != nullptr;};
      void deleteVirtualFunctionQuantity() { this->virtualFunctionQuantity_ = nullptr;};
      inline int32_t getVirtualFunctionQuantity() const { DARABONBA_PTR_GET_DEFAULT(virtualFunctionQuantity_, 0) };
      inline EnhancedNetwork& setVirtualFunctionQuantity(int32_t virtualFunctionQuantity) { DARABONBA_PTR_SET_VALUE(virtualFunctionQuantity_, virtualFunctionQuantity) };


      // virtualFunctionTotalQueueNumber Field Functions 
      bool hasVirtualFunctionTotalQueueNumber() const { return this->virtualFunctionTotalQueueNumber_ != nullptr;};
      void deleteVirtualFunctionTotalQueueNumber() { this->virtualFunctionTotalQueueNumber_ = nullptr;};
      inline int32_t getVirtualFunctionTotalQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualFunctionTotalQueueNumber_, 0) };
      inline EnhancedNetwork& setVirtualFunctionTotalQueueNumber(int32_t virtualFunctionTotalQueueNumber) { DARABONBA_PTR_SET_VALUE(virtualFunctionTotalQueueNumber_, virtualFunctionTotalQueueNumber) };


    protected:
      // >  This parameter is not publicly available.
      shared_ptr<bool> enableRss_ {};
      // >  This parameter is not publicly available.
      shared_ptr<bool> enableSriov_ {};
      shared_ptr<int32_t> virtualFunctionQuantity_ {};
      shared_ptr<int32_t> virtualFunctionTotalQueueNumber_ {};
    };

    class ConnectionTrackingConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectionTrackingConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(TcpClosedAndTimeWaitTimeout, tcpClosedAndTimeWaitTimeout_);
        DARABONBA_PTR_TO_JSON(TcpEstablishedTimeout, tcpEstablishedTimeout_);
        DARABONBA_PTR_TO_JSON(UdpTimeout, udpTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectionTrackingConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(TcpClosedAndTimeWaitTimeout, tcpClosedAndTimeWaitTimeout_);
        DARABONBA_PTR_FROM_JSON(TcpEstablishedTimeout, tcpEstablishedTimeout_);
        DARABONBA_PTR_FROM_JSON(UdpTimeout, udpTimeout_);
      };
      ConnectionTrackingConfiguration() = default ;
      ConnectionTrackingConfiguration(const ConnectionTrackingConfiguration &) = default ;
      ConnectionTrackingConfiguration(ConnectionTrackingConfiguration &&) = default ;
      ConnectionTrackingConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectionTrackingConfiguration() = default ;
      ConnectionTrackingConfiguration& operator=(const ConnectionTrackingConfiguration &) = default ;
      ConnectionTrackingConfiguration& operator=(ConnectionTrackingConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tcpClosedAndTimeWaitTimeout_ == nullptr
        && this->tcpEstablishedTimeout_ == nullptr && this->udpTimeout_ == nullptr; };
      // tcpClosedAndTimeWaitTimeout Field Functions 
      bool hasTcpClosedAndTimeWaitTimeout() const { return this->tcpClosedAndTimeWaitTimeout_ != nullptr;};
      void deleteTcpClosedAndTimeWaitTimeout() { this->tcpClosedAndTimeWaitTimeout_ = nullptr;};
      inline int32_t getTcpClosedAndTimeWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpClosedAndTimeWaitTimeout_, 0) };
      inline ConnectionTrackingConfiguration& setTcpClosedAndTimeWaitTimeout(int32_t tcpClosedAndTimeWaitTimeout) { DARABONBA_PTR_SET_VALUE(tcpClosedAndTimeWaitTimeout_, tcpClosedAndTimeWaitTimeout) };


      // tcpEstablishedTimeout Field Functions 
      bool hasTcpEstablishedTimeout() const { return this->tcpEstablishedTimeout_ != nullptr;};
      void deleteTcpEstablishedTimeout() { this->tcpEstablishedTimeout_ = nullptr;};
      inline int32_t getTcpEstablishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpEstablishedTimeout_, 0) };
      inline ConnectionTrackingConfiguration& setTcpEstablishedTimeout(int32_t tcpEstablishedTimeout) { DARABONBA_PTR_SET_VALUE(tcpEstablishedTimeout_, tcpEstablishedTimeout) };


      // udpTimeout Field Functions 
      bool hasUdpTimeout() const { return this->udpTimeout_ != nullptr;};
      void deleteUdpTimeout() { this->udpTimeout_ = nullptr;};
      inline int32_t getUdpTimeout() const { DARABONBA_PTR_GET_DEFAULT(udpTimeout_, 0) };
      inline ConnectionTrackingConfiguration& setUdpTimeout(int32_t udpTimeout) { DARABONBA_PTR_SET_VALUE(udpTimeout_, udpTimeout) };


    protected:
      // The timeout period for TCP connections in the TIME_WAIT or CLOSE_WAIT state. Unit: seconds. Valid values: integers from 3 to 15.
      // 
      // Default value: 3.
      // 
      // >  If the associated Elastic Compute Service (ECS) instance is used with a Network Load Balancer (NLB) or Classic Load Balancer (CLB) instance, the default timeout period for TCP connections in the `TIME_WAIT` state is 15 seconds.
      shared_ptr<int32_t> tcpClosedAndTimeWaitTimeout_ {};
      // The timeout period for TCP connections in the ESTABLISHED state. Unit: seconds. Valid values: 30, 60, 80, 100, 200, 300, 500, 700, and 910.
      // 
      // Default value: 910.
      shared_ptr<int32_t> tcpEstablishedTimeout_ {};
      // The timeout period for UDP flows. Unit: seconds. Valid values: 10, 20, 30, 60, 80, and 100.
      // 
      // Default value: 30.
      // 
      // >  If the associated ECS instance is used with an NLB or CLB instance, the default timeout period for UDP flows is 100 seconds.
      shared_ptr<int32_t> udpTimeout_ {};
    };

    virtual bool empty() const override { return this->businessType_ == nullptr
        && this->clientToken_ == nullptr && this->connectionTrackingConfiguration_ == nullptr && this->deleteOnRelease_ == nullptr && this->description_ == nullptr && this->enhancedNetwork_ == nullptr
        && this->instanceType_ == nullptr && this->ipv4Prefix_ == nullptr && this->ipv4PrefixCount_ == nullptr && this->ipv6Address_ == nullptr && this->ipv6AddressCount_ == nullptr
        && this->ipv6Prefix_ == nullptr && this->ipv6PrefixCount_ == nullptr && this->networkInterfaceName_ == nullptr && this->networkInterfaceTrafficConfig_ == nullptr && this->networkInterfaceTrafficMode_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->primaryIpAddress_ == nullptr && this->privateIpAddress_ == nullptr && this->queueNumber_ == nullptr
        && this->queuePairNumber_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->rxQueueSize_ == nullptr && this->secondaryPrivateIpAddressCount_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->sourceDestCheck_ == nullptr
        && this->tag_ == nullptr && this->txQueueSize_ == nullptr && this->vSwitchId_ == nullptr && this->visible_ == nullptr; };
    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline CreateNetworkInterfaceRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNetworkInterfaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionTrackingConfiguration Field Functions 
    bool hasConnectionTrackingConfiguration() const { return this->connectionTrackingConfiguration_ != nullptr;};
    void deleteConnectionTrackingConfiguration() { this->connectionTrackingConfiguration_ = nullptr;};
    inline const CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration & getConnectionTrackingConfiguration() const { DARABONBA_PTR_GET_CONST(connectionTrackingConfiguration_, CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration) };
    inline CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration getConnectionTrackingConfiguration() { DARABONBA_PTR_GET(connectionTrackingConfiguration_, CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration) };
    inline CreateNetworkInterfaceRequest& setConnectionTrackingConfiguration(const CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration & connectionTrackingConfiguration) { DARABONBA_PTR_SET_VALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };
    inline CreateNetworkInterfaceRequest& setConnectionTrackingConfiguration(CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration && connectionTrackingConfiguration) { DARABONBA_PTR_SET_RVALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };


    // deleteOnRelease Field Functions 
    bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
    void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
    inline bool getDeleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
    inline CreateNetworkInterfaceRequest& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkInterfaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enhancedNetwork Field Functions 
    bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
    void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
    inline const CreateNetworkInterfaceRequest::EnhancedNetwork & getEnhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, CreateNetworkInterfaceRequest::EnhancedNetwork) };
    inline CreateNetworkInterfaceRequest::EnhancedNetwork getEnhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, CreateNetworkInterfaceRequest::EnhancedNetwork) };
    inline CreateNetworkInterfaceRequest& setEnhancedNetwork(const CreateNetworkInterfaceRequest::EnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
    inline CreateNetworkInterfaceRequest& setEnhancedNetwork(CreateNetworkInterfaceRequest::EnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateNetworkInterfaceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline const vector<string> & getIpv4Prefix() const { DARABONBA_PTR_GET_CONST(ipv4Prefix_, vector<string>) };
    inline vector<string> getIpv4Prefix() { DARABONBA_PTR_GET(ipv4Prefix_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setIpv4Prefix(const vector<string> & ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };
    inline CreateNetworkInterfaceRequest& setIpv4Prefix(vector<string> && ipv4Prefix) { DARABONBA_PTR_SET_RVALUE(ipv4Prefix_, ipv4Prefix) };


    // ipv4PrefixCount Field Functions 
    bool hasIpv4PrefixCount() const { return this->ipv4PrefixCount_ != nullptr;};
    void deleteIpv4PrefixCount() { this->ipv4PrefixCount_ = nullptr;};
    inline int32_t getIpv4PrefixCount() const { DARABONBA_PTR_GET_DEFAULT(ipv4PrefixCount_, 0) };
    inline CreateNetworkInterfaceRequest& setIpv4PrefixCount(int32_t ipv4PrefixCount) { DARABONBA_PTR_SET_VALUE(ipv4PrefixCount_, ipv4PrefixCount) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline const vector<string> & getIpv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<string>) };
    inline vector<string> getIpv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setIpv6Address(const vector<string> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
    inline CreateNetworkInterfaceRequest& setIpv6Address(vector<string> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateNetworkInterfaceRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // ipv6Prefix Field Functions 
    bool hasIpv6Prefix() const { return this->ipv6Prefix_ != nullptr;};
    void deleteIpv6Prefix() { this->ipv6Prefix_ = nullptr;};
    inline const vector<string> & getIpv6Prefix() const { DARABONBA_PTR_GET_CONST(ipv6Prefix_, vector<string>) };
    inline vector<string> getIpv6Prefix() { DARABONBA_PTR_GET(ipv6Prefix_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setIpv6Prefix(const vector<string> & ipv6Prefix) { DARABONBA_PTR_SET_VALUE(ipv6Prefix_, ipv6Prefix) };
    inline CreateNetworkInterfaceRequest& setIpv6Prefix(vector<string> && ipv6Prefix) { DARABONBA_PTR_SET_RVALUE(ipv6Prefix_, ipv6Prefix) };


    // ipv6PrefixCount Field Functions 
    bool hasIpv6PrefixCount() const { return this->ipv6PrefixCount_ != nullptr;};
    void deleteIpv6PrefixCount() { this->ipv6PrefixCount_ = nullptr;};
    inline int32_t getIpv6PrefixCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6PrefixCount_, 0) };
    inline CreateNetworkInterfaceRequest& setIpv6PrefixCount(int32_t ipv6PrefixCount) { DARABONBA_PTR_SET_VALUE(ipv6PrefixCount_, ipv6PrefixCount) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // networkInterfaceTrafficConfig Field Functions 
    bool hasNetworkInterfaceTrafficConfig() const { return this->networkInterfaceTrafficConfig_ != nullptr;};
    void deleteNetworkInterfaceTrafficConfig() { this->networkInterfaceTrafficConfig_ = nullptr;};
    inline const CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig & getNetworkInterfaceTrafficConfig() const { DARABONBA_PTR_GET_CONST(networkInterfaceTrafficConfig_, CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig) };
    inline CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig getNetworkInterfaceTrafficConfig() { DARABONBA_PTR_GET(networkInterfaceTrafficConfig_, CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig) };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceTrafficConfig(const CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceTrafficConfig(CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig && networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_RVALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };


    // networkInterfaceTrafficMode Field Functions 
    bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
    void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
    inline string getNetworkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
    inline CreateNetworkInterfaceRequest& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNetworkInterfaceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNetworkInterfaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // primaryIpAddress Field Functions 
    bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
    void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
    inline string getPrimaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
    inline CreateNetworkInterfaceRequest& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const vector<string> & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<string>) };
    inline vector<string> getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setPrivateIpAddress(const vector<string> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline CreateNetworkInterfaceRequest& setPrivateIpAddress(vector<string> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t getQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline CreateNetworkInterfaceRequest& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline CreateNetworkInterfaceRequest& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateNetworkInterfaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNetworkInterfaceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNetworkInterfaceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rxQueueSize Field Functions 
    bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
    void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
    inline int32_t getRxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
    inline CreateNetworkInterfaceRequest& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


    // secondaryPrivateIpAddressCount Field Functions 
    bool hasSecondaryPrivateIpAddressCount() const { return this->secondaryPrivateIpAddressCount_ != nullptr;};
    void deleteSecondaryPrivateIpAddressCount() { this->secondaryPrivateIpAddressCount_ = nullptr;};
    inline int32_t getSecondaryPrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(secondaryPrivateIpAddressCount_, 0) };
    inline CreateNetworkInterfaceRequest& setSecondaryPrivateIpAddressCount(int32_t secondaryPrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(secondaryPrivateIpAddressCount_, secondaryPrivateIpAddressCount) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateNetworkInterfaceRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateNetworkInterfaceRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateNetworkInterfaceRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool getSourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline CreateNetworkInterfaceRequest& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkInterfaceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkInterfaceRequest::Tag>) };
    inline vector<CreateNetworkInterfaceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkInterfaceRequest::Tag>) };
    inline CreateNetworkInterfaceRequest& setTag(const vector<CreateNetworkInterfaceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkInterfaceRequest& setTag(vector<CreateNetworkInterfaceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // txQueueSize Field Functions 
    bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
    void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
    inline int32_t getTxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
    inline CreateNetworkInterfaceRequest& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateNetworkInterfaceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // visible Field Functions 
    bool hasVisible() const { return this->visible_ != nullptr;};
    void deleteVisible() { this->visible_ = nullptr;};
    inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
    inline CreateNetworkInterfaceRequest& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


  protected:
    // > This parameter is no longer used.
    shared_ptr<string> businessType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The connection tracking configurations of the ENI.
    // 
    // Before you use this parameter, learn about how to manage connection timeout periods. For more information, see [Manage connection timeout periods](https://help.aliyun.com/document_detail/2865958.html).
    shared_ptr<CreateNetworkInterfaceRequest::ConnectionTrackingConfiguration> connectionTrackingConfiguration_ {};
    // Specifies whether to release the ENI when the associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> deleteOnRelease_ {};
    // The description of the ENI. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // 
    // This parameter is empty by default.
    shared_ptr<string> description_ {};
    // >  This parameter is not publicly available.
    shared_ptr<CreateNetworkInterfaceRequest::EnhancedNetwork> enhancedNetwork_ {};
    // The type of the ENI. Valid values:
    // 
    // *   Secondary: secondary ENI.
    // *   Trunk: trunk ENI. This value is in invitational preview.
    // 
    // Default value: Secondary.
    shared_ptr<string> instanceType_ {};
    // IPv4 prefixes to assign to the ENI. Valid values of N: 1 to 10.
    // 
    // >  To assign IPv4 prefixes to the ENI, you must specify the Ipv4Prefix.N or Ipv4PrefixCount parameter, but not both.
    shared_ptr<vector<string>> ipv4Prefix_ {};
    // The number of IPv4 prefixes to assign to the ENI. Valid values: 1 to 10.
    // 
    // >  To assign IPv4 prefixes to the ENI, you must specify the Ipv4Prefix.N or Ipv4PrefixCount parameter, but not both.
    shared_ptr<int32_t> ipv4PrefixCount_ {};
    // IPv6 addresses to assign to the ENI. Valid values of N: 1 to 10.
    // 
    // Example: Ipv6Address.1=2001:db8:1234:1a00::\\*\\*\\*\\*
    // 
    // >  To assign IPv6 addresses to the ENI, you must specify the `Ipv6Addresses.N` or `Ipv6AddressCount` parameter, but not both.
    shared_ptr<vector<string>> ipv6Address_ {};
    // The number of IPv6 addresses to randomly generate for the ENI. Valid values: 1 to 10.
    // 
    // >  To assign IPv6 addresses to the ENI, you must specify the `Ipv6Addresses.N` or `Ipv6AddressCount` parameter, but not both.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // IPv6 prefixes to assign to the ENI. Valid values of N: 1 to 10.
    // 
    // >  To assign IPv6 prefixes to the ENI, you must specify the Ipv6Prefix.N or Ipv6PrefixCount parameter, but not both.
    shared_ptr<vector<string>> ipv6Prefix_ {};
    // The number of IPv6 prefixes to assign to the ENI. Valid values: 1 to 10.
    // 
    // >  To assign IPv6 prefixes to the ENI, you must specify the Ipv6Prefix.N or Ipv6PrefixCount parameter, but not both.
    shared_ptr<int32_t> ipv6PrefixCount_ {};
    // The name of the ENI. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is left empty by default.
    shared_ptr<string> networkInterfaceName_ {};
    // The communication settings of the ENI.
    shared_ptr<CreateNetworkInterfaceRequest::NetworkInterfaceTrafficConfig> networkInterfaceTrafficConfig_ {};
    // The communication mode of the ENI. Valid values:
    // 
    // *   Standard: uses the TCP communication mode.
    // *   HighPerformance: uses the remote direct memory access (RDMA) communication mode with Elastic RDMA Interface (ERI) enabled.
    // 
    // >  ENIs in RDMA mode can be attached only to instances of the instance types that support ERIs. The number of ENIs in RDMA mode that are attached to an instance cannot exceed the maximum number of ENIs that the instance type supports. For more information, see [Overview of ECS instance families](https://help.aliyun.com/document_detail/25378.html) and [Configure eRDMA on an enterprise-level instance](https://help.aliyun.com/document_detail/336853.html).
    // 
    // Default value: Standard.
    shared_ptr<string> networkInterfaceTrafficMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The primary private IP address of the ENI.
    // 
    // The specified IP address must be an idle IP address within the CIDR block of the vSwitch. If you do not specify this parameter, a random idle IP address within the vSwitch CIDR block is assigned to the ENI.
    shared_ptr<string> primaryIpAddress_ {};
    // Secondary private IP addresses to assign to the ENI. The IP addresses must be idle IP addresses in the CIDR block of the vSwitch with which to associate the ENI. Valid values of N: 0 to 10.
    // 
    // >  To assign secondary private IP addresses to the ENI, you can specify the `PrivateIpAddress.N` or `SecondaryPrivateIpAddressCount` parameter, but not both.
    shared_ptr<vector<string>> privateIpAddress_ {};
    // The number of queues supported by the ENI. Valid values: 1 to 2048.
    // 
    // When you attach the ENI to an instance, make sure that the value of this parameter is less than the maximum number of queues per ENI that is allowed for the instance type. To view the maximum number of queues per ENI allowed for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation and then check the return value of `MaximumQueueNumberPerEni`.
    // 
    // This parameter is left empty by default. If you do not specify this parameter, the default number of queues per ENI for the instance type of an instance is used when you attach the ENI to the instance. To view the default number of queues per ENI for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation and then check the return value of `SecondaryEniQueueNumber`.
    shared_ptr<int32_t> queueNumber_ {};
    // The number of queue pairs (QPs) supported by the elastic RDMA interface (ERI).
    // 
    // If you want to attach multiple ERIs to an instance, we recommend that you specify QueuePairNumber for each ERI based on the value of `QueuePairNumber` supported by the instance type and the number of ERIs that you want to use. Make sure that the total number of QPs of all ERIs does not exceed the maximum number of QPs supported by the instance type. For information about the maximum number of QPs supported by an instance type, see [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html).
    // 
    // >  If you do not specify QueuePairNumber for an ERI, the maximum number of QPs supported by the instance type may be used as the number of QPs supported by the ERI. In this case, you cannot attach an additional ERI to the instance. However, you can attach other types of ENIs to the instance.
    shared_ptr<int32_t> queuePairNumber_ {};
    // The region in which to create the ENI. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which you want to assign the ENI. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the most recent resource group list.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The receive (Rx) queue depth of the ENI.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   The Rx queue depth of an ENI must be the same as the Tx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Rx queue depth yields higher inbound throughput but consumes more memory.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<int32_t> rxQueueSize_ {};
    // The number of private IP addresses to be assigned by ECS. Valid values: 1 to 49.
    shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
    // The ID of the security group to which to assign the ENI. The security group and the ENI must belong to the same VPC.
    // 
    // > You must specify `SecurityGroupId` or `SecurityGroupIds.N` but not both.
    shared_ptr<string> securityGroupId_ {};
    // The IDs of security groups to which to assign the ENI. The security groups and the ENI must belong to the same VPC. The valid values of N are determined based on the maximum number of security groups to which an ENI can be assigned. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
    // 
    // >  You must specify `SecurityGroupId` or `SecurityGroupIds.N` but not both.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // Specifies whether to enable the source and destination IP address check feature. We recommend that you enable the feature to improve network security. Valid value:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  This feature is available only in some regions. Before you use this method, read [Source and destination IP address check](https://help.aliyun.com/document_detail/2863210.html).
    shared_ptr<bool> sourceDestCheck_ {};
    // The tags to add to the ENI.
    shared_ptr<vector<CreateNetworkInterfaceRequest::Tag>> tag_ {};
    // The transmit (Tx) queue depth of the ENI.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   The Tx queue depth of an ENI must be the same as the Rx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Tx queue depth yields higher outbound throughput but consumes more memory.
    // 
    // >  This parameter is not publicly available.
    shared_ptr<int32_t> txQueueSize_ {};
    // The ID of the vSwitch to which to connect the ENI. Private IP addresses are assigned to the ENI from within the CIDR block of the vSwitch.
    // 
    // >  A secondary ENI can be attached to only an instance that is in the same zone as the ENI. The instance and the ENI can be connected to different vSwitches.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // > This parameter is no longer used.
    shared_ptr<bool> visible_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
