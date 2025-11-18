// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODYINSTANCEENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEENDPOINTSRESPONSEBODYINSTANCEENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceEndpointsResponseBodyInstanceEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceEndpointsResponseBodyInstanceEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(IpType, ipType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceEndpointsResponseBodyInstanceEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(IpType, ipType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeInstanceEndpointsResponseBodyInstanceEndpoints() = default ;
    DescribeInstanceEndpointsResponseBodyInstanceEndpoints(const DescribeInstanceEndpointsResponseBodyInstanceEndpoints &) = default ;
    DescribeInstanceEndpointsResponseBodyInstanceEndpoints(DescribeInstanceEndpointsResponseBodyInstanceEndpoints &&) = default ;
    DescribeInstanceEndpointsResponseBodyInstanceEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceEndpointsResponseBodyInstanceEndpoints() = default ;
    DescribeInstanceEndpointsResponseBodyInstanceEndpoints& operator=(const DescribeInstanceEndpointsResponseBodyInstanceEndpoints &) = default ;
    DescribeInstanceEndpointsResponseBodyInstanceEndpoints& operator=(DescribeInstanceEndpointsResponseBodyInstanceEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionString_ == nullptr
        && return this->IP_ == nullptr && return this->ipType_ == nullptr && return this->port_ == nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeInstanceEndpointsResponseBodyInstanceEndpoints& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeInstanceEndpointsResponseBodyInstanceEndpoints& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // ipType Field Functions 
    bool hasIpType() const { return this->ipType_ != nullptr;};
    void deleteIpType() { this->ipType_ = nullptr;};
    inline string ipType() const { DARABONBA_PTR_GET_DEFAULT(ipType_, "") };
    inline DescribeInstanceEndpointsResponseBodyInstanceEndpoints& setIpType(string ipType) { DARABONBA_PTR_SET_VALUE(ipType_, ipType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeInstanceEndpointsResponseBodyInstanceEndpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> IP_ = nullptr;
    std::shared_ptr<string> ipType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
