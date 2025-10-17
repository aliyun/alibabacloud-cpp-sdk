// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworkResponseBodyConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworkResponseBodyConnections& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworkResponseBodyConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeGlobalDatabaseNetworkResponseBodyConnections() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyConnections(const DescribeGlobalDatabaseNetworkResponseBodyConnections &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyConnections(DescribeGlobalDatabaseNetworkResponseBodyConnections &&) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworkResponseBodyConnections() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyConnections& operator=(const DescribeGlobalDatabaseNetworkResponseBodyConnections &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyConnections& operator=(DescribeGlobalDatabaseNetworkResponseBodyConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->netType_ == nullptr && return this->port_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyConnections& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyConnections& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyConnections& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The endpoint URL of the database service.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The network type for the database connection.
    std::shared_ptr<string> netType_ = nullptr;
    // The port number for the database connection.
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
