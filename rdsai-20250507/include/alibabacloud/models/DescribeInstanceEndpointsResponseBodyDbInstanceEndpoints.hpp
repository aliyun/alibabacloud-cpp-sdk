// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODYDBINSTANCEENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODYDBINSTANCEENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints() = default ;
    DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints(const DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints &) = default ;
    DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints(DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints &&) = default ;
    DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints() = default ;
    DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints& operator=(const DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints &) = default ;
    DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints& operator=(DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->ipType_ == nullptr && return this->port_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeInstanceEndpointsResponseBodyDBInstanceEndpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> ipType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
