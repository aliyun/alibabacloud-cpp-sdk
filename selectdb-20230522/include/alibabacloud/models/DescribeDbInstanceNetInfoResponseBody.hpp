// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCENETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClustersNetInfos, DBClustersNetInfos_);
      DARABONBA_PTR_TO_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceNetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClustersNetInfos, DBClustersNetInfos_);
      DARABONBA_PTR_FROM_JSON(DBInstanceNetInfos, DBInstanceNetInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceNetInfoResponseBody() = default ;
    DescribeDBInstanceNetInfoResponseBody(const DescribeDBInstanceNetInfoResponseBody &) = default ;
    DescribeDBInstanceNetInfoResponseBody(DescribeDBInstanceNetInfoResponseBody &&) = default ;
    DescribeDBInstanceNetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceNetInfoResponseBody() = default ;
    DescribeDBInstanceNetInfoResponseBody& operator=(const DescribeDBInstanceNetInfoResponseBody &) = default ;
    DescribeDBInstanceNetInfoResponseBody& operator=(DescribeDBInstanceNetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstanceNetInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstanceNetInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(PortList, portList_);
        DARABONBA_PTR_TO_JSON(UserVisible, userVisible_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstanceNetInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(PortList, portList_);
        DARABONBA_PTR_FROM_JSON(UserVisible, userVisible_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      DBInstanceNetInfos() = default ;
      DBInstanceNetInfos(const DBInstanceNetInfos &) = default ;
      DBInstanceNetInfos(DBInstanceNetInfos &&) = default ;
      DBInstanceNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstanceNetInfos() = default ;
      DBInstanceNetInfos& operator=(const DBInstanceNetInfos &) = default ;
      DBInstanceNetInfos& operator=(DBInstanceNetInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PortList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PortList& obj) { 
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, PortList& obj) { 
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        PortList() = default ;
        PortList(const PortList &) = default ;
        PortList(PortList &&) = default ;
        PortList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PortList() = default ;
        PortList& operator=(const PortList &) = default ;
        PortList& operator=(PortList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline PortList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline PortList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The port that is used to connect to the instance.
        shared_ptr<int32_t> port_ {};
        // The protocol of the port. Valid values:
        // 
        // *   **HttpPort**: HTTP port.
        // *   **MySQLPort**: MySQL port.
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->connectionString_ == nullptr && this->ip_ == nullptr && this->netType_ == nullptr && this->portList_ == nullptr && this->userVisible_ == nullptr
        && this->vpcId_ == nullptr && this->vpcInstanceId_ == nullptr && this->vswitchId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline DBInstanceNetInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline DBInstanceNetInfos& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline DBInstanceNetInfos& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline DBInstanceNetInfos& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // portList Field Functions 
      bool hasPortList() const { return this->portList_ != nullptr;};
      void deletePortList() { this->portList_ = nullptr;};
      inline const vector<DBInstanceNetInfos::PortList> & getPortList() const { DARABONBA_PTR_GET_CONST(portList_, vector<DBInstanceNetInfos::PortList>) };
      inline vector<DBInstanceNetInfos::PortList> getPortList() { DARABONBA_PTR_GET(portList_, vector<DBInstanceNetInfos::PortList>) };
      inline DBInstanceNetInfos& setPortList(const vector<DBInstanceNetInfos::PortList> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
      inline DBInstanceNetInfos& setPortList(vector<DBInstanceNetInfos::PortList> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


      // userVisible Field Functions 
      bool hasUserVisible() const { return this->userVisible_ != nullptr;};
      void deleteUserVisible() { this->userVisible_ = nullptr;};
      inline bool getUserVisible() const { DARABONBA_PTR_GET_DEFAULT(userVisible_, false) };
      inline DBInstanceNetInfos& setUserVisible(bool userVisible) { DARABONBA_PTR_SET_VALUE(userVisible_, userVisible) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline DBInstanceNetInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline DBInstanceNetInfos& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline DBInstanceNetInfos& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The connection string of the instance.
      shared_ptr<string> connectionString_ {};
      // The IP address of the instance.
      shared_ptr<string> ip_ {};
      // The network type of the instance. Valid values:
      // 
      // *   **VPC**: indicates a virtual private cloud (VPC)-connected instance.
      // *   **PUBLIC**: indicates an Internet-connected instance.
      shared_ptr<string> netType_ {};
      // The ports.
      shared_ptr<vector<DBInstanceNetInfos::PortList>> portList_ {};
      // Indicates whether the network information is visible to users. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> userVisible_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The ID of the VPC-connected instance.
      shared_ptr<string> vpcInstanceId_ {};
      // The vSwitch ID.
      shared_ptr<string> vswitchId_ {};
    };

    class DBClustersNetInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBClustersNetInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(NetType, netType_);
        DARABONBA_PTR_TO_JSON(PortList, portList_);
        DARABONBA_PTR_TO_JSON(UserVisible, userVisible_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, DBClustersNetInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(NetType, netType_);
        DARABONBA_PTR_FROM_JSON(PortList, portList_);
        DARABONBA_PTR_FROM_JSON(UserVisible, userVisible_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      };
      DBClustersNetInfos() = default ;
      DBClustersNetInfos(const DBClustersNetInfos &) = default ;
      DBClustersNetInfos(DBClustersNetInfos &&) = default ;
      DBClustersNetInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBClustersNetInfos() = default ;
      DBClustersNetInfos& operator=(const DBClustersNetInfos &) = default ;
      DBClustersNetInfos& operator=(DBClustersNetInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PortList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PortList& obj) { 
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        };
        friend void from_json(const Darabonba::Json& j, PortList& obj) { 
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        };
        PortList() = default ;
        PortList(const PortList &) = default ;
        PortList(PortList &&) = default ;
        PortList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PortList() = default ;
        PortList& operator=(const PortList &) = default ;
        PortList& operator=(PortList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->port_ == nullptr
        && this->protocol_ == nullptr; };
        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline PortList& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline PortList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      protected:
        // The port that is used to connect to the BE cluster.
        shared_ptr<int32_t> port_ {};
        // The protocol of the port.
        shared_ptr<string> protocol_ {};
      };

      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->connectionString_ == nullptr && this->ip_ == nullptr && this->netType_ == nullptr && this->portList_ == nullptr && this->userVisible_ == nullptr
        && this->vpcId_ == nullptr && this->vpcInstanceId_ == nullptr && this->vswitchId_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline DBClustersNetInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline DBClustersNetInfos& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline DBClustersNetInfos& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // netType Field Functions 
      bool hasNetType() const { return this->netType_ != nullptr;};
      void deleteNetType() { this->netType_ = nullptr;};
      inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
      inline DBClustersNetInfos& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


      // portList Field Functions 
      bool hasPortList() const { return this->portList_ != nullptr;};
      void deletePortList() { this->portList_ = nullptr;};
      inline const vector<DBClustersNetInfos::PortList> & getPortList() const { DARABONBA_PTR_GET_CONST(portList_, vector<DBClustersNetInfos::PortList>) };
      inline vector<DBClustersNetInfos::PortList> getPortList() { DARABONBA_PTR_GET(portList_, vector<DBClustersNetInfos::PortList>) };
      inline DBClustersNetInfos& setPortList(const vector<DBClustersNetInfos::PortList> & portList) { DARABONBA_PTR_SET_VALUE(portList_, portList) };
      inline DBClustersNetInfos& setPortList(vector<DBClustersNetInfos::PortList> && portList) { DARABONBA_PTR_SET_RVALUE(portList_, portList) };


      // userVisible Field Functions 
      bool hasUserVisible() const { return this->userVisible_ != nullptr;};
      void deleteUserVisible() { this->userVisible_ = nullptr;};
      inline bool getUserVisible() const { DARABONBA_PTR_GET_DEFAULT(userVisible_, false) };
      inline DBClustersNetInfos& setUserVisible(bool userVisible) { DARABONBA_PTR_SET_VALUE(userVisible_, userVisible) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline DBClustersNetInfos& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline DBClustersNetInfos& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline DBClustersNetInfos& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The connection string of the BE cluster.
      shared_ptr<string> connectionString_ {};
      // The IP address of the BE cluster.
      shared_ptr<string> ip_ {};
      // The network type of the BE cluster.
      shared_ptr<string> netType_ {};
      shared_ptr<vector<DBClustersNetInfos::PortList>> portList_ {};
      // Indicates whether the network information is visible to users.
      shared_ptr<bool> userVisible_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
      // The VPC ID.
      shared_ptr<string> vpcInstanceId_ {};
      // The vSwitch ID.
      shared_ptr<string> vswitchId_ {};
    };

    virtual bool empty() const override { return this->DBClustersNetInfos_ == nullptr
        && this->DBInstanceNetInfos_ == nullptr && this->requestId_ == nullptr; };
    // DBClustersNetInfos Field Functions 
    bool hasDBClustersNetInfos() const { return this->DBClustersNetInfos_ != nullptr;};
    void deleteDBClustersNetInfos() { this->DBClustersNetInfos_ = nullptr;};
    inline const vector<DescribeDBInstanceNetInfoResponseBody::DBClustersNetInfos> & getDBClustersNetInfos() const { DARABONBA_PTR_GET_CONST(DBClustersNetInfos_, vector<DescribeDBInstanceNetInfoResponseBody::DBClustersNetInfos>) };
    inline vector<DescribeDBInstanceNetInfoResponseBody::DBClustersNetInfos> getDBClustersNetInfos() { DARABONBA_PTR_GET(DBClustersNetInfos_, vector<DescribeDBInstanceNetInfoResponseBody::DBClustersNetInfos>) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBClustersNetInfos(const vector<DescribeDBInstanceNetInfoResponseBody::DBClustersNetInfos> & dBClustersNetInfos) { DARABONBA_PTR_SET_VALUE(DBClustersNetInfos_, dBClustersNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBClustersNetInfos(vector<DescribeDBInstanceNetInfoResponseBody::DBClustersNetInfos> && dBClustersNetInfos) { DARABONBA_PTR_SET_RVALUE(DBClustersNetInfos_, dBClustersNetInfos) };


    // DBInstanceNetInfos Field Functions 
    bool hasDBInstanceNetInfos() const { return this->DBInstanceNetInfos_ != nullptr;};
    void deleteDBInstanceNetInfos() { this->DBInstanceNetInfos_ = nullptr;};
    inline const vector<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos> & getDBInstanceNetInfos() const { DARABONBA_PTR_GET_CONST(DBInstanceNetInfos_, vector<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos>) };
    inline vector<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos> getDBInstanceNetInfos() { DARABONBA_PTR_GET(DBInstanceNetInfos_, vector<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos>) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(const vector<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos> & dBInstanceNetInfos) { DARABONBA_PTR_SET_VALUE(DBInstanceNetInfos_, dBInstanceNetInfos) };
    inline DescribeDBInstanceNetInfoResponseBody& setDBInstanceNetInfos(vector<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos> && dBInstanceNetInfos) { DARABONBA_PTR_SET_RVALUE(DBInstanceNetInfos_, dBInstanceNetInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceNetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network information about the backend (BE) clusters.
    shared_ptr<vector<DescribeDBInstanceNetInfoResponseBody::DBClustersNetInfos>> DBClustersNetInfos_ {};
    // The network information about the instance.
    shared_ptr<vector<DescribeDBInstanceNetInfoResponseBody::DBInstanceNetInfos>> DBInstanceNetInfos_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
