// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections.hpp>
#include <alibabacloud/models/GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceInstanceResponseBodyNetworkConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyNetworkConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointServiceId, endpointServiceId_);
      DARABONBA_PTR_TO_JSON(PrivateVpcConnections, privateVpcConnections_);
      DARABONBA_PTR_TO_JSON(ReversePrivateVpcConnections, reversePrivateVpcConnections_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyNetworkConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointServiceId, endpointServiceId_);
      DARABONBA_PTR_FROM_JSON(PrivateVpcConnections, privateVpcConnections_);
      DARABONBA_PTR_FROM_JSON(ReversePrivateVpcConnections, reversePrivateVpcConnections_);
    };
    GetServiceInstanceResponseBodyNetworkConfig() = default ;
    GetServiceInstanceResponseBodyNetworkConfig(const GetServiceInstanceResponseBodyNetworkConfig &) = default ;
    GetServiceInstanceResponseBodyNetworkConfig(GetServiceInstanceResponseBodyNetworkConfig &&) = default ;
    GetServiceInstanceResponseBodyNetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBodyNetworkConfig() = default ;
    GetServiceInstanceResponseBodyNetworkConfig& operator=(const GetServiceInstanceResponseBodyNetworkConfig &) = default ;
    GetServiceInstanceResponseBodyNetworkConfig& operator=(GetServiceInstanceResponseBodyNetworkConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endpointId_ != nullptr
        && this->endpointServiceId_ != nullptr && this->privateVpcConnections_ != nullptr && this->reversePrivateVpcConnections_ != nullptr; };
    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfig& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointServiceId Field Functions 
    bool hasEndpointServiceId() const { return this->endpointServiceId_ != nullptr;};
    void deleteEndpointServiceId() { this->endpointServiceId_ = nullptr;};
    inline string endpointServiceId() const { DARABONBA_PTR_GET_DEFAULT(endpointServiceId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfig& setEndpointServiceId(string endpointServiceId) { DARABONBA_PTR_SET_VALUE(endpointServiceId_, endpointServiceId) };


    // privateVpcConnections Field Functions 
    bool hasPrivateVpcConnections() const { return this->privateVpcConnections_ != nullptr;};
    void deletePrivateVpcConnections() { this->privateVpcConnections_ = nullptr;};
    inline const vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections> & privateVpcConnections() const { DARABONBA_PTR_GET_CONST(privateVpcConnections_, vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>) };
    inline vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections> privateVpcConnections() { DARABONBA_PTR_GET(privateVpcConnections_, vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>) };
    inline GetServiceInstanceResponseBodyNetworkConfig& setPrivateVpcConnections(const vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections> & privateVpcConnections) { DARABONBA_PTR_SET_VALUE(privateVpcConnections_, privateVpcConnections) };
    inline GetServiceInstanceResponseBodyNetworkConfig& setPrivateVpcConnections(vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections> && privateVpcConnections) { DARABONBA_PTR_SET_RVALUE(privateVpcConnections_, privateVpcConnections) };


    // reversePrivateVpcConnections Field Functions 
    bool hasReversePrivateVpcConnections() const { return this->reversePrivateVpcConnections_ != nullptr;};
    void deleteReversePrivateVpcConnections() { this->reversePrivateVpcConnections_ = nullptr;};
    inline const vector<Models::GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections> & reversePrivateVpcConnections() const { DARABONBA_PTR_GET_CONST(reversePrivateVpcConnections_, vector<Models::GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>) };
    inline vector<Models::GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections> reversePrivateVpcConnections() { DARABONBA_PTR_GET(reversePrivateVpcConnections_, vector<Models::GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>) };
    inline GetServiceInstanceResponseBodyNetworkConfig& setReversePrivateVpcConnections(const vector<Models::GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections> & reversePrivateVpcConnections) { DARABONBA_PTR_SET_VALUE(reversePrivateVpcConnections_, reversePrivateVpcConnections) };
    inline GetServiceInstanceResponseBodyNetworkConfig& setReversePrivateVpcConnections(vector<Models::GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections> && reversePrivateVpcConnections) { DARABONBA_PTR_SET_RVALUE(reversePrivateVpcConnections_, reversePrivateVpcConnections) };


  protected:
    // The ID of the endpoint for the private connection.
    // 
    // >  This parameter is discontinued.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The ID of the endpoint service for the private connection.
    // 
    // >  This parameter is discontinued.
    std::shared_ptr<string> endpointServiceId_ = nullptr;
    // The information about private connections.
    std::shared_ptr<vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections>> privateVpcConnections_ = nullptr;
    // The information about the reverse private connection.
    std::shared_ptr<vector<Models::GetServiceInstanceResponseBodyNetworkConfigReversePrivateVpcConnections>> reversePrivateVpcConnections_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
