// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODYRDSENDPOINTLISTADDRESSITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMIGRATIONRESPONSEBODYRDSENDPOINTLISTADDRESSITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(IPAddress, IPAddress_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SSLEnabled, SSLEnabled_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems() = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems(const DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems &) = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems(DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems &&) = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems() = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& operator=(const DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems &) = default ;
    DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& operator=(DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->IPAddress_ != nullptr && this->netType_ != nullptr && this->port_ != nullptr && this->SSLEnabled_ != nullptr && this->VPCId_ != nullptr
        && this->vSwitchId_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // IPAddress Field Functions 
    bool hasIPAddress() const { return this->IPAddress_ != nullptr;};
    void deleteIPAddress() { this->IPAddress_ = nullptr;};
    inline string IPAddress() const { DARABONBA_PTR_GET_DEFAULT(IPAddress_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& setIPAddress(string IPAddress) { DARABONBA_PTR_SET_VALUE(IPAddress_, IPAddress) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // SSLEnabled Field Functions 
    bool hasSSLEnabled() const { return this->SSLEnabled_ != nullptr;};
    void deleteSSLEnabled() { this->SSLEnabled_ = nullptr;};
    inline string SSLEnabled() const { DARABONBA_PTR_GET_DEFAULT(SSLEnabled_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& setSSLEnabled(string SSLEnabled) { DARABONBA_PTR_SET_VALUE(SSLEnabled_, SSLEnabled) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBClusterMigrationResponseBodyRdsEndpointListAddressItems& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // Indicates whether SSL encryption is enabled. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> connectionString_ = nullptr;
    // The type of the source database. Valid values:
    // 
    // *   **PolarDBMySQL**: The source database is a PolarDB for MySQL database when the major version of your PolarDB cluster is upgraded.
    // *   **RDS**: The source database is an ApsaraDB RDS database when data is migrated from ApsaraDB RDS to PolarDB for MySQL.
    std::shared_ptr<string> IPAddress_ = nullptr;
    // The ID of the endpoint.
    std::shared_ptr<string> netType_ = nullptr;
    // The type of the endpoint. Valid values:
    // 
    // *   **Normal**: the standard endpoint
    // *   **ReadWriteSplitting**: the read/write splitting endpoint
    std::shared_ptr<string> port_ = nullptr;
    // Indicates whether SSL encryption is enabled. Valid values:
    // 
    // - **Enabled**
    // - **Disabled**
    std::shared_ptr<string> SSLEnabled_ = nullptr;
    // The instance type.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The IP address of the endpoint.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
