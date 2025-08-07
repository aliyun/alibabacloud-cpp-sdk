// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGREVERSEPRIVATEVPCCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGREVERSEPRIVATEVPCCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
    };
    GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() = default ;
    GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections(const GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections &) = default ;
    GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections(GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections &&) = default ;
    GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections() = default ;
    GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& operator=(const GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections &) = default ;
    GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& operator=(GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointId_ != nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


  protected:
    // The endpoint ID of the reverse private connection.
    std::shared_ptr<string> endpointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
