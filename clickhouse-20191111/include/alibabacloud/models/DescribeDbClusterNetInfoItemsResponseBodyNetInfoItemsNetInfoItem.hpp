// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODYNETINFOITEMSNETINFOITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFOITEMSRESPONSEBODYNETINFOITEMSNETINFOITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& obj) { 
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
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem() = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem(const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem &) = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem(DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem &&) = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem() = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& operator=(const DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem &) = default ;
    DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& operator=(DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->httpPort_ == nullptr && return this->httpsPort_ == nullptr && return this->IPAddress_ == nullptr && return this->jdbcPort_ == nullptr && return this->mySQLPort_ == nullptr
        && return this->netType_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // httpPort Field Functions 
    bool hasHttpPort() const { return this->httpPort_ != nullptr;};
    void deleteHttpPort() { this->httpPort_ = nullptr;};
    inline string httpPort() const { DARABONBA_PTR_GET_DEFAULT(httpPort_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setHttpPort(string httpPort) { DARABONBA_PTR_SET_VALUE(httpPort_, httpPort) };


    // httpsPort Field Functions 
    bool hasHttpsPort() const { return this->httpsPort_ != nullptr;};
    void deleteHttpsPort() { this->httpsPort_ = nullptr;};
    inline string httpsPort() const { DARABONBA_PTR_GET_DEFAULT(httpsPort_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setHttpsPort(string httpsPort) { DARABONBA_PTR_SET_VALUE(httpsPort_, httpsPort) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // jdbcPort Field Functions 
    bool hasJdbcPort() const { return this->jdbcPort_ != nullptr;};
    void deleteJdbcPort() { this->jdbcPort_ = nullptr;};
    inline string jdbcPort() const { DARABONBA_PTR_GET_DEFAULT(jdbcPort_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setJdbcPort(string jdbcPort) { DARABONBA_PTR_SET_VALUE(jdbcPort_, jdbcPort) };


    // mySQLPort Field Functions 
    bool hasMySQLPort() const { return this->mySQLPort_ != nullptr;};
    void deleteMySQLPort() { this->mySQLPort_ = nullptr;};
    inline string mySQLPort() const { DARABONBA_PTR_GET_DEFAULT(mySQLPort_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setMySQLPort(string mySQLPort) { DARABONBA_PTR_SET_VALUE(mySQLPort_, mySQLPort) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeDBClusterNetInfoItemsResponseBodyNetInfoItemsNetInfoItem& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The endpoint that is used to connect to the database.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The HTTP port number.
    std::shared_ptr<string> httpPort_ = nullptr;
    // The HTTPS port number.
    std::shared_ptr<string> httpsPort_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The port number that is used in Java Database Connectivity (JDBC).
    std::shared_ptr<string> jdbcPort_ = nullptr;
    // The port of the MySQL instance.
    std::shared_ptr<string> mySQLPort_ = nullptr;
    // The network type of the endpoint. Valid values:
    // 
    // *   Public: public endpoint
    // *   VPC: VPC
    std::shared_ptr<string> netType_ = nullptr;
    // The vSwitch ID.
    // 
    // >  If the value of the NetType parameter is set to Public, an empty string is returned.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    // 
    // >  If the value of the NetType parameter is set to Public, an empty string is returned.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
