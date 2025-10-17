// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMSAPPLICATIONSENDPOINTSENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSRESPONSEBODYITEMSAPPLICATIONSENDPOINTSENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint() = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint(const DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint &) = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint(DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint &&) = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint() = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint& operator=(const DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint &) = default ;
    DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint& operator=(DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IP_ == nullptr
        && return this->netType_ == nullptr && return this->port_ == nullptr; };
    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeApplicationsResponseBodyItemsApplicationsEndpointsEndpoint& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    std::shared_ptr<string> IP_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
