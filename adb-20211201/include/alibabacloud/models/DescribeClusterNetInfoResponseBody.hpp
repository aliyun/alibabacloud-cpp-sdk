// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterNetInfoResponseBody() = default ;
    DescribeClusterNetInfoResponseBody(const DescribeClusterNetInfoResponseBody &) = default ;
    DescribeClusterNetInfoResponseBody(DescribeClusterNetInfoResponseBody &&) = default ;
    DescribeClusterNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetInfoResponseBody() = default ;
    DescribeClusterNetInfoResponseBody& operator=(const DescribeClusterNetInfoResponseBody &) = default ;
    DescribeClusterNetInfoResponseBody& operator=(DescribeClusterNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Address, address_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Address : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Address& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Ports, ports_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, Address& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Ports, ports_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        Address() = default ;
        Address(const Address &) = default ;
        Address(Address &&) = default ;
        Address(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Address() = default ;
        Address& operator=(const Address &) = default ;
        Address& operator=(Address &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Ports : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Ports& obj) { 
            DARABONBA_PTR_TO_JSON(ports, ports_);
          };
          friend void from_json(const Darabonba::Json& j, Ports& obj) { 
            DARABONBA_PTR_FROM_JSON(ports, ports_);
          };
          Ports() = default ;
          Ports(const Ports &) = default ;
          Ports(Ports &&) = default ;
          Ports(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Ports() = default ;
          Ports& operator=(const Ports &) = default ;
          Ports& operator=(Ports &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PortsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PortsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(Protocol, protocol_);
            };
            friend void from_json(const Darabonba::Json& j, PortsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Port, port_);
              DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
            };
            PortsItem() = default ;
            PortsItem(const PortsItem &) = default ;
            PortsItem(PortsItem &&) = default ;
            PortsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PortsItem() = default ;
            PortsItem& operator=(const PortsItem &) = default ;
            PortsItem& operator=(PortsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
            // port Field Functions 
            bool hasPort() const { return this->port_ != nullptr;};
            void deletePort() { this->port_ = nullptr;};
            inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
            inline PortsItem& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


            // protocol Field Functions 
            bool hasProtocol() const { return this->protocol_ != nullptr;};
            void deleteProtocol() { this->protocol_ = nullptr;};
            inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
            inline PortsItem& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


          protected:
            // The port.
            shared_ptr<string> port_ {};
            // The type of the protocol. Valid values:
            // 
            // *   **tcp**
            // *   **http**
            // *   **https**
            // *   **mysql**
            shared_ptr<string> protocol_ {};
          };

          virtual bool empty() const override { return this->ports_ == nullptr; };
          // ports Field Functions 
          bool hasPorts() const { return this->ports_ != nullptr;};
          void deletePorts() { this->ports_ = nullptr;};
          inline const vector<Ports::PortsItem> & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, vector<Ports::PortsItem>) };
          inline vector<Ports::PortsItem> getPorts() { DARABONBA_PTR_GET(ports_, vector<Ports::PortsItem>) };
          inline Ports& setPorts(const vector<Ports::PortsItem> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
          inline Ports& setPorts(vector<Ports::PortsItem> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


        protected:
          shared_ptr<vector<Ports::PortsItem>> ports_ {};
        };

        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->connectionStringPrefix_ == nullptr && this->IPAddress_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr && this->ports_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline Address& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // connectionStringPrefix Field Functions 
        bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
        void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
        inline string getConnectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
        inline Address& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline Address& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline Address& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline Address& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // ports Field Functions 
        bool hasPorts() const { return this->ports_ != nullptr;};
        void deletePorts() { this->ports_ = nullptr;};
        inline const Address::Ports & getPorts() const { DARABONBA_PTR_GET_CONST(ports_, Address::Ports) };
        inline Address::Ports getPorts() { DARABONBA_PTR_GET(ports_, Address::Ports) };
        inline Address& setPorts(const Address::Ports & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
        inline Address& setPorts(Address::Ports && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline Address& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Address& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The endpoint of the cluster.
        // 
        // *   If NetType is set to VPC, the VPC endpoint of the cluster is returned.
        // *   If NetType is set to Public, the public endpoint of the cluster is returned.
        shared_ptr<string> connectionString_ {};
        // The prefix of the endpoint.
        // 
        // *   If NetType is set to VPC, the prefix of the VPC endpoint is returned.
        // *   If NetType is set to Public, the prefix of the public endpoint is returned.
        shared_ptr<string> connectionStringPrefix_ {};
        // The IP address of the endpoint.
        // 
        // *   If NetType is set to VPC, the private IP address of the cluster is returned.
        // *   If NetType is set to Public, the public IP address of the cluster is returned.
        shared_ptr<string> IPAddress_ {};
        // The network type of the cluster. Valid values:
        // 
        // *   **Public**: Internet.
        // *   **VPC**: VPC.
        shared_ptr<string> netType_ {};
        // The port number that is used to connect to the cluster. **3306** is returned.
        shared_ptr<string> port_ {};
        // The ports.
        shared_ptr<Address::Ports> ports_ {};
        // The VPC ID.
        // 
        // >  If NetType is set to Public, an empty string is returned.
        shared_ptr<string> VPCId_ {};
        // The vSwitch ID of the cluster.
        // 
        // >  If NetType is set to Public, an empty string is returned.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr; };
      // address Field Functions 
      bool hasAddress() const { return this->address_ != nullptr;};
      void deleteAddress() { this->address_ = nullptr;};
      inline const vector<Items::Address> & getAddress() const { DARABONBA_PTR_GET_CONST(address_, vector<Items::Address>) };
      inline vector<Items::Address> getAddress() { DARABONBA_PTR_GET(address_, vector<Items::Address>) };
      inline Items& setAddress(const vector<Items::Address> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
      inline Items& setAddress(vector<Items::Address> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


    protected:
      shared_ptr<vector<Items::Address>> address_ {};
    };

    virtual bool empty() const override { return this->clusterNetworkType_ == nullptr
        && this->items_ == nullptr && this->requestId_ == nullptr; };
    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string getClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeClusterNetInfoResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeClusterNetInfoResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeClusterNetInfoResponseBody::Items) };
    inline DescribeClusterNetInfoResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeClusterNetInfoResponseBody::Items) };
    inline DescribeClusterNetInfoResponseBody& setItems(const DescribeClusterNetInfoResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeClusterNetInfoResponseBody& setItems(DescribeClusterNetInfoResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network type of the cluster. Only the Virtual Private Cloud (VPC) network type is supported. **VPC** is returned.
    shared_ptr<string> clusterNetworkType_ {};
    // The queried network information about the cluster.
    shared_ptr<DescribeClusterNetInfoResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
