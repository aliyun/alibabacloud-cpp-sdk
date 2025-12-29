// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHARDINGNETWORKADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHARDINGNETWORKADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeShardingNetworkAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShardingNetworkAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompatibleConnections, compatibleConnections_);
      DARABONBA_PTR_TO_JSON(NetworkAddresses, networkAddresses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShardingNetworkAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompatibleConnections, compatibleConnections_);
      DARABONBA_PTR_FROM_JSON(NetworkAddresses, networkAddresses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeShardingNetworkAddressResponseBody() = default ;
    DescribeShardingNetworkAddressResponseBody(const DescribeShardingNetworkAddressResponseBody &) = default ;
    DescribeShardingNetworkAddressResponseBody(DescribeShardingNetworkAddressResponseBody &&) = default ;
    DescribeShardingNetworkAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShardingNetworkAddressResponseBody() = default ;
    DescribeShardingNetworkAddressResponseBody& operator=(const DescribeShardingNetworkAddressResponseBody &) = default ;
    DescribeShardingNetworkAddressResponseBody& operator=(DescribeShardingNetworkAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkAddresses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkAddresses& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkAddress, networkAddress_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkAddresses& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkAddress, networkAddress_);
      };
      NetworkAddresses() = default ;
      NetworkAddresses(const NetworkAddresses &) = default ;
      NetworkAddresses(NetworkAddresses &&) = default ;
      NetworkAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkAddresses() = default ;
      NetworkAddresses& operator=(const NetworkAddresses &) = default ;
      NetworkAddresses& operator=(NetworkAddresses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetworkAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkAddress& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetworkAddress, networkAddress_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(TxtRecord, txtRecord_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetworkAddress, networkAddress_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(TxtRecord, txtRecord_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        };
        NetworkAddress() = default ;
        NetworkAddress(const NetworkAddress &) = default ;
        NetworkAddress(NetworkAddress &&) = default ;
        NetworkAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkAddress() = default ;
        NetworkAddress& operator=(const NetworkAddress &) = default ;
        NetworkAddress& operator=(NetworkAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionType_ == nullptr
        && this->expiredTime_ == nullptr && this->IPAddress_ == nullptr && this->networkAddress_ == nullptr && this->networkType_ == nullptr && this->nodeId_ == nullptr
        && this->nodeType_ == nullptr && this->port_ == nullptr && this->role_ == nullptr && this->txtRecord_ == nullptr && this->VPCId_ == nullptr
        && this->vswitchId_ == nullptr; };
        // connectionType Field Functions 
        bool hasConnectionType() const { return this->connectionType_ != nullptr;};
        void deleteConnectionType() { this->connectionType_ = nullptr;};
        inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
        inline NetworkAddress& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline NetworkAddress& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline NetworkAddress& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // networkAddress Field Functions 
        bool hasNetworkAddress() const { return this->networkAddress_ != nullptr;};
        void deleteNetworkAddress() { this->networkAddress_ = nullptr;};
        inline string getNetworkAddress() const { DARABONBA_PTR_GET_DEFAULT(networkAddress_, "") };
        inline NetworkAddress& setNetworkAddress(string networkAddress) { DARABONBA_PTR_SET_VALUE(networkAddress_, networkAddress) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline NetworkAddress& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NetworkAddress& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline NetworkAddress& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline NetworkAddress& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline NetworkAddress& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // txtRecord Field Functions 
        bool hasTxtRecord() const { return this->txtRecord_ != nullptr;};
        void deleteTxtRecord() { this->txtRecord_ = nullptr;};
        inline string getTxtRecord() const { DARABONBA_PTR_GET_DEFAULT(txtRecord_, "") };
        inline NetworkAddress& setTxtRecord(string txtRecord) { DARABONBA_PTR_SET_VALUE(txtRecord_, txtRecord) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline NetworkAddress& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline NetworkAddress& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      protected:
        // The public endpoint type. Valid values:
        // 
        // *   **SRV**
        // *   **Normal**
        shared_ptr<string> connectionType_ {};
        // The remaining duration of the classic network endpoint. Unit: seconds.
        shared_ptr<string> expiredTime_ {};
        // The IP address of the instance.
        shared_ptr<string> IPAddress_ {};
        // The connection string of the instance.
        shared_ptr<string> networkAddress_ {};
        // The network type of the instance.
        // 
        // *   **VPC**: virtual private cloud
        // *   **Classic**: classic network
        // *   **Public**: the Internet
        shared_ptr<string> networkType_ {};
        // The ID of the mongos node.
        shared_ptr<string> nodeId_ {};
        // The type of the node. Valid values:
        // 
        // *   **mongos**: mongos node
        // *   **shard**: shard node
        // *   **configserver**: Configserver node
        shared_ptr<string> nodeType_ {};
        // The port that is used to connect to the instance.
        shared_ptr<string> port_ {};
        // The role of the node. Valid values:
        // 
        // *   Primary
        // *   Secondary
        shared_ptr<string> role_ {};
        // Txt record which can be used to store MongoDB-related meta data, such as version, configuration parameters and etc. With the combination of txt record and other technology, for example SRV record, the MongoDB client can complete the complex service discovery and configuration passing.
        shared_ptr<string> txtRecord_ {};
        // The VPC ID of the instance.
        // 
        // >  This parameter is returned when the network type is **VPC**.
        shared_ptr<string> VPCId_ {};
        // The ID of the vSwitch in the VPC.
        // 
        // >  This parameter is returned when the network type is **VPC**.
        shared_ptr<string> vswitchId_ {};
      };

      virtual bool empty() const override { return this->networkAddress_ == nullptr; };
      // networkAddress Field Functions 
      bool hasNetworkAddress() const { return this->networkAddress_ != nullptr;};
      void deleteNetworkAddress() { this->networkAddress_ = nullptr;};
      inline const vector<NetworkAddresses::NetworkAddress> & getNetworkAddress() const { DARABONBA_PTR_GET_CONST(networkAddress_, vector<NetworkAddresses::NetworkAddress>) };
      inline vector<NetworkAddresses::NetworkAddress> getNetworkAddress() { DARABONBA_PTR_GET(networkAddress_, vector<NetworkAddresses::NetworkAddress>) };
      inline NetworkAddresses& setNetworkAddress(const vector<NetworkAddresses::NetworkAddress> & networkAddress) { DARABONBA_PTR_SET_VALUE(networkAddress_, networkAddress) };
      inline NetworkAddresses& setNetworkAddress(vector<NetworkAddresses::NetworkAddress> && networkAddress) { DARABONBA_PTR_SET_RVALUE(networkAddress_, networkAddress) };


    protected:
      shared_ptr<vector<NetworkAddresses::NetworkAddress>> networkAddress_ {};
    };

    class CompatibleConnections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompatibleConnections& obj) { 
        DARABONBA_PTR_TO_JSON(CompatibleConnection, compatibleConnection_);
      };
      friend void from_json(const Darabonba::Json& j, CompatibleConnections& obj) { 
        DARABONBA_PTR_FROM_JSON(CompatibleConnection, compatibleConnection_);
      };
      CompatibleConnections() = default ;
      CompatibleConnections(const CompatibleConnections &) = default ;
      CompatibleConnections(CompatibleConnections &&) = default ;
      CompatibleConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompatibleConnections() = default ;
      CompatibleConnections& operator=(const CompatibleConnections &) = default ;
      CompatibleConnections& operator=(CompatibleConnections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CompatibleConnection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CompatibleConnection& obj) { 
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetworkAddress, networkAddress_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, CompatibleConnection& obj) { 
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetworkAddress, networkAddress_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        };
        CompatibleConnection() = default ;
        CompatibleConnection(const CompatibleConnection &) = default ;
        CompatibleConnection(CompatibleConnection &&) = default ;
        CompatibleConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CompatibleConnection() = default ;
        CompatibleConnection& operator=(const CompatibleConnection &) = default ;
        CompatibleConnection& operator=(CompatibleConnection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->expiredTime_ == nullptr
        && this->IPAddress_ == nullptr && this->networkAddress_ == nullptr && this->networkType_ == nullptr && this->port_ == nullptr && this->VPCId_ == nullptr
        && this->vswitchId_ == nullptr; };
        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline CompatibleConnection& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline CompatibleConnection& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // networkAddress Field Functions 
        bool hasNetworkAddress() const { return this->networkAddress_ != nullptr;};
        void deleteNetworkAddress() { this->networkAddress_ = nullptr;};
        inline string getNetworkAddress() const { DARABONBA_PTR_GET_DEFAULT(networkAddress_, "") };
        inline CompatibleConnection& setNetworkAddress(string networkAddress) { DARABONBA_PTR_SET_VALUE(networkAddress_, networkAddress) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline CompatibleConnection& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline CompatibleConnection& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline CompatibleConnection& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline CompatibleConnection& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      protected:
        // The remaining duration of the classic network endpoint. Unit: seconds.
        shared_ptr<string> expiredTime_ {};
        // The IP address of the instance.
        shared_ptr<string> IPAddress_ {};
        // The endpoint of the instance.
        shared_ptr<string> networkAddress_ {};
        // The network type of the instance.
        // 
        // *   **VPC**: virtual private cloud
        // *   **Classic**: classic network
        // *   **Public**: the Internet
        shared_ptr<string> networkType_ {};
        // The port that is used to connect to the instance.
        shared_ptr<string> port_ {};
        // The VPC ID of the instance.
        // 
        // >  This parameter is returned when the network type is **VPC**.
        shared_ptr<string> VPCId_ {};
        // The ID of the vSwitch in the Virtual Private Cloud (VPC).
        // 
        // >  This parameter is returned when the network type is **VPC**.
        shared_ptr<string> vswitchId_ {};
      };

      virtual bool empty() const override { return this->compatibleConnection_ == nullptr; };
      // compatibleConnection Field Functions 
      bool hasCompatibleConnection() const { return this->compatibleConnection_ != nullptr;};
      void deleteCompatibleConnection() { this->compatibleConnection_ = nullptr;};
      inline const vector<CompatibleConnections::CompatibleConnection> & getCompatibleConnection() const { DARABONBA_PTR_GET_CONST(compatibleConnection_, vector<CompatibleConnections::CompatibleConnection>) };
      inline vector<CompatibleConnections::CompatibleConnection> getCompatibleConnection() { DARABONBA_PTR_GET(compatibleConnection_, vector<CompatibleConnections::CompatibleConnection>) };
      inline CompatibleConnections& setCompatibleConnection(const vector<CompatibleConnections::CompatibleConnection> & compatibleConnection) { DARABONBA_PTR_SET_VALUE(compatibleConnection_, compatibleConnection) };
      inline CompatibleConnections& setCompatibleConnection(vector<CompatibleConnections::CompatibleConnection> && compatibleConnection) { DARABONBA_PTR_SET_RVALUE(compatibleConnection_, compatibleConnection) };


    protected:
      shared_ptr<vector<CompatibleConnections::CompatibleConnection>> compatibleConnection_ {};
    };

    virtual bool empty() const override { return this->compatibleConnections_ == nullptr
        && this->networkAddresses_ == nullptr && this->requestId_ == nullptr; };
    // compatibleConnections Field Functions 
    bool hasCompatibleConnections() const { return this->compatibleConnections_ != nullptr;};
    void deleteCompatibleConnections() { this->compatibleConnections_ = nullptr;};
    inline const DescribeShardingNetworkAddressResponseBody::CompatibleConnections & getCompatibleConnections() const { DARABONBA_PTR_GET_CONST(compatibleConnections_, DescribeShardingNetworkAddressResponseBody::CompatibleConnections) };
    inline DescribeShardingNetworkAddressResponseBody::CompatibleConnections getCompatibleConnections() { DARABONBA_PTR_GET(compatibleConnections_, DescribeShardingNetworkAddressResponseBody::CompatibleConnections) };
    inline DescribeShardingNetworkAddressResponseBody& setCompatibleConnections(const DescribeShardingNetworkAddressResponseBody::CompatibleConnections & compatibleConnections) { DARABONBA_PTR_SET_VALUE(compatibleConnections_, compatibleConnections) };
    inline DescribeShardingNetworkAddressResponseBody& setCompatibleConnections(DescribeShardingNetworkAddressResponseBody::CompatibleConnections && compatibleConnections) { DARABONBA_PTR_SET_RVALUE(compatibleConnections_, compatibleConnections) };


    // networkAddresses Field Functions 
    bool hasNetworkAddresses() const { return this->networkAddresses_ != nullptr;};
    void deleteNetworkAddresses() { this->networkAddresses_ = nullptr;};
    inline const DescribeShardingNetworkAddressResponseBody::NetworkAddresses & getNetworkAddresses() const { DARABONBA_PTR_GET_CONST(networkAddresses_, DescribeShardingNetworkAddressResponseBody::NetworkAddresses) };
    inline DescribeShardingNetworkAddressResponseBody::NetworkAddresses getNetworkAddresses() { DARABONBA_PTR_GET(networkAddresses_, DescribeShardingNetworkAddressResponseBody::NetworkAddresses) };
    inline DescribeShardingNetworkAddressResponseBody& setNetworkAddresses(const DescribeShardingNetworkAddressResponseBody::NetworkAddresses & networkAddresses) { DARABONBA_PTR_SET_VALUE(networkAddresses_, networkAddresses) };
    inline DescribeShardingNetworkAddressResponseBody& setNetworkAddresses(DescribeShardingNetworkAddressResponseBody::NetworkAddresses && networkAddresses) { DARABONBA_PTR_SET_RVALUE(networkAddresses_, networkAddresses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeShardingNetworkAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The endpoints of DynamoDB-compatible instances.
    shared_ptr<DescribeShardingNetworkAddressResponseBody::CompatibleConnections> compatibleConnections_ {};
    // The endpoints of the ApsaraDB for MongoDB sharded cluster instance.
    shared_ptr<DescribeShardingNetworkAddressResponseBody::NetworkAddresses> networkAddresses_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
