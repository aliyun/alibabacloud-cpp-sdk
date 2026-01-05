// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_HPP_
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
      // The communication mode of the ENI. Valid values:
      // 
      // *   Standard: uses the TCP communication mode.
      // *   HighPerformance: uses the remote direct memory access (RDMA) communication mode with Elastic RDMA Interface (ERI) enabled.
      // 
      // When the ENI is in the InUse state, take note of the following items:
      // 
      // *   The total number of ERIs attached to the instance cannot exceed the ERI quota for the instance type. To query the ERI quota for an instance type, call the DescribeInstanceTypes operation and check the EriQuantity value in the response.
      // 
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The number of queues supported by the ENI. When the ENI is in the InUse state, take note of the following items:
      // 
      // *   The value of this parameter cannot exceed the maximum number of queues allowed per ENI for the instance type.
      // *   The total number of queues for all ENIs on the instance cannot exceed the queue quota for the instance type. To query the maximum number of queues per ENI and the queue quota for an instance type, call the DescribeInstanceTypes operation and check the MaximumQueueNumberPerEnig and TotalEniQueueQuantity values in the response.
      // 
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<int32_t> queueNumber_ {};
      // The number of queues supported by the ERI. When the ERI is in the InUse state, take note of the following items:
      // 
      // *   The value of this parameter cannot exceed the maximum number of queues allowed per ERI for the instance type. To query the maximum number of queues allowed per ERI for an instance type, call the DescribeInstanceTypes operation and check the QueuePairNumber value in the response.
      // 
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<int32_t> queuePairNumber_ {};
      // The receive (Rx) queue depth of the ENI.
      // 
      // Take note of the following items:
      // 
      // *   The Rx queue depth of an ENI must be the same as the transmit (Tx) queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
      // *   A larger Rx queue depth yields higher inbound throughput but consumes more memory.
      // 
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<int32_t> rxQueueSize_ {};
      // The Tx queue depth of the ENI.
      // 
      // Take note of the following items:
      // 
      // *   The Tx queue depth of an ENI must be the same as the Rx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
      // *   A larger Tx queue depth yields higher outbound throughput but consumes more memory.
      // 
      // >  This parameter is in invitational preview and is not publicly available.
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
      // This parameter is not publicly available.
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
      // >  If the associated ECS instance is used together with a Network Load Balancer (NLB) or Classic Load Balancer (CLB) instance, the default timeout period for TCP connections in the `TIME_WAIT` state is 15 seconds.
      shared_ptr<int32_t> tcpClosedAndTimeWaitTimeout_ {};
      // The timeout period for TCP connections in the ESTABLISHED state. Unit: seconds. Valid values: 30, 60, 80, 100, 200, 300, 500, 700, and 910.
      // 
      // Default value: 910.
      shared_ptr<int32_t> tcpEstablishedTimeout_ {};
      // The timeout period for UDP flows. Unit: seconds. Valid values: 10, 20, 30, 60, 80, and 100.
      // 
      // Default value: 30.
      // 
      // >  If the associated ECS instance is used together with an NLB or CLB instance, the default timeout period for UDP flows is 100 seconds.
      shared_ptr<int32_t> udpTimeout_ {};
    };

    virtual bool empty() const override { return this->connectionTrackingConfiguration_ == nullptr
        && this->deleteOnRelease_ == nullptr && this->description_ == nullptr && this->enhancedNetwork_ == nullptr && this->networkInterfaceId_ == nullptr && this->networkInterfaceName_ == nullptr
        && this->networkInterfaceTrafficConfig_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->queueNumber_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->rxQueueSize_ == nullptr && this->securityGroupId_ == nullptr && this->sourceDestCheck_ == nullptr
        && this->txQueueSize_ == nullptr; };
    // connectionTrackingConfiguration Field Functions 
    bool hasConnectionTrackingConfiguration() const { return this->connectionTrackingConfiguration_ != nullptr;};
    void deleteConnectionTrackingConfiguration() { this->connectionTrackingConfiguration_ = nullptr;};
    inline const ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration & getConnectionTrackingConfiguration() const { DARABONBA_PTR_GET_CONST(connectionTrackingConfiguration_, ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration) };
    inline ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration getConnectionTrackingConfiguration() { DARABONBA_PTR_GET(connectionTrackingConfiguration_, ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration) };
    inline ModifyNetworkInterfaceAttributeRequest& setConnectionTrackingConfiguration(const ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration & connectionTrackingConfiguration) { DARABONBA_PTR_SET_VALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };
    inline ModifyNetworkInterfaceAttributeRequest& setConnectionTrackingConfiguration(ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration && connectionTrackingConfiguration) { DARABONBA_PTR_SET_RVALUE(connectionTrackingConfiguration_, connectionTrackingConfiguration) };


    // deleteOnRelease Field Functions 
    bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
    void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
    inline bool getDeleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
    inline ModifyNetworkInterfaceAttributeRequest& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enhancedNetwork Field Functions 
    bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
    void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
    inline const ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork & getEnhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork) };
    inline ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork getEnhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork) };
    inline ModifyNetworkInterfaceAttributeRequest& setEnhancedNetwork(const ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
    inline ModifyNetworkInterfaceAttributeRequest& setEnhancedNetwork(ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // networkInterfaceTrafficConfig Field Functions 
    bool hasNetworkInterfaceTrafficConfig() const { return this->networkInterfaceTrafficConfig_ != nullptr;};
    void deleteNetworkInterfaceTrafficConfig() { this->networkInterfaceTrafficConfig_ = nullptr;};
    inline const ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig & getNetworkInterfaceTrafficConfig() const { DARABONBA_PTR_GET_CONST(networkInterfaceTrafficConfig_, ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig) };
    inline ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig getNetworkInterfaceTrafficConfig() { DARABONBA_PTR_GET(networkInterfaceTrafficConfig_, ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig) };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceTrafficConfig(const ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig & networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };
    inline ModifyNetworkInterfaceAttributeRequest& setNetworkInterfaceTrafficConfig(ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig && networkInterfaceTrafficConfig) { DARABONBA_PTR_SET_RVALUE(networkInterfaceTrafficConfig_, networkInterfaceTrafficConfig) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyNetworkInterfaceAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // queueNumber Field Functions 
    bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
    void deleteQueueNumber() { this->queueNumber_ = nullptr;};
    inline int32_t getQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
    inline ModifyNetworkInterfaceAttributeRequest& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyNetworkInterfaceAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyNetworkInterfaceAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rxQueueSize Field Functions 
    bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
    void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
    inline int32_t getRxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
    inline ModifyNetworkInterfaceAttributeRequest& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
    inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
    inline ModifyNetworkInterfaceAttributeRequest& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline ModifyNetworkInterfaceAttributeRequest& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // sourceDestCheck Field Functions 
    bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
    void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
    inline bool getSourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
    inline ModifyNetworkInterfaceAttributeRequest& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


    // txQueueSize Field Functions 
    bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
    void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
    inline int32_t getTxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
    inline ModifyNetworkInterfaceAttributeRequest& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


  protected:
    // The connection tracking configuration of the ENI.
    shared_ptr<ModifyNetworkInterfaceAttributeRequest::ConnectionTrackingConfiguration> connectionTrackingConfiguration_ {};
    // Specifies whether to release the ENI when the associated instance is released. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> deleteOnRelease_ {};
    // The description of the ENI. The description must be 2 to 255 characters in length and cannot start with [http:// or https://](http://https://。).
    // 
    // This parameter is left empty by default.
    shared_ptr<string> description_ {};
    // This parameter is not publicly available.
    shared_ptr<ModifyNetworkInterfaceAttributeRequest::EnhancedNetwork> enhancedNetwork_ {};
    // The ID of the ENI.
    // 
    // This parameter is required.
    shared_ptr<string> networkInterfaceId_ {};
    // The name of the ENI. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is left empty by default.
    shared_ptr<string> networkInterfaceName_ {};
    // The communication parameters of the ENI.
    shared_ptr<ModifyNetworkInterfaceAttributeRequest::NetworkInterfaceTrafficConfig> networkInterfaceTrafficConfig_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of queues supported by the ENI. Valid values: 1 to 2048.
    // 
    // *   You can change the number of queues supported by an ENI only when the ENI is in the `Available` state or the ENI is attached (`InUse`) to an instance that is in the `Stopped` state.
    // *   The number of queues supported by the ENI cannot exceed the maximum number of queues that the instance type allows for each ENI. The total number of queues on all ENIs on an instance cannot exceed the queue quota that the instance type supports. To query the maximum number of queues per ENI and the queue quota for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation and check the `MaximumQueueNumberPerEni` and `TotalEniQueueQuantity` values in the response.
    shared_ptr<int32_t> queueNumber_ {};
    // The region ID of the ENI. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The receive (Rx) queue depth of the ENI.
    // 
    // Take note of the following items:
    // 
    // *   The Rx queue depth of an ENI must be the same as the transmit (Tx) queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Rx queue depth yields higher inbound throughput but consumes more memory.
    shared_ptr<int32_t> rxQueueSize_ {};
    // The IDs of the security groups to which to add the secondary ENI. The secondary ENI is added to the specified security groups and removed from the original security groups.
    // 
    // *   The valid values of N vary based on the maximum number of security groups to which an ENI can be added. For more information, see the [Security group limits](~~25412#SecurityGroupQuota~~) section of the "Limits and quotas" topic.
    // *   The new security groups take effect after a short delay.
    shared_ptr<vector<string>> securityGroupId_ {};
    // Source and destination IP address check We recommend that you enable the feature to improve network security. Valid value:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  This feature is available only in some regions. Before you use this method, read [Source and destination IP address check](https://help.aliyun.com/document_detail/2863210.html).
    shared_ptr<bool> sourceDestCheck_ {};
    // The Tx queue depth of the ENI.
    // 
    // Take note of the following items:
    // 
    // *   The Tx queue depth of an ENI must be the same as the Rx queue depth of the ENI. Valid values: powers of 2 in the range of 8192 to 16384.
    // *   A larger Tx queue depth yields higher outbound throughput but consumes more memory.
    shared_ptr<int32_t> txQueueSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
