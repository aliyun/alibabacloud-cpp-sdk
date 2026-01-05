// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSZONALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENDPOINTSZONALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEndpointsZonalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEndpointsZonalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEndpointsZonalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterEndpointsZonalResponseBody() = default ;
    DescribeDBClusterEndpointsZonalResponseBody(const DescribeDBClusterEndpointsZonalResponseBody &) = default ;
    DescribeDBClusterEndpointsZonalResponseBody(DescribeDBClusterEndpointsZonalResponseBody &&) = default ;
    DescribeDBClusterEndpointsZonalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEndpointsZonalResponseBody() = default ;
    DescribeDBClusterEndpointsZonalResponseBody& operator=(const DescribeDBClusterEndpointsZonalResponseBody &) = default ;
    DescribeDBClusterEndpointsZonalResponseBody& operator=(DescribeDBClusterEndpointsZonalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(DBEndpointDescription, DBEndpointDescription_);
        DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_TO_JSON(NodeWithRoles, nodeWithRoles_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
        DARABONBA_PTR_TO_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
        DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
        DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressItems, addressItems_);
        DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(DBEndpointDescription, DBEndpointDescription_);
        DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
        DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
        DARABONBA_PTR_FROM_JSON(NodeWithRoles, nodeWithRoles_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
        DARABONBA_PTR_FROM_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
        DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
        DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
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
      class AddressItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AddressItems& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(DashboardUsed, dashboardUsed_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(PrivateZoneConnectionString, privateZoneConnectionString_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, AddressItems& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(DashboardUsed, dashboardUsed_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(PrivateZoneConnectionString, privateZoneConnectionString_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
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
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->dashboardUsed_ == nullptr && this->IPAddress_ == nullptr && this->netType_ == nullptr && this->port_ == nullptr && this->privateZoneConnectionString_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcInstanceId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline AddressItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // dashboardUsed Field Functions 
        bool hasDashboardUsed() const { return this->dashboardUsed_ != nullptr;};
        void deleteDashboardUsed() { this->dashboardUsed_ = nullptr;};
        inline bool getDashboardUsed() const { DARABONBA_PTR_GET_DEFAULT(dashboardUsed_, false) };
        inline AddressItems& setDashboardUsed(bool dashboardUsed) { DARABONBA_PTR_SET_VALUE(dashboardUsed_, dashboardUsed) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline AddressItems& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline AddressItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline AddressItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // privateZoneConnectionString Field Functions 
        bool hasPrivateZoneConnectionString() const { return this->privateZoneConnectionString_ != nullptr;};
        void deletePrivateZoneConnectionString() { this->privateZoneConnectionString_ = nullptr;};
        inline string getPrivateZoneConnectionString() const { DARABONBA_PTR_GET_DEFAULT(privateZoneConnectionString_, "") };
        inline AddressItems& setPrivateZoneConnectionString(string privateZoneConnectionString) { DARABONBA_PTR_SET_VALUE(privateZoneConnectionString_, privateZoneConnectionString) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline AddressItems& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline AddressItems& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcInstanceId Field Functions 
        bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
        void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
        inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
        inline AddressItems& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      protected:
        shared_ptr<string> connectionString_ {};
        shared_ptr<bool> dashboardUsed_ {};
        shared_ptr<string> IPAddress_ {};
        shared_ptr<string> netType_ {};
        shared_ptr<string> port_ {};
        shared_ptr<string> privateZoneConnectionString_ {};
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcInstanceId_ {};
      };

      virtual bool empty() const override { return this->addressItems_ == nullptr
        && this->autoAddNewNodes_ == nullptr && this->DBClusterId_ == nullptr && this->DBEndpointDescription_ == nullptr && this->DBEndpointId_ == nullptr && this->endpointConfig_ == nullptr
        && this->endpointType_ == nullptr && this->nodeWithRoles_ == nullptr && this->nodes_ == nullptr && this->polarSccTimeoutAction_ == nullptr && this->polarSccWaitTimeout_ == nullptr
        && this->readWriteMode_ == nullptr && this->sccMode_ == nullptr; };
      // addressItems Field Functions 
      bool hasAddressItems() const { return this->addressItems_ != nullptr;};
      void deleteAddressItems() { this->addressItems_ = nullptr;};
      inline const vector<Items::AddressItems> & getAddressItems() const { DARABONBA_PTR_GET_CONST(addressItems_, vector<Items::AddressItems>) };
      inline vector<Items::AddressItems> getAddressItems() { DARABONBA_PTR_GET(addressItems_, vector<Items::AddressItems>) };
      inline Items& setAddressItems(const vector<Items::AddressItems> & addressItems) { DARABONBA_PTR_SET_VALUE(addressItems_, addressItems) };
      inline Items& setAddressItems(vector<Items::AddressItems> && addressItems) { DARABONBA_PTR_SET_RVALUE(addressItems_, addressItems) };


      // autoAddNewNodes Field Functions 
      bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
      void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
      inline string getAutoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
      inline Items& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Items& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // DBEndpointDescription Field Functions 
      bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
      void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
      inline string getDBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
      inline Items& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


      // DBEndpointId Field Functions 
      bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
      void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
      inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
      inline Items& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


      // endpointConfig Field Functions 
      bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
      void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
      inline string getEndpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
      inline Items& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


      // endpointType Field Functions 
      bool hasEndpointType() const { return this->endpointType_ != nullptr;};
      void deleteEndpointType() { this->endpointType_ = nullptr;};
      inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
      inline Items& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


      // nodeWithRoles Field Functions 
      bool hasNodeWithRoles() const { return this->nodeWithRoles_ != nullptr;};
      void deleteNodeWithRoles() { this->nodeWithRoles_ = nullptr;};
      inline string getNodeWithRoles() const { DARABONBA_PTR_GET_DEFAULT(nodeWithRoles_, "") };
      inline Items& setNodeWithRoles(string nodeWithRoles) { DARABONBA_PTR_SET_VALUE(nodeWithRoles_, nodeWithRoles) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
      inline Items& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


      // polarSccTimeoutAction Field Functions 
      bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
      void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
      inline string getPolarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
      inline Items& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


      // polarSccWaitTimeout Field Functions 
      bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
      void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
      inline string getPolarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
      inline Items& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


      // readWriteMode Field Functions 
      bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
      void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
      inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
      inline Items& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


      // sccMode Field Functions 
      bool hasSccMode() const { return this->sccMode_ != nullptr;};
      void deleteSccMode() { this->sccMode_ = nullptr;};
      inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
      inline Items& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


    protected:
      shared_ptr<vector<Items::AddressItems>> addressItems_ {};
      shared_ptr<string> autoAddNewNodes_ {};
      shared_ptr<string> DBClusterId_ {};
      shared_ptr<string> DBEndpointDescription_ {};
      shared_ptr<string> DBEndpointId_ {};
      shared_ptr<string> endpointConfig_ {};
      shared_ptr<string> endpointType_ {};
      shared_ptr<string> nodeWithRoles_ {};
      shared_ptr<string> nodes_ {};
      shared_ptr<string> polarSccTimeoutAction_ {};
      shared_ptr<string> polarSccWaitTimeout_ {};
      shared_ptr<string> readWriteMode_ {};
      shared_ptr<string> sccMode_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBClusterEndpointsZonalResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBClusterEndpointsZonalResponseBody::Items>) };
    inline vector<DescribeDBClusterEndpointsZonalResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBClusterEndpointsZonalResponseBody::Items>) };
    inline DescribeDBClusterEndpointsZonalResponseBody& setItems(const vector<DescribeDBClusterEndpointsZonalResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBClusterEndpointsZonalResponseBody& setItems(vector<DescribeDBClusterEndpointsZonalResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterEndpointsZonalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeDBClusterEndpointsZonalResponseBody::Items>> items_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
