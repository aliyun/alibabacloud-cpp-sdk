// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeResponseBodyEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(IP, IP_);
      DARABONBA_PTR_TO_JSON(NetType, netType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(PortDescription, portDescription_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeResponseBodyEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(IP, IP_);
      DARABONBA_PTR_FROM_JSON(NetType, netType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(PortDescription, portDescription_);
    };
    DescribeApplicationAttributeResponseBodyEndpoints() = default ;
    DescribeApplicationAttributeResponseBodyEndpoints(const DescribeApplicationAttributeResponseBodyEndpoints &) = default ;
    DescribeApplicationAttributeResponseBodyEndpoints(DescribeApplicationAttributeResponseBodyEndpoints &&) = default ;
    DescribeApplicationAttributeResponseBodyEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeResponseBodyEndpoints() = default ;
    DescribeApplicationAttributeResponseBodyEndpoints& operator=(const DescribeApplicationAttributeResponseBodyEndpoints &) = default ;
    DescribeApplicationAttributeResponseBodyEndpoints& operator=(DescribeApplicationAttributeResponseBodyEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->endpointId_ == nullptr && return this->IP_ == nullptr && return this->netType_ == nullptr && return this->port_ == nullptr && return this->portDescription_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApplicationAttributeResponseBodyEndpoints& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline DescribeApplicationAttributeResponseBodyEndpoints& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeApplicationAttributeResponseBodyEndpoints& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // netType Field Functions 
    bool hasNetType() const { return this->netType_ != nullptr;};
    void deleteNetType() { this->netType_ = nullptr;};
    inline string netType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
    inline DescribeApplicationAttributeResponseBodyEndpoints& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline DescribeApplicationAttributeResponseBodyEndpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // portDescription Field Functions 
    bool hasPortDescription() const { return this->portDescription_ != nullptr;};
    void deletePortDescription() { this->portDescription_ = nullptr;};
    inline string portDescription() const { DARABONBA_PTR_GET_DEFAULT(portDescription_, "") };
    inline DescribeApplicationAttributeResponseBodyEndpoints& setPortDescription(string portDescription) { DARABONBA_PTR_SET_VALUE(portDescription_, portDescription) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> endpointId_ = nullptr;
    std::shared_ptr<string> IP_ = nullptr;
    std::shared_ptr<string> netType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> portDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
