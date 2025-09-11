// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYITEMSADDRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNETINFORESPONSEBODYITEMSADDRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDBClusterNetInfoResponseBodyItemsAddress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNetInfoResponseBodyItemsAddress& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNetInfoResponseBodyItemsAddress& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(ConnectionStringPrefix, connectionStringPrefix_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeDBClusterNetInfoResponseBodyItemsAddress() = default ;
    DescribeDBClusterNetInfoResponseBodyItemsAddress(const DescribeDBClusterNetInfoResponseBodyItemsAddress &) = default ;
    DescribeDBClusterNetInfoResponseBodyItemsAddress(DescribeDBClusterNetInfoResponseBodyItemsAddress &&) = default ;
    DescribeDBClusterNetInfoResponseBodyItemsAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNetInfoResponseBodyItemsAddress() = default ;
    DescribeDBClusterNetInfoResponseBodyItemsAddress& operator=(const DescribeDBClusterNetInfoResponseBodyItemsAddress &) = default ;
    DescribeDBClusterNetInfoResponseBodyItemsAddress& operator=(DescribeDBClusterNetInfoResponseBodyItemsAddress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->connectionStringPrefix_ != nullptr && this->IPAddress_ != nullptr && this->netType_ != nullptr && this->port_ != nullptr && this->VPCId_ != nullptr
        && this->vSwitchId_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterNetInfoResponseBodyItemsAddress& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // connectionStringPrefix Field Functions 
    bool hasConnectionStringPrefix() const { return this->connectionStringPrefix_ != nullptr;};
    void deleteConnectionStringPrefix() { this->connectionStringPrefix_ = nullptr;};
    inline string connectionStringPrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionStringPrefix_, "") };
    inline DescribeDBClusterNetInfoResponseBodyItemsAddress& setConnectionStringPrefix(string connectionStringPrefix) { DARABONBA_PTR_SET_VALUE(connectionStringPrefix_, connectionStringPrefix) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBClusterNetInfoResponseBodyItemsAddress& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeDBClusterNetInfoResponseBodyItemsAddress& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBClusterNetInfoResponseBodyItemsAddress& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBClusterNetInfoResponseBodyItemsAddress& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterNetInfoResponseBodyItemsAddress& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The endpoint of the cluster.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The prefix of the cluster endpoint.
    std::shared_ptr<string> connectionStringPrefix_ = nullptr;
    // The IP address.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   **Public**: public endpoint.
    // *   **VPC**: Virtual Private Cloud (VPC) endpoint.
    std::shared_ptr<string> netType_ = nullptr;
    // The port number that is used to connect to the cluster.
    std::shared_ptr<string> port_ = nullptr;
    // The VPC ID.
    // 
    // >  If NetType is set to Public, an empty string is returned for this parameter.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The vSwitch ID.
    // 
    // >  If NetType is set to Public, an empty string is returned for this parameter.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
