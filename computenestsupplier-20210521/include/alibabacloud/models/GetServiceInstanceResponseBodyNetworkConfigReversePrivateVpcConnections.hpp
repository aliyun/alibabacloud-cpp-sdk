// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGREVERSEPRIVATEVPCCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGREVERSEPRIVATEVPCCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointServiceId, endpointServiceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointServiceId, endpointServiceId_);
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
    virtual bool empty() const override { this->endpointId_ != nullptr
        && this->endpointServiceId_ != nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointServiceId Field Functions 
    bool hasEndpointServiceId() const { return this->endpointServiceId_ != nullptr;};
    void deleteEndpointServiceId() { this->endpointServiceId_ = nullptr;};
    inline string endpointServiceId() const { DARABONBA_PTR_GET_DEFAULT(endpointServiceId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections& setEndpointServiceId(string endpointServiceId) { DARABONBA_PTR_SET_VALUE(endpointServiceId_, endpointServiceId) };


  protected:
    // The ID of the endpoint for the reverse private connection.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The ID of the endpoint service for the reverse private connection.
    std::shared_ptr<string> endpointServiceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
