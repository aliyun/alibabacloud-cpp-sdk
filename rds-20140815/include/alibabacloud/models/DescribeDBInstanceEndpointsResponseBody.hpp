// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceEndpointsResponseBody() = default ;
    DescribeDBInstanceEndpointsResponseBody(const DescribeDBInstanceEndpointsResponseBody &) = default ;
    DescribeDBInstanceEndpointsResponseBody(DescribeDBInstanceEndpointsResponseBody &&) = default ;
    DescribeDBInstanceEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEndpointsResponseBody() = default ;
    DescribeDBInstanceEndpointsResponseBody& operator=(const DescribeDBInstanceEndpointsResponseBody &) = default ;
    DescribeDBInstanceEndpointsResponseBody& operator=(DescribeDBInstanceEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceEndpoints, DBInstanceEndpoints_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceEndpoints, DBInstanceEndpoints_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceEndpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceEndpoints& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceEndpoint, DBInstanceEndpoint_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceEndpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceEndpoint, DBInstanceEndpoint_);
        };
        DBInstanceEndpoints() = default ;
        DBInstanceEndpoints(const DBInstanceEndpoints &) = default ;
        DBInstanceEndpoints(DBInstanceEndpoints &&) = default ;
        DBInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceEndpoints() = default ;
        DBInstanceEndpoints& operator=(const DBInstanceEndpoints &) = default ;
        DBInstanceEndpoints& operator=(DBInstanceEndpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DBInstanceEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DBInstanceEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
            DARABONBA_PTR_TO_JSON(EndpointDescription, endpointDescription_);
            DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
            DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
            DARABONBA_PTR_TO_JSON(NodeItems, nodeItems_);
          };
          friend void from_json(const Darabonba::Json& j, DBInstanceEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
            DARABONBA_PTR_FROM_JSON(EndpointDescription, endpointDescription_);
            DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
            DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
            DARABONBA_PTR_FROM_JSON(NodeItems, nodeItems_);
          };
          DBInstanceEndpoint() = default ;
          DBInstanceEndpoint(const DBInstanceEndpoint &) = default ;
          DBInstanceEndpoint(DBInstanceEndpoint &&) = default ;
          DBInstanceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DBInstanceEndpoint() = default ;
          DBInstanceEndpoint& operator=(const DBInstanceEndpoint &) = default ;
          DBInstanceEndpoint& operator=(DBInstanceEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NodeItems : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NodeItems& obj) { 
              DARABONBA_PTR_TO_JSON(NodeItem, nodeItem_);
            };
            friend void from_json(const Darabonba::Json& j, NodeItems& obj) { 
              DARABONBA_PTR_FROM_JSON(NodeItem, nodeItem_);
            };
            NodeItems() = default ;
            NodeItems(const NodeItems &) = default ;
            NodeItems(NodeItems &&) = default ;
            NodeItems(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NodeItems() = default ;
            NodeItems& operator=(const NodeItems &) = default ;
            NodeItems& operator=(NodeItems &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class NodeItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NodeItem& obj) { 
                DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
                DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
                DARABONBA_PTR_TO_JSON(Weight, weight_);
              };
              friend void from_json(const Darabonba::Json& j, NodeItem& obj) { 
                DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
                DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
                DARABONBA_PTR_FROM_JSON(Weight, weight_);
              };
              NodeItem() = default ;
              NodeItem(const NodeItem &) = default ;
              NodeItem(NodeItem &&) = default ;
              NodeItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NodeItem() = default ;
              NodeItem& operator=(const NodeItem &) = default ;
              NodeItem& operator=(NodeItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->nodeId_ == nullptr && this->weight_ == nullptr; };
              // DBInstanceId Field Functions 
              bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
              void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
              inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
              inline NodeItem& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


              // nodeId Field Functions 
              bool hasNodeId() const { return this->nodeId_ != nullptr;};
              void deleteNodeId() { this->nodeId_ = nullptr;};
              inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
              inline NodeItem& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


              // weight Field Functions 
              bool hasWeight() const { return this->weight_ != nullptr;};
              void deleteWeight() { this->weight_ = nullptr;};
              inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
              inline NodeItem& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


            protected:
              // The instance ID.
              shared_ptr<string> DBInstanceId_ {};
              // The node ID.
              shared_ptr<string> nodeId_ {};
              // The weight of the node. Read requests are distributed based on the weight.
              // 
              // Valid values: 0 to 100.
              shared_ptr<int32_t> weight_ {};
            };

            virtual bool empty() const override { return this->nodeItem_ == nullptr; };
            // nodeItem Field Functions 
            bool hasNodeItem() const { return this->nodeItem_ != nullptr;};
            void deleteNodeItem() { this->nodeItem_ = nullptr;};
            inline const vector<NodeItems::NodeItem> & getNodeItem() const { DARABONBA_PTR_GET_CONST(nodeItem_, vector<NodeItems::NodeItem>) };
            inline vector<NodeItems::NodeItem> getNodeItem() { DARABONBA_PTR_GET(nodeItem_, vector<NodeItems::NodeItem>) };
            inline NodeItems& setNodeItem(const vector<NodeItems::NodeItem> & nodeItem) { DARABONBA_PTR_SET_VALUE(nodeItem_, nodeItem) };
            inline NodeItems& setNodeItem(vector<NodeItems::NodeItem> && nodeItem) { DARABONBA_PTR_SET_RVALUE(nodeItem_, nodeItem) };


          protected:
            shared_ptr<vector<NodeItems::NodeItem>> nodeItem_ {};
          };

          class AddressItems : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AddressItems& obj) { 
              DARABONBA_PTR_TO_JSON(AddressItem, addressItem_);
            };
            friend void from_json(const Darabonba::Json& j, AddressItems& obj) { 
              DARABONBA_PTR_FROM_JSON(AddressItem, addressItem_);
            };
            AddressItems() = default ;
            AddressItems(const AddressItems &) = default ;
            AddressItems(AddressItems &&) = default ;
            AddressItems(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AddressItems() = default ;
            AddressItems& operator=(const AddressItems &) = default ;
            AddressItems& operator=(AddressItems &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AddressItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AddressItem& obj) { 
                DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
                DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
                DARABONBA_PTR_TO_JSON(IpType, ipType_);
                DARABONBA_PTR_TO_JSON(Port, port_);
                DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
                DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
              };
              friend void from_json(const Darabonba::Json& j, AddressItem& obj) { 
                DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
                DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
                DARABONBA_PTR_FROM_JSON(IpType, ipType_);
                DARABONBA_PTR_FROM_JSON(Port, port_);
                DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
                DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
              };
              AddressItem() = default ;
              AddressItem(const AddressItem &) = default ;
              AddressItem(AddressItem &&) = default ;
              AddressItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AddressItem() = default ;
              AddressItem& operator=(const AddressItem &) = default ;
              AddressItem& operator=(AddressItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->ipAddress_ == nullptr && this->ipType_ == nullptr && this->port_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
              // connectionString Field Functions 
              bool hasConnectionString() const { return this->connectionString_ != nullptr;};
              void deleteConnectionString() { this->connectionString_ = nullptr;};
              inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
              inline AddressItem& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


              // ipAddress Field Functions 
              bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
              void deleteIpAddress() { this->ipAddress_ = nullptr;};
              inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
              inline AddressItem& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


              // ipType Field Functions 
              bool hasIpType() const { return this->ipType_ != nullptr;};
              void deleteIpType() { this->ipType_ = nullptr;};
              inline string getIpType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
              inline AddressItem& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


              // port Field Functions 
              bool hasPort() const { return this->port_ != nullptr;};
              void deletePort() { this->port_ = nullptr;};
              inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
              inline AddressItem& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


              // vSwitchId Field Functions 
              bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
              void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
              inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
              inline AddressItem& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


              // vpcId Field Functions 
              bool hasVpcId() const { return this->vpcId_ != nullptr;};
              void deleteVpcId() { this->vpcId_ = nullptr;};
              inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
              inline AddressItem& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


            protected:
              // The endpoints of the instance.
              shared_ptr<string> connectionString_ {};
              // The IP address.
              shared_ptr<string> ipAddress_ {};
              // The type of the IP address. Valid values:
              // 
              // *   **Public**: Internet
              // *   **Private**: internal network
              shared_ptr<string> ipType_ {};
              // The port number of the endpoint.
              shared_ptr<string> port_ {};
              // The vSwitch ID.
              shared_ptr<string> vSwitchId_ {};
              // The VPC ID.
              shared_ptr<string> vpcId_ {};
            };

            virtual bool empty() const override { return this->addressItem_ == nullptr; };
            // addressItem Field Functions 
            bool hasAddressItem() const { return this->addressItem_ != nullptr;};
            void deleteAddressItem() { this->addressItem_ = nullptr;};
            inline const vector<AddressItems::AddressItem> & getAddressItem() const { DARABONBA_PTR_GET_CONST(addressItem_, vector<AddressItems::AddressItem>) };
            inline vector<AddressItems::AddressItem> getAddressItem() { DARABONBA_PTR_GET(addressItem_, vector<AddressItems::AddressItem>) };
            inline AddressItems& setAddressItem(const vector<AddressItems::AddressItem> & addressItem) { DARABONBA_PTR_SET_VALUE(addressItem_, addressItem) };
            inline AddressItems& setAddressItem(vector<AddressItems::AddressItem> && addressItem) { DARABONBA_PTR_SET_RVALUE(addressItem_, addressItem) };


          protected:
            shared_ptr<vector<AddressItems::AddressItem>> addressItem_ {};
          };

          virtual bool empty() const override { return this->addressItems_ == nullptr
        && this->endpointDescription_ == nullptr && this->endpointId_ == nullptr && this->endpointType_ == nullptr && this->nodeItems_ == nullptr; };
          // addressItems Field Functions 
          bool hasAddressItems() const { return this->addressItems_ != nullptr;};
          void deleteAddressItems() { this->addressItems_ = nullptr;};
          inline const DBInstanceEndpoint::AddressItems & getAddressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, DBInstanceEndpoint::AddressItems) };
          inline DBInstanceEndpoint::AddressItems getAddressItems() { DARABONBA_PTR_GET(addressItems_, DBInstanceEndpoint::AddressItems) };
          inline DBInstanceEndpoint& setAddressItems(const DBInstanceEndpoint::AddressItems & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
          inline DBInstanceEndpoint& setAddressItems(DBInstanceEndpoint::AddressItems && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


          // endpointDescription Field Functions 
          bool hasEndpointDescription() const { return this->endpointDescription_ != nullptr;};
          void deleteEndpointDescription() { this->endpointDescription_ = nullptr;};
          inline string getEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(endpointDescription_, "") };
          inline DBInstanceEndpoint& setEndpointDescription(string endpointDescription) { DARABONBA_PTR_SET_VALUE(endpointDescription_, endpointDescription) };


          // endpointId Field Functions 
          bool hasEndpointId() const { return this->endpointId_ != nullptr;};
          void deleteEndpointId() { this->endpointId_ = nullptr;};
          inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
          inline DBInstanceEndpoint& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


          // endpointType Field Functions 
          bool hasEndpointType() const { return this->endpointType_ != nullptr;};
          void deleteEndpointType() { this->endpointType_ = nullptr;};
          inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
          inline DBInstanceEndpoint& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


          // nodeItems Field Functions 
          bool hasNodeItems() const { return this->nodeItems_ != nullptr;};
          void deleteNodeItems() { this->nodeItems_ = nullptr;};
          inline const DBInstanceEndpoint::NodeItems & getNodeItems() const { DARABONBA_PTR_GET_CONST(nodeItems_, DBInstanceEndpoint::NodeItems) };
          inline DBInstanceEndpoint::NodeItems getNodeItems() { DARABONBA_PTR_GET(nodeItems_, DBInstanceEndpoint::NodeItems) };
          inline DBInstanceEndpoint& setNodeItems(const DBInstanceEndpoint::NodeItems & nodeItems) { DARABONBA_PTR_SET_VALUE(nodeItems_, nodeItems) };
          inline DBInstanceEndpoint& setNodeItems(DBInstanceEndpoint::NodeItems && nodeItems) { DARABONBA_PTR_SET_RVALUE(nodeItems_, nodeItems) };


        protected:
          // The information about the endpoint.
          shared_ptr<DBInstanceEndpoint::AddressItems> addressItems_ {};
          // The user-defined description of the endpoint.
          shared_ptr<string> endpointDescription_ {};
          // The endpoint ID of the instance.
          shared_ptr<string> endpointId_ {};
          // The type of the endpoint. Valid values:
          // 
          // *   **Primary**: the read/write endpoint of the instance
          // *   **Readonly**: the read-only endpoint of the instance
          shared_ptr<string> endpointType_ {};
          // The information about the node that is configured for the endpoint.
          shared_ptr<DBInstanceEndpoint::NodeItems> nodeItems_ {};
        };

        virtual bool empty() const override { return this->DBInstanceEndpoint_ == nullptr; };
        // DBInstanceEndpoint Field Functions 
        bool hasDBInstanceEndpoint() const { return this->DBInstanceEndpoint_ != nullptr;};
        void deleteDBInstanceEndpoint() { this->DBInstanceEndpoint_ = nullptr;};
        inline const vector<DBInstanceEndpoints::DBInstanceEndpoint> & getDBInstanceEndpoint() const { DARABONBA_PTR_GET_CONST(DBInstanceEndpoint_, vector<DBInstanceEndpoints::DBInstanceEndpoint>) };
        inline vector<DBInstanceEndpoints::DBInstanceEndpoint> getDBInstanceEndpoint() { DARABONBA_PTR_GET(DBInstanceEndpoint_, vector<DBInstanceEndpoints::DBInstanceEndpoint>) };
        inline DBInstanceEndpoints& setDBInstanceEndpoint(const vector<DBInstanceEndpoints::DBInstanceEndpoint> & dBInstanceEndpoint) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpoint_, dBInstanceEndpoint) };
        inline DBInstanceEndpoints& setDBInstanceEndpoint(vector<DBInstanceEndpoints::DBInstanceEndpoint> && dBInstanceEndpoint) { DARABONBA_PTR_SET_RVALUE(DBInstanceEndpoint_, dBInstanceEndpoint) };


      protected:
        shared_ptr<vector<DBInstanceEndpoints::DBInstanceEndpoint>> DBInstanceEndpoint_ {};
      };

      virtual bool empty() const override { return this->DBInstanceEndpoints_ == nullptr
        && this->DBInstanceName_ == nullptr && this->ipVersion_ == nullptr; };
      // DBInstanceEndpoints Field Functions 
      bool hasDBInstanceEndpoints() const { return this->DBInstanceEndpoints_ != nullptr;};
      void deleteDBInstanceEndpoints() { this->DBInstanceEndpoints_ = nullptr;};
      inline const Data::DBInstanceEndpoints & getDBInstanceEndpoints() const { DARABONBA_PTR_GET_CONST(DBInstanceEndpoints_, Data::DBInstanceEndpoints) };
      inline Data::DBInstanceEndpoints getDBInstanceEndpoints() { DARABONBA_PTR_GET(DBInstanceEndpoints_, Data::DBInstanceEndpoints) };
      inline Data& setDBInstanceEndpoints(const Data::DBInstanceEndpoints & dBInstanceEndpoints) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpoints_, dBInstanceEndpoints) };
      inline Data& setDBInstanceEndpoints(Data::DBInstanceEndpoints && dBInstanceEndpoints) { DARABONBA_PTR_SET_RVALUE(DBInstanceEndpoints_, dBInstanceEndpoints) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline Data& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    protected:
      // The information of the endpoints of the instance.
      shared_ptr<Data::DBInstanceEndpoints> DBInstanceEndpoints_ {};
      // The name of the instance.
      shared_ptr<string> DBInstanceName_ {};
      // The version of the IP protocol. Valid values:
      // 
      // *   **ipv4**
      // *   **ipv6**
      shared_ptr<string> ipVersion_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDBInstanceEndpointsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDBInstanceEndpointsResponseBody::Data) };
    inline DescribeDBInstanceEndpointsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDBInstanceEndpointsResponseBody::Data) };
    inline DescribeDBInstanceEndpointsResponseBody& setData(const DescribeDBInstanceEndpointsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDBInstanceEndpointsResponseBody& setData(DescribeDBInstanceEndpointsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<DescribeDBInstanceEndpointsResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
