// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYENDPOINTLISTNETINFOITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYENDPOINTLISTNETINFOITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems() = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems(const DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems &) = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems(DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems &&) = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems() = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems& operator=(const DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems &) = default ;
    DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems& operator=(DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionString_ != nullptr
        && this->netType_ != nullptr && this->port_ != nullptr; };
    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyEndpointListNetInfoItems& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> connectionString_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
