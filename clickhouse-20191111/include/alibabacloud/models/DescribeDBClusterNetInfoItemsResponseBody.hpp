// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNetInfoItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_TO_JSON(EnableSLB, enableSLB_);
      DARABONBA_PTR_TO_JSON(NetInfoItems, netInfoItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNetworkType, clusterNetworkType_);
      DARABONBA_PTR_FROM_JSON(EnableSLB, enableSLB_);
      DARABONBA_PTR_FROM_JSON(NetInfoItems, netInfoItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterNetInfoItemsResponseBody() = default ;
    DescribeDBClusterNetInfoItemsResponseBody(const DescribeDBClusterNetInfoItemsResponseBody &) = default ;
    DescribeDBClusterNetInfoItemsResponseBody(DescribeDBClusterNetInfoItemsResponseBody &&) = default ;
    DescribeDBClusterNetInfoItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoItemsResponseBody() = default ;
    DescribeDBClusterNetInfoItemsResponseBody& operator=(const DescribeDBClusterNetInfoItemsResponseBody &) = default ;
    DescribeDBClusterNetInfoItemsResponseBody& operator=(DescribeDBClusterNetInfoItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetInfoItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetInfoItems& obj) { 
        DARABONBA_PTR_TO_JSON(NetInfoItem, netInfoItem_);
      };
      friend void from_json(const Darabonba::Json& j, NetInfoItems& obj) { 
        DARABONBA_PTR_FROM_JSON(NetInfoItem, netInfoItem_);
      };
      NetInfoItems() = default ;
      NetInfoItems(const NetInfoItems &) = default ;
      NetInfoItems(NetInfoItems &&) = default ;
      NetInfoItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetInfoItems() = default ;
      NetInfoItems& operator=(const NetInfoItems &) = default ;
      NetInfoItems& operator=(NetInfoItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NetInfoItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetInfoItem& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_TO_JSON(HttpPort, httpPort_);
          DARABONBA_PTR_TO_JSON(HttpsPort, httpsPort_);
          DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_TO_JSON(JdbcPort, jdbcPort_);
          DARABONBA_PTR_TO_JSON(MySQLPort, mySQLPort_);
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, NetInfoItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
          DARABONBA_PTR_FROM_JSON(HttpPort, httpPort_);
          DARABONBA_PTR_FROM_JSON(HttpsPort, httpsPort_);
          DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
          DARABONBA_PTR_FROM_JSON(JdbcPort, jdbcPort_);
          DARABONBA_PTR_FROM_JSON(MySQLPort, mySQLPort_);
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        NetInfoItem() = default ;
        NetInfoItem(const NetInfoItem &) = default ;
        NetInfoItem(NetInfoItem &&) = default ;
        NetInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetInfoItem() = default ;
        NetInfoItem& operator=(const NetInfoItem &) = default ;
        NetInfoItem& operator=(NetInfoItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->httpPort_ == nullptr && this->httpsPort_ == nullptr && this->IPAddress_ == nullptr && this->jdbcPort_ == nullptr && this->mySQLPort_ == nullptr
        && this->netType_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // connectionString Field Functions 
        bool hasConnectionString() const { return this->connectionString_ != nullptr;};
        void deleteConnectionString() { this->connectionString_ = nullptr;};
        inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
        inline NetInfoItem& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


        // httpPort Field Functions 
        bool hasHttpPort() const { return this->httpPort_ != nullptr;};
        void deleteHttpPort() { this->httpPort_ = nullptr;};
        inline string getHttpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, "") };
        inline NetInfoItem& setHttpPort(string httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


        // httpsPort Field Functions 
        bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
        void deleteHttpsPort() { this->httpsPort_ = nullptr;};
        inline string getHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, "") };
        inline NetInfoItem& setHttpsPort(string httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


        // IPAddress Field Functions 
        bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
        void deleteIPAddress() { this->IPAddress_ = nullptr;};
        inline string getIPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
        inline NetInfoItem& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


        // jdbcPort Field Functions 
        bool hasJdbcPort() const { return this->jdbcPort_ != nullptr;};
        void deleteJdbcPort() { this->jdbcPort_ = nullptr;};
        inline string getJdbcPort() const { DARABONBA_PTR_GET_DEFAULT(jdbcPort_, "") };
        inline NetInfoItem& setJdbcPort(string jdbcPort) { DARABONBA_PTR_SET_VALUE(jdbcPort_, jdbcPort) };


        // mySQLPort Field Functions 
        bool hasMySQLPort() const { return this->mySQLPort_ != nullptr;};
        void deleteMySQLPort() { this->mySQLPort_ = nullptr;};
        inline string getMySQLPort() const { DARABONBA_PTR_GET_DEFAULT(mySQLPort_, "") };
        inline NetInfoItem& setMySQLPort(string mySQLPort) { DARABONBA_PTR_SET_VALUE(mySQLPort_, mySQLPort) };


        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline NetInfoItem& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline NetInfoItem& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline NetInfoItem& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The endpoint that is used to connect to the database.
        shared_ptr<string> connectionString_ {};
        // The HTTP port number.
        shared_ptr<string> httpPort_ {};
        // The HTTPS port number.
        shared_ptr<string> httpsPort_ {};
        // The IP address.
        shared_ptr<string> IPAddress_ {};
        // The port number that is used in Java Database Connectivity (JDBC).
        shared_ptr<string> jdbcPort_ {};
        // The port of the MySQL instance.
        shared_ptr<string> mySQLPort_ {};
        // The network type of the endpoint. Valid values:
        // 
        // *   Public: public endpoint
        // *   VPC: VPC
        shared_ptr<string> netType_ {};
        // The vSwitch ID.
        // 
        // >  If the value of the NetType parameter is set to Public, an empty string is returned.
        shared_ptr<string> vSwitchId_ {};
        // The virtual private cloud (VPC) ID.
        // 
        // >  If the value of the NetType parameter is set to Public, an empty string is returned.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->netInfoItem_ == nullptr; };
      // netInfoItem Field Functions 
      bool hasNetInfoItem() const { return this->netInfoItem_ != nullptr;};
      void deleteNetInfoItem() { this->netInfoItem_ = nullptr;};
      inline const vector<NetInfoItems::NetInfoItem> & getNetInfoItem() const { DARABONBA_PTR_GET_CONST(netInfoItem_, vector<NetInfoItems::NetInfoItem>) };
      inline vector<NetInfoItems::NetInfoItem> getNetInfoItem() { DARABONBA_PTR_GET(netInfoItem_, vector<NetInfoItems::NetInfoItem>) };
      inline NetInfoItems& setNetInfoItem(const vector<NetInfoItems::NetInfoItem> & netInfoItem) { DARABONBA_PTR_SET_VALUE(netInfoItem_, netInfoItem) };
      inline NetInfoItems& setNetInfoItem(vector<NetInfoItems::NetInfoItem> && netInfoItem) { DARABONBA_PTR_SET_RVALUE(netInfoItem_, netInfoItem) };


    protected:
      shared_ptr<vector<NetInfoItems::NetInfoItem>> netInfoItem_ {};
    };

    virtual bool empty() const override { return this->clusterNetworkType_ == nullptr
        && this->enableSLB_ == nullptr && this->netInfoItems_ == nullptr && this->requestId_ == nullptr; };
    // clusterNetworkType Field Functions 
    bool hasClusterNetworkType() const { return this->clusterNetworkType_ != nullptr;};
    void deleteClusterNetworkType() { this->clusterNetworkType_ = nullptr;};
    inline string getClusterNetworkType() const { DARABONBA_PTR_GET_DEFAULT(clusterNetworkType_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBody& setClusterNetworkType(string clusterNetworkType) { DARABONBA_PTR_SET_VALUE(clusterNetworkType_, clusterNetworkType) };


    // enableSLB Field Functions 
    bool hasEnableSLB() const { return this->enableSLB_ != nullptr;};
    void deleteEnableSLB() { this->enableSLB_ = nullptr;};
    inline bool getEnableSLB() const { DARABONBA_PTR_GET_DEFAULT(enableSLB_, false) };
    inline DescribeDBClusterNetInfoItemsResponseBody& setEnableSLB(bool enableSLB) { DARABONBA_PTR_SET_VALUE(enableSLB_, enableSLB) };


    // netInfoItems Field Functions 
    bool hasNetInfoItems() const { return this->netInfoItems_ != nullptr;};
    void deleteNetInfoItems() { this->netInfoItems_ = nullptr;};
    inline const DescribeDBClusterNetInfoItemsResponseBody::NetInfoItems & getNetInfoItems() const { DARABONBA_PTR_GET_CONST(netInfoItems_, DescribeDBClusterNetInfoItemsResponseBody::NetInfoItems) };
    inline DescribeDBClusterNetInfoItemsResponseBody::NetInfoItems getNetInfoItems() { DARABONBA_PTR_GET(netInfoItems_, DescribeDBClusterNetInfoItemsResponseBody::NetInfoItems) };
    inline DescribeDBClusterNetInfoItemsResponseBody& setNetInfoItems(const DescribeDBClusterNetInfoItemsResponseBody::NetInfoItems & netInfoItems) { DARABONBA_PTR_SET_VALUE(netInfoItems_, netInfoItems) };
    inline DescribeDBClusterNetInfoItemsResponseBody& setNetInfoItems(DescribeDBClusterNetInfoItemsResponseBody::NetInfoItems && netInfoItems) { DARABONBA_PTR_SET_RVALUE(netInfoItems_, netInfoItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The network type of the cluster. Only VPC is supported.
    shared_ptr<string> clusterNetworkType_ {};
    // Indicates whether Server Load Balancer (SLB) is activated in the VPC. Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    shared_ptr<bool> enableSLB_ {};
    // The network information about the cluster.
    shared_ptr<DescribeDBClusterNetInfoItemsResponseBody::NetInfoItems> netInfoItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
